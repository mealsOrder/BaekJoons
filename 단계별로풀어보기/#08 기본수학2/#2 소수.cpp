#include<stdio.h>
int m,n;
int sum = 0;
int min=9999999,cnt;
int ans;
 
int primeN(int x){
	cnt = 0;
	for(int i=2;i<=n;i++){
		if(x%i == 0){
			cnt++;
		}
	}
	if(cnt == 1){
		return 1;
	}
	else{
		return 0;
	}
	
}

int main(){
	
	scanf("%d",&m);
	scanf("%d",&n);
	
	for(int i=m;i<=n;i++){
		
		if( primeN(i) ) {
			sum += i;
			ans ++;
			if(min > i){
				min = i;
			}
		}
		
	}
	
	if(ans == 0){
		printf("-1\n");
	}
	else{
		printf("%d\n",sum);
		printf("%d\n",min);	
	}	

	
	
	return 0;
}
