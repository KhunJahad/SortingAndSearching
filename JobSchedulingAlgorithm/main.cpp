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

struct job{
	int start,finish,profit;
};

bool jobcomparator(job a,job b){
	return a.finish<b.finish;
}

bool lastjob(job a[],int n){
	
	int start=0;
	int end=n-1;
	while(start<=end){
		int mid=(start+end)/2;
		if (a[mid].finish<=a[n].start){
			// checking if there is further possibility 
			if (a[mid+1].finish<=a[n].start) start=mid+1;
			else return mid;
		}
		else end=mid-1;
	}
	return -1;
}

int findMaxProfit(job a[],int n){
	sort(a,a+n,jobcomparator);
	int table[n];
	table[0]=a[0].profit;

	for(int i=1;i<n;i++){
		int IncProf=a[i].profit;
		int l=lastjob(a,i);
		if (l!=-1) IncProf+=table[l];
		table[i]=max(table[i-1],IncProf);
	}
	return table[n-1];
}

int main(){
	read_input();
	job arr[] = {{3, 10, 20}, {1, 2, 50}, {6, 19, 100}, {2, 100, 200}}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    cout << "Optimal profit is " << findMaxProfit(arr, n);
	return 0;
}


