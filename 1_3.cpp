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
int main(){
	int n , c, input;
	cin>>n>>c;
	int* arr  = (int*)malloc(sizeof(int)*3);
	arr[0]= -1;
	vector<int*> v(c+1, arr);
	for(int i=0; i<n; i++){
		cin>>input;
		if(v[input][0]==  -1){
			int* tmp  = (int*)malloc(sizeof(int)*3);
			tmp[0] = 1;
			tmp[1] = input;
			tmp[2] = i;
			v[input] = tmp;
		}
		else{
			v[input][0] +=1;
		}
	}
		sort(v.begin(), v.end(),comp);
	
	for(int i=0; i<=c; i++){
		if(v[i][0]!=-1){
			for(int j=0; j<v[i][0]; j++)
				cout<<v[i][1]<<" ";
		}
	}


}
