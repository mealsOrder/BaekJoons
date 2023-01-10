#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

const int MAX = 101;

vector <int> v[MAX];
bool visited[MAX];

int com,n,cnt;


void DFS(int x){
	visited[x] = true;
	//cout << x; 방문한 노드를 출력 
	
	for(int i=0;i<v[x].size();i++){
		int y = v[x][i];
		
		if(visited[y] == false){
			DFS(y);
			cnt++;
		}
	} 
	
	
}

int main(){
	
	cin >> com;
	cin >> n;
	for(int i=0;i<n;i++){
		int a,b;
		cin >> a >> b;
		
		v[a].push_back(b);
		v[b].push_back(a);
		
	}
	
	
	return 0;
}
