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

int main(){
	read_input();
	int n;
	cin>>n;
	int a[n];
	for (int i=0;i<n;i++) cin>>a[i];

	pair<int,int> arrPos[n];
	
	for(int i=0;i<n;i++){
		arrPos[i].first=a[i];
		arrPos[i].second=i;
	}

	sort(arrPos,arrPos+n);

	vector <bool> visited(n,false);

	int ans=0;

	for (int i=0;i<n;i++){
		if (visited[i] || arrPos[i].second==i){
			continue;
		}

		int j=i;
		int cycle_size=0;

		while(!visited[j]){
			visited[j]=true;
			j=arrPos[j].second;
			cycle_size++;
		}

		if (cycle_size>0) ans+=(cycle_size-1);
	}

	cout<<ans<<"\n";
	
	
	return 0;
}


