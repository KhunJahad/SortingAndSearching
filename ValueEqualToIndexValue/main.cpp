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
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];

	for(int i=0;i<n;i++){
		if (a[i]==i+1){
			cout<<i+1<<" ";
		}
	}
	return 0;
}

