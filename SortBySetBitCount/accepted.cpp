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

bool cmp(int a,int b)
{
    return __builtin_popcount(a) > __builtin_popcount(b);
}

int main(){
	read_input();
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	stable_sort(a,a+n,cmp);
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	return 0;
}


