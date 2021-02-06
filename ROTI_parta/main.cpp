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

ll partacal(ll time,ll r){
	ll start=0;
	ll end=INT_MAX;
	ll ans=INT_MIN;
	while(start<=end){
		ll mid=(start+end)/2;
		ll val=mid*(2*r+(mid-1)*r);
		if (val>2*time) end=mid-1;
		else{
			ans=max(ans,mid);
			start=mid+1;
		}
	}
	return ans;
}

bool check(ll a[],ll n,ll time,ll req_num){
	ll cur_num=0;
	for(int i=0;i<n;i++){
		cur_num+=partacal(time,a[i]);
		if  (cur_num>=req_num) return true;
	}
	return false;
}


int main(){
	read_input();
	ll tc;
	cin>>tc;
	while(tc--){
		ll n,l;
		cin>>n>>l;
		ll cooks[l];
		for(ll i=0;i<l;i++) cin>>cooks[i];
		ll start=0;
		ll end=INT_MAX;
		ll ans=INT_MAX;
		sort(cooks,cooks+l);
		while(start<=end){
			ll mid=(start+end)/2; // time
			if (check(cooks,l,mid,n)){
				ans=min(ans,mid);
				end=mid-1;
			}
			else start=mid+1;
		}
		cout<<ans<<"\n";
	}
}


