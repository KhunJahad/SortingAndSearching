# include <bits/stdc++.h>
using namespace std;

void read_input(){
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
}

struct nums{
	int a,b,c,d;
	bool operator<(const nums& t) const
    { 
        if (this->a != t.a) return (this->a < t.a);
        if (this->b != t.b) return (this->b < t.b);
        if (this->c != t.c) return (this->c < t.c);
        return (this->d < t.d); 
    }
	
};
int main(){
	read_input();
	int n,x;
	cin>>n>>x;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	map <nums,int> s;
	for(int i=0;i<n;i++){
		for (int j=i+1;j<n;j++){
			for(int k=j+1;k<n;k++){
				int req=x-a[i]-a[j]-a[k];
				if (binary_search(a+k+1,a+n,req)){
					//cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<" "<<req<<"\n";
					nums temp={a[i],a[j],a[k],req};
					s[temp]++;
				}
			}
		}
	}
	vector <vector<int>> ans;
	for (auto itr=s.begin();itr!=s.end();itr++){
		cout<<itr->first.a<<" "<<itr->first.b<<" "<<itr->first.c<<" "<<itr->first.d<<"\n";
		vector <int> temp;
		temp.push_back(itr->first.a);
		temp.push_back(itr->first.b);
		temp.push_back(itr->first.c);
		temp.push_back(itr->first.d);
		ans.push_back(temp);
	}
	return 0;
}

