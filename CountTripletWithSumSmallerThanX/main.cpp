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
	ll n,x;
	cin>>n>>x;
	ll a[n];
	for(ll i=0;i<n;i++) cin>>a[i];
	
	sort(a,a+n);
	ll ans=0;
	for(ll i=0;i<n-2;i++){

		ll j=i+1;
		ll k=n-1;

		while (j<k){
			if (a[i]+a[j]+a[k]>=x) k--;
			else{
				ans+=(k-j);
				j++;
			}
		}
	}
	cout<<ans<<"\n";	
	return 0;
}


