#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;

bool comp(int* a, int* b){
	if(a[0]<b[0])
		return false;
	else if(b[0]==a[0]){
		if(a[2]<b[2])
			return true;
		else
			return false;
	}
	else
		return true;
}
int find(int n, vector<int*> v){
	for(int i=0; i<v.size(); i++){
		if(v[i][1]==n)
			return i;
	}
	return -1;
}
int main(){
	int n , c, input;
	cin>>n>>c;
	int* arr  = (int*)malloc(sizeof(int)*3);
	arr[0]= -1;
	vector<int*> v;
	for(int i=0; i<n; i++){
		cin>>input;
		if(find(input,v)==-1){
			cout<<"ureca"<<endl;
			int* tmp  = (int*)malloc(sizeof(int)*3);
			tmp[0] = 1;
			tmp[1] = input;
			tmp[2] = i;
			v.push_back(tmp);
		}
		else	
			v[find(input,v)][0] +=1;
		
	}
		sort(v.begin(), v.end(),comp);
	
	for(int i=0; i<v.size(); i++){
		for(int j=0; j<v[i][0]; j++)
			cout<<v[i][1]<<" "<<i<<endl;;
	}


}
