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
	ll a,n,d;
	cin>>a>>n>>d;

	// nth term of ap n =  a+(c-1)*d;   n-a == (num-1)*d
	ll start=1;
	ll end=INT_MAX;
	ll flag=1;
	while(start<=end){
		ll mid=(start+end)/2;
		ll value=a+(mid-1)*d;
		//cout<<start<<" "<<end<<"\n";
		if (n==value){
			cout<<"1\n";
			flag=0;
			break;
		}
		else if (n<value){
			if (d>0) end=mid-1;
			else start=mid+1;
		}
		else {
			if (d>0) start=mid+1;
			else end=mid-1;
			} 
	}

	if (flag) cout<<"0\n";
	return 0;
}


