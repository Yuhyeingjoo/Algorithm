#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>


using namespace std;

vector<pair<int,int>> v;
int stream = 0;
int index= 0, num = 0,n=0;
bool comp(pair<int,int> p1, pair<int,int> p2){
	if(p1.second<p2.second)
		return true;
	else
		return false;
}
void check(){
while(index<n){	
	if(index==0){
		stream = v[index].second;
		num++;
	//	cout<<v[index].first<<" "<<v[index].second<<endl;
		index++;
	}
	else{
		while(stream==v[index].second){
			index++;
			if(index<n&&v[index].first==stream)
				num++;
		}
		if(v[index].first>=stream){
			stream = v[index].second;
			num++;
		//	cout<<v[index].first<<" "<<v[index].second<<endl;
			index++;
		}
		else
			index++;

	}
}
}
int main(){
	int s,f;
	cin>>n;

	for(int i=0; i<n; i++){
		cin>>s>>f;
		pair<int,int> p = make_pair(s,f);
		v.push_back(p);
	}
	sort(v.begin(),v.end(),comp);
		check();
	cout<<num<<endl;
	
}
