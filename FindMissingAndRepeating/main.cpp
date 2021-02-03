# include <bits/stdc++.h>
using namespace std;

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
	sort(a,a+n);
	for (int i=0;i<n;i++){
		if (i<n-1 && a[i]==a[i+1]){
			cout<<a[i]<<" ";
			break;
		}
	}
	int curr=1;
	for(int i=0;i<n;i++){
		if (a[i]==curr) curr++;
	}
	cout<<curr<<"\n";

	return 0;
}

