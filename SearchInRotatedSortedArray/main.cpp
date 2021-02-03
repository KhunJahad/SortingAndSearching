# include <bits/stdc++.h>
using namespace std;

void read_input(){
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
}

int main(){
	read_input();
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	int start=0;
	int end=n;
	int ans=-1;
	while(start<end){
		int mid=start+(end-start)/2;
		if (a[mid]==k){
			ans=mid;
			break;
		}
		if (a[start]<=a[mid]){
			if (k>=a[start] && k<a[mid]) end=mid;
			else start=mid+1;
		}
		else{
			if (k<=a[end-1] && k>=a[mid]) start=mid+1;
			else end=mid;
		}
	}

	cout<<ans<<"\n";
	return 0;
}

