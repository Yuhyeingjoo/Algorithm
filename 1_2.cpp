#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int sum_of_num(string s1){
	int sum1=0;

	for(int i=0; i<s1.size(); i++){
		if(s1[i]>48 &&s1[i]<58)
			sum1 = sum1+s1[i]-48;
	}
	return sum1;
	
}
bool comp(string s1, string s2){
	if(s1.size()!=s2.size())
		return s1.size()<s2.size();
	else if(s1.size()== s2.size()){
		if(sum_of_num(s1)<sum_of_num(s2))
			return true;
		else if(sum_of_num(s1)>sum_of_num(s2))
			return false;
		else
			return s1<s2;
	}
	

	
}

int main(){
	int n;
	string input;
	cin>>n;
	vector<string> v;
	for(int i=0; i<n ;i++){
		cin>>input;
		v.push_back(input);

	}
	sort(v.begin(),v.end(),comp);
	
	for(int i=0; i<v.size(); i++){
		cout<<v[i]<<endl;
	}
}
