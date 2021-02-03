# include <bits/stdc++.h>
using namespace std;

#define R 3
#define C 3

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
		int flag=0;
		for(int i=0;i<n;i++){
			if (a[i]==k){
				cout<<i<<" ";
				flag=1;
				break;
			}
		}

		for(int i=n-1;i>=0;i--){
			if (a[i]==k){
				cout<<i<<"\n";
				flag=1;
				break;
			}
		}

		if (!flag) cout<<-1<<"\n";
	}
	return 0;
}

