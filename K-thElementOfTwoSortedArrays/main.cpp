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

int findKth(int *a,int *b,int *enda,int *endb,int k){

	if (a==enda) return b[k];
	if (b==endb) return a[k];
	int mid1=(enda-a)/2;
	int mid2=(endb-b)/2;

	if (mid1+mid2<k){
		// meaning the k th element is in this range
		// a[mid1] is greater than a[mid2] and k is this range
		// so we can say that we can push start to the mid2+1
		// in case of b 
		if (a[mid1]>b[mid2]) return findKth(a,b+mid2+1,enda,endb,k-mid2-1);
		else return findKth(a+mid1+1,b,enda,endb,k-mid1-1);
	}
	else{
		//meaning we need to expand our operation range 
		if (a[mid1]>b[mid2]) return findKth(a,b,a+mid1,endb,k);
		else return findKth(a,b,enda,b+mid2,k);

	}
}

int main(){
	read_input();
	int n,m,k;
	cin>>n>>m>>k;
	int a[n],b[n];
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<m;i++) cin>>b[i];

	cout<<findKth(a,b,a+n,b+m,k-1);
	return 0;
}


