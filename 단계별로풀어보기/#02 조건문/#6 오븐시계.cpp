#include <stdio.h>


int main(){
	
	int a, b, c;
	int hour,min;
	bool flag = false;
	scanf("%d %d",&a,&b);
	
	scanf("%d",&c);
	
	
	if(b+c >= 60){
		min = (b+c)% 60;
		hour = a + (b+c)/60;
		if(hour >=24){
			hour = hour % 24;
		}
	}
	else{
		hour = a;
		min = b+c;
		if(hour >=24){
			hour = hour % 24;
		}
	}
	
	printf("%d %d\n",hour,min);
	
	return 0;
}
