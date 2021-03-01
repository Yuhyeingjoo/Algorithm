#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool comp(string s1, string s2){
	if(s1.size()==s2.size()){
		return s1<s2;
	}
	return s1.size()<s2.size();
}

int main(){
	vector<string> v;
	string s;
	int n;

	cin>>n;

	for(int i = 0 ; i< n;  i++){
		cin>>s;
		v.push_back(s);
	}
	sort(v.begin(),v.end(),comp);

	string check;

	for(int i=0; i<n; i++){
		if(check == v[i])continue;
		cout<<v[i]<<endl;
		check = v[i];
		
	}

}
