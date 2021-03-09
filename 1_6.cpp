#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool visit[9];
int arr[9],pre[9];
vector<int> v;
int n,m;
bool is_repeat(){
	for(int i=1; i<=m; i++){
		if(arr[i] !=pre[i])
			return false;
	}
	return true;
}
void dfs(int s){
		if(s==m+1){
			for(int i=1; i<=m; i++){
				cout<<arr[i]<<" ";
			}
			cout<<"\n";

			
			return;
		}
	for(int i = 1 ;  i <=n; i++){
		cout<<i<<": "<<visit[i]<<" pre:"<<pre[s]<<" v[]"<<v[i-1]<<endl;
		if(!visit[i]&& pre[s]!=v[i-1]){
			pre[s] = v[i-1];
			visit[i] = true;
			arr[s] = v[i-1];
			dfs(s+1);
			visit[i] = false;
		}
	}

}

int main(){
	int tmp=0;
	cin>>n>>m;
	for(int i=0; i<n; i++){
		cin>>tmp;
		v.push_back(tmp);
	}
	sort(v.begin(),v.end());
	dfs(1);
}
