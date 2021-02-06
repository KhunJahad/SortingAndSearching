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

int main(){
	read_input();
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];

	int start=0;
	int end=n-1;
	int flag=1;
	while(start<=end){
		int mid=(start+end)/2;
		if (mid<n-1 && arr[mid]>arr[mid+1]){
			cout<<mid+1<<"\n";
			flag=0;
			break;
		}
		if (arr[start]<=arr[mid]) start=mid+1;
		else if (arr[end]>=arr[mid]) end=mid-1;
	}
	if (flag) cout<<start;
	return 0;
}


