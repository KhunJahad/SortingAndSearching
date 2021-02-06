# include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll zero=100;

void read_input(){
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
}

ll merge(ll arr[],ll temp[],ll start,ll mid,ll end){
	ll i=start,j=mid,k=start,count=0;

	while (i<mid && j<=end){
		if  (arr[i]<=arr[j]){
			temp[k++]=arr[i++];
		}
		else{
			temp[k++]=arr[j++];
			count+=(mid-i);
		}
	}
	while(i<mid){
		temp[k++]=arr[i++];
	}
	while(j<=end){
		temp[k++]=arr[j++];
	}

	for(ll i=start;i<=end;i++) arr[i]=temp[i];
	return count;
}


ll mergesort(ll arr[],ll temp[],ll start,ll end){
	ll count=0;
	if (start<end){
		ll mid=(start+end)/2;
		count+=mergesort(arr,temp,start,mid);
		count+=mergesort(arr,temp,mid+1,end);
		count+=merge(arr,temp,start,mid+1,end);
	}
	return count;
}

ll inversion(ll arr[],ll n){
	ll temp[n];
	return mergesort(arr,temp,0,n-1);
}

int main(){
	read_input();
	ll n;
	cin>>n;
	ll arr[n];
	for (ll i=0;i<n;i++) cin>>arr[i];
	cout<<inversion(arr,n)<<"\n";
	return 0;
}


