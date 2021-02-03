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
	int inc_prev,exc_prev,inc_cur,exc_cur;
	inc_cur=0;
	exc_cur=0;
	inc_prev=0;
	exc_prev=0;
	for(int i=0;i<n;i++){
		exc_cur=max(inc_prev,exc_prev);
		inc_cur=exc_prev+a[i];
		exc_prev=exc_cur;
		inc_prev=inc_cur;
	}
	cout<<max(inc_cur,exc_cur);
	return 0;
}

