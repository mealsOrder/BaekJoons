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
		// n�� 0�̸� ����  
		if(n==0){
			break;
		}
		// n�� 1�϶� 1 
		if(n==1){
			cnt = 1;
		}
		else{
			for(int i=n+1;i<=n*2;i++){
				// �ð� �ʰ� ���� 
				root = (int)sqrt(i);
				np = 0;
				
				
				for(int j=2;j<=root;j++){
					if(i%j==0){
						np++;
						break;
					}
				}
				
				// np ���� 0�̸� ������ ���������� ���� ���̹Ƿ� �Ҽ�  
				if(np==0){
					cnt++;
				}
				
			}
		}
		
		cout << cnt << endl;
	}
	
	
	return 0;
}
