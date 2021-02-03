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
	int maj_index=0;
	int count=1;
	
	for(int i=1;i<n;i++){
		if (a[i]==a[maj_index]) count++;
		else count--;

		if (count==0){
			maj_index=i;
			count=1;
		}
	}

	count=0;
	for (int i=0;i<n;i++){
		if (a[i]==a[maj_index]) count++;
	}
	if (count>n/2) cout<<a[maj_index]<<"\n";
	else cout<<"-1\n";
	return 0;
}

