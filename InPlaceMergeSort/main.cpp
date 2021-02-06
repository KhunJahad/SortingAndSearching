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

void merge(ll arr[],ll start,ll mid,ll end){
	ll start2=mid;
	if (arr[mid-1]<=arr[mid]) return;
	while(start<mid && start2<=end){

		if (arr[start]<=arr[start2]) start2++;
		else{
			ll index=start2;
			ll value=arr[start2];

			while(index!=start){
				arr[index]=arr[index-1];
				index--;
			}
			arr[start]=value;
			start++;
			start2++;
			mid++;
		}
	}

}


void mergesort(ll arr[],ll start,ll end){
	
	if (start<end){
		ll mid=(start+end)/2;
		mergesort(arr,start,mid);
		mergesort(arr,mid+1,end);
		merge(arr,start,mid+1,end);
	}
}

int main(){
	read_input();
	ll n;
	cin>>n;
	ll arr[n];
	for (ll i=0;i<n;i++) cin>>arr[i];
	mergesort(arr,0,n-1);
	for (ll i=0;i<n;i++) cout<<arr[i]<<" ";
	return 0;
}


