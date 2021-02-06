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

bool check(int x,int n){
	int count=0;
	while(x){
		count+=x/5;
		x=x/5;

		if (count>=n) return true;
	}
	return false;
}

int main(){
	read_input();
	ll n;
	cin>>n;
	int start=0;
	int end=INT_MAX;
	int ans=INT_MAX;
	while(start<=end){
		int mid=(start+end)/2;
		if (check(mid,n)){
			ans=min(mid,ans);
			end=mid-1;
		}
		else start=mid+1;
	}
	cout<<ans<<"\n";

}


