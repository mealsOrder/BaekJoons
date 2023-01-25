#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;

const int MAX = 123458;
int n;
int main(){
	
	int np;
	int root;
	
	while(1){
		
		
		cin >> n;
		int cnt=0;
		// n이 0이면 정지  
		if(n==0){
			break;
		}
		// n이 1일땐 1 
		if(n==1){
			cnt = 1;
		}
		else{
			for(int i=n+1;i<=n*2;i++){
				// 시간 초과 방지 
				root = (int)sqrt(i);
				np = 0;
				
				
				for(int j=2;j<=root;j++){
					if(i%j==0){
						np++;
						break;
					}
				}
				
				// np 값이 0이면 나누어 떨어진수가 없는 것이므로 소수  
				if(np==0){
					cnt++;
				}
				
			}
		}
		
		cout << cnt << endl;
	}
	
	
	return 0;
}
