#include<cstdio>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std; 

const int MAX = 200002;

int n,m,r;
int result[MAX];
vector <int> myGraph[MAX];
queue <int> Queue;
bool visited[MAX] = {0,};
int cnt = 0;

bool compare(int x,int y){
	return y<x;
}

void BFS(int x){
	
	
	Queue.push(x);
	visited[x] = true;
	cnt++;
	result[x] = cnt;
	while(!Queue.empty()){
		
		int current = Queue.front();
		Queue.pop();
		//printf("%d\n",current);
		
		
		for(int i=0;i<myGraph[current].size();i++){
			int next = myGraph[current][i];
			
			if(visited[next] == false){
				cnt++;
				result[next] = cnt;
				visited[next] = true;
				Queue.push(next);
			}
			
			
		}
		
		
	}
	
	
}

int main(){
	
	scanf("%d %d %d",&n,&m,&r);
	
	for(int i=1;i<=m;i++){
		int a,b;
		
		scanf("%d %d",&a,&b);
		
		myGraph[a].push_back(b);
		myGraph[b].push_back(a);
		
		
		
	}
	
	
	for(int i=1;i<=m;i++){
    	sort(myGraph[i].begin(),myGraph[i].end(),compare);
  	}
	
	BFS(r);
	for(int i=1;i<=n;i++){
		printf("%d\n",result[i]);
	}
	
	return 0;
}
