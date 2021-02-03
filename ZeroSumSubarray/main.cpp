# include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll zero=0;

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

	int ans=0;
	int sum=0;

	map <int,int> mp;
	for(int i=0;i<n;i++){
		sum+=a[i];
		if (sum==0) ans++;
		
		if (mp[sum]){
			ans+=mp[sum];
		}
		mp[sum]++;
	}

	cout<<ans<<"\n";
	
	return 0;
}


