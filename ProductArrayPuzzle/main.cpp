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
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];

	int right[n],left[n];
	right[n-1]=a[n-1];
	left[0]=a[0];
	for(int i=1;i<n;i++) left[i]=left[i-1]*a[i];
	for(int i=n-2;i>=0;i--) right[i]=right[i+1]*a[i];
	cout<<right[1]<<" ";
	
	for(int i=1;i<n-1;i++) cout<<right[i+1]*left[i-1]<<" ";
	cout<<left[n-2]<<"\n";
	return 0;
}


