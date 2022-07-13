#include<stdio.h>
#include<string.h>

int queue[2000005];
int f=0,r=0;
int queueSize,n,a;
char command[10];
int numE = 0;

void push(int x){
	queue[r++]=x;
	numE ++;
}

void pop(){
	if(numE <= 0){
		printf("-1\n");
	} else{
		
		printf("%d\n",queue[f]);
		
		queue[f]=0;
		f++;
		numE --;
	}
}

void front(){
	if(numE <= 0){
		printf("-1\n");
	} else{
		printf("%d\n",queue[f]);
	}
}

void back(){
	if(numE <= 0){
		printf("-1\n");
	} else{
		printf("%d\n",queue[r-1]);
	}
}

void empty(){
	if(numE <= 0){
		printf("1\n");
	} else{
		printf("0\n");
	}
}

void size(){
	printf("%d\n",numE);
}

int main(){
	
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		scanf("%s",command);
		if(!strcmp(command,"push")){
			scanf("%d",&a);
			push(a);
		}else if(!strcmp(command,"front")){
			front();
		}else if(!strcmp(command,"back")){
			back();
		}else if(!strcmp(command,"size")){
			size();
		}else if(!strcmp(command,"empty")){
			empty();
		}else{
			pop();
		}
	}
	return 0;
}
