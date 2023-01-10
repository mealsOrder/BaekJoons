#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

const int MAX = 101;

int com,n,cnt;

bool visited[MAX];

vector <int> v[MAX];

void DFS(int x){
	visited[x] = true;
	
	for(int i=0;i<v[x].size();i++){
		int y = v[x][i];
		
		if(visited[y]== false){
			DFS(y);
			cnt++;
		}
		
	}
	
}

int main(){
	
	cin >> com >> n;
	
	for(int i=0;i<n;i++){
		int a,b;
		cin >> a >> b;
		
		v[a].push_back(b);
		v[b].push_back(a);
		
	}
	DFS(1);
	cout << cnt << endl;
	return 0;
}
