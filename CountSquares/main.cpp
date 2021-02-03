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
	int n;
	cin>>n;
	int temp=1;
	int ans=0;
	while(n>temp*temp){
		temp++;
		ans++;
	}
	cout<<ans<<"\n";
	
	return 0;
}

