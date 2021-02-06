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
	while(true){
		ll n,m;
		cin>>n;
		if (n==0){
			break;
		}
		ll a[n];
		for (ll i=0;i<n;i++) cin>>a[i];
		cin>>m;
		ll b[m];
		for (ll i=0;i<m;i++) cin>>b[i];

		ll suma=0,sumb=0,i=0,j=0,ans=0;

		while(i<n && j<m){
			if (a[i]<b[j]){
				suma+=a[i];
				i++;
			}
			else if (a[i]>b[j]){
				sumb+=b[j];
				j++;
			}
			else{
				ans+=max(suma,sumb)+a[i];
				suma=0;
				sumb=0;
				i++;
				j++;
			}
		}
		// suppose n <m  and it loops break s1 , s2 is left 
		while (i<n){
			suma+=a[i];
			i++;
		}
		while (j<m){
			sumb+=b[j];
			j++;
		}
		// add the residual ones
		ans+=max(sumb,suma);
		cout<<ans<<"\n";
	}
}


