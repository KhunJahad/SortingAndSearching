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

int count_bits(int a){

	int count=0;
	while(a){
		if (a&1) count++;
		a=a>>1;
	}
	return count;
}
bool cmp(int a,int b){
	int a_count=count_bits(a);
	int b_count=count_bits(b);

	if (a_count<=b_count) return false;
	return true;
}

int main(){
	read_input();
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	return 0;
}


