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
	ll tc;
	cin>>tc;
	while(tc--){
		ll n,q;
		cin>>n>>q;
		pair<ll,ll> intervals[n];
		for(ll i=0;i<n;i++){ 
			cin>>intervals[i].first;
			cin>>intervals[i].second;
		}
		sort(intervals,intervals+n);
		vector <pair<int,int>> MergeIntervals;

		for (ll i=0;i<n;i++){
			ll start=i;
			ll end=i;
			while(end<n-1 && intervals[end+1].first<=intervals[end].second){
				end++;
			}
			MergeIntervals.push_back({intervals[start].first,intervals[end].second});
			i=end;
		}
		//for (ll i=0;i<MergeIntervals.size();i++) cout<<MergeIntervals[i].first<<" "<<MergeIntervals[i].second<<"\n";

		while(q--){
			ll k;
			cin>>k;
			ll ans=-1;
			for (ll i=0;i<=MergeIntervals.size();i++){
				ll temp =MergeIntervals[i].second-MergeIntervals[i].first+1;
				if (temp>=k){
					ans=MergeIntervals[i].first+k-1;
					break;
				}
				else k-=temp;
			}
			cout<<ans<<"\n";
		}
	}
	
	return 0;
}


