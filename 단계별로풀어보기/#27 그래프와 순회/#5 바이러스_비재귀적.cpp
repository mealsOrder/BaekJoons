#include <stdio.h>

int n,m,cnt=-1;
int a[101][101],visited[101];

void f(int x){
	if(visited[x]==0){
		visited[x]=1;
		cnt++;
		for(int i=1;i<=n;i++){
			if(a[i][x]==1){
				f(i);
			}
		}
	}
	return;
}

int main(void){
	scanf("%d %d",&n,&m);
	int p,q;
	for(int i=0;i<m;i++){
		scanf("%d %d",&p,&q);
		a[p][q]=1;
		a[q][p]=1;	
	}
	
	f(1);
	
	printf("%d",cnt);
	return 0;
}
