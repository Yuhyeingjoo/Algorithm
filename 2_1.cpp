#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>


using namespace std;

vector<pair<int,int>> v;
int index= 0, num = 0,n=0;
bool comp(pair<int,int> p1, pair<int,int> p2){
	if(p1.second=p2.second)
		return p1.first<p2.first;
	else
		return p1.second<p2.second;
}
int main(){
	int s,f;
	cin>>n;

	for(int i=0; i<n; i++){
		cin>>s>>f;
		pair<int,int> p = make_pair(s,f);
		v.push_back(p);
	}
	int now = 0;
	sort(v.begin(),v.end(),comp);
	for(int i=0; i<n; i++){
		if(v[i].first>=now){
			now = v[i].second ;
			num++;
		}
	}
	cout<<num<<endl;
	
}
