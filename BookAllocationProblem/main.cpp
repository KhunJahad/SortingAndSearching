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
	int cur_sum=0;
	int students=1;
	for(int i=0;i<n;i++){
		if (a[i]>num) return false;
		if (a[i]+cur_sum>num){
			students++;
			cur_sum=a[i];
			if (students>m) return false;
		}
		else cur_sum+=a[i];
	}
	return true;
}

int solve (int a[],int n,int m){
	if (n<m) return -1;
	int sum=0;
	for (int i=0;i<n;i++) sum+=a[i];
	int start=0;
	int end=sum;
	int ans=INT_MAX; // we have to find the minimum maximum

	while(start<=end){
		int mid=(start+end)/2;
		if (ispossible(a,n,m,mid)){
			ans=min(ans,mid);
			end=mid-1;
		}
		else start=mid+1;
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


