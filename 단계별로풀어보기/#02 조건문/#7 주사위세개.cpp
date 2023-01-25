#include<stdio.h>

int main(){
	
	int a,b,c,max;
	int result = 0; 
	scanf("%d %d %d",&a,&b,&c);
	
	max = a;
	
	// 눈 3개 다 같은 경우 
	if( a==b && a==c){
		result = 10000+a*1000;
	}
	else if( a==b && a!=c){
		result = 1000 + a*100;
	}
	else if( a==c && a!=b){
		result = 1000 + a*100;
	}
	else if( b==c && a!=b){
		result = 1000 + b*100;
	}
	else{
		
		if(b>a && b>c){
			max = b;
			result = max*100;
		}
		else if ( c>a && c>b){
			max = c;
			result = max*100;
		}
		else{
			result = max*100;
		}
		
		
	}
	
	
	
	printf("%d\n",result);
	
	return 0;
}
