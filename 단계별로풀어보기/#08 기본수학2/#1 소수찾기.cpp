#include<stdio.h>


int main(){
	
	int n,a;
	int cnt=0,ans=0;
	int flag = false;
	
	scanf("%d",&n); 
	
	for(int i=0;i<n;i++){
		scanf("%d",&a);
		cnt = 0;
		for(int j=2;j<=a;j++){
			
			if(a%j == 0){
				cnt++;
			}
			
			
		}
		if(cnt == 1){
			ans++;
		}
		
	}
	
	printf("%d\n",ans);
	
	return 0;
} 
