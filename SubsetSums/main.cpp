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


void solve(ll arr[],ll start,ll end,vector <ll> &temp){
	ll s=0; // store the running sum
	ll n=end-start+1; // number of elements
	for (ll i=0;i<(1<<n);i++){
		// loop will run for (2^n) -1
		s=0;
		ll j=start;
		ll x=i;
		while(x){
			ll l=x&1; // if l is odd then add current element.
			if (l) s+=arr[j];
			j++;
			x=x>>1; // x/2
		}
		temp.push_back(s);
	}

}

int main(){
	read_input();
	ll n,a,b;
	cin>>n>>a>>b;

	ll arr[n];
	for (ll i=0;i<n;i++) cin>>arr[i];

	vector <ll> v1,v2; 
	// breaking problem into two parts to reduce time
	solve(arr,0,(n/2),v1);
	solve(arr,(n/2)+1,n-1,v2);
	// sorting 
	sort(v2.begin(),v2.end());
	ll ans=0;
	// adding to answer the elements that fit the size
	// v1 is the subset sum of reduced size 
	// v2 is the subset sum of later redued size
	for (ll i=0;i<v1.size();i++){
		ll low=lower_bound(v2.begin(),v2.end(),a-v1[i])-v2.begin();
		ll up=upper_bound(v2.begin(),v2.end(),b-v1[i])-v2.begin();
		ans+=(up-low);
	}
	cout<<ans<<"\n";


	return 0;
}


