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

bool check(ll c,ll num,ll a[],ll n){
	ll cows=1;
	ll pos=a[0];
	for(ll i=1;i<n;i++){
		if (a[i]-pos>=num){
			pos=a[i];
			cows++;
		}
		if (c==cows) return true;
	}
	return false;
}

ll solve(ll a[],ll n,ll c){
	sort(a,a+n);
	ll start=0;
	ll end=a[n-1];
	ll ans=-1;

	while(start<end){
		ll mid=(start+end)/2;
		if (check(c,mid,a,n)){
			ans=max(ans,mid);
			start=mid+1;
		}
		else end=mid;
	}
	return ans;
}

int main(){
	read_input();
	ll tc;
	cin>>tc;
	while(tc--){
		ll n,c;
		cin>>n>>c;
		ll a[n];
		for(ll i=0;i<n;i++) cin>>a[i];
		cout<<solve(a,n,c)<<"\n";
	}
	return 0;
}


