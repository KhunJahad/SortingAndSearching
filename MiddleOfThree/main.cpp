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
	int a,b,c;
	cin>>a>>b>>c;
	int max_elem=0;
	int min_elem=0;
	max_elem=max(a,b);
	max_elem=max(max_elem,c);
	min_elem=min(a,b);
	min_elem=min(min_elem,c);

	if (a==max_elem && b==min_elem) cout<<c<<"\n";
	if (a==max_elem && c==min_elem) cout<<b<<"\n";
	if (b==max_elem && a==min_elem) cout<<c<<"\n";
	if (b==max_elem && c==min_elem) cout<<a<<"\n";
	if (c==max_elem && a==min_elem) cout<<b<<"\n";
	if (c==max_elem && b==min_elem) cout<<a<<"\n";
	return 0;
}

