#include<iostream>
using namespace std;
bool visit[9];
int arr[9];
int n,m;
void dfs(int s){
		if(s==m+1){
			for(int i=1; i<=m; i++){
				cout<<arr[i]<<" ";
			}
			cout<<"\n";
			return;
		}
	for(int i = 1 ;  i <=n; i++){
		if(!visit[i]){
			visit[i] = true;
			arr[s] = i;
			dfs(s+1);
			visit[i] = false;
		}
	}

}

int main(){

	cin>>n>>m;
	dfs(1);
}
