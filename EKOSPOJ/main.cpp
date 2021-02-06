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

bool ispossible(int a[],int n,int m,int num){
	
	int chopped=0;
	for (int i=0;i<n;i++){
		if (a[i]>=num){
			if (chopped+(a[i]-num)>=m) return true;
			chopped+=(a[i]-num);
		}
	}
	return false;
}

int solve (int a[],int n,int m){
	int start=0;
	int end=*max_element(a,a+n);
	int ans=-1;
	while(start<=end){
		int mid=(start+end)/2;
		//cout<<start<<" "<<end<<"\n";
		if (ispossible(a,n,m,mid)){
			ans=max(ans,mid);
			start=mid+1;
		}
		else end=mid-1;
	}
	return ans;
}

int main(){
	read_input();
	int n,m;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	cout<<solve(a,n,m)<<"\n";
	
	return 0;
}


