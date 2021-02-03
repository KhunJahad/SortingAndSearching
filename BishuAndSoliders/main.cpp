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
	int a[n];
	for (int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	int sum[n];
	sum[0]=a[0];
	for (int i=1;i<n;i++) sum[i]=a[i]+sum[i-1];
	int rounds;
	cin>>rounds;
	while(rounds--){
		int m;
		cin>>m;
		int index=upper_bound(a,a+n,m)-a;
		cout<<index<<" "<<sum[index-1]<<"\n";
	}
	
	return 0;
}


