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
	int tc;
	cin>>tc;
	while(tc--){
		int n,k;
		cin>>n>>k;

		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		int flag=1;
		for(int i=0;i<n;i++){
			int req=k+a[i];
			if(binary_search(a+i,a+n,req)){
				cout<<"1\n";
				flag=0;
				break;
			}
		}
		if (flag) cout<<"-1\n";
	}
	return 0;
}

