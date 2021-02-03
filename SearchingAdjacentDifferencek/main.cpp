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
	int n,k,x;
	cin>>n>>k>>x;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	int i=0;

	while(i<n){
		if (a[i]==x){
			cout<<i<<"\n";
			break;
		}
		else{
			int temp=abs(a[i]-x)/k;
			if (temp==0) i++;
			else i+=temp;
		}
	}
	
	return 0;
}

