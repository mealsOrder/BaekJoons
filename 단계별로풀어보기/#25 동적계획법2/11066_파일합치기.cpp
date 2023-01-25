#include<iostream>
#include<algorithm>
#include<vector>

#define INF 999999999

using namespace std;

const int MAX = 501;

int k,t;
int file[MAX];
int temp[MAX];

int dp[MAX][MAX];


int main(){
	
	cin >> t;
	while (t--){
		
		cin >> k;
		
		for(int i=1;i<=k;i++){
			// �� ������ ũ��  
			cin >> file[i];
			
			// 1~i ������ ������ �� 
			temp[i] = temp[i-1] + file[i];
		}
		
		// i �� ���ؾ� �ϴ� ������ �ǹ� 
		// ex. i=2 �̸� 2~3 ��° ���ϵ��� ��ĥ ���� �ǹ�  
		for(int i=1;i<=k;i++){
			// j �� ��ġ�� ������ ���� �κ��� �ǹ�
			// i�� ������ �ǹ���, k-i������ �����ָ� k���� Ž�� 
			for(int j=1;j<=k-i;j++){
				
				// ū ������ �ʱ�ȭ  
				dp[j][i+j] = INF;
				
				// k�� ���ؾ� �ϴ� ������ �� �κ����� ���� �������� �ǹ�  
				for(int k=j;k<i+j;k++){
					dp[j][i+j] = min(dp[j][i+j],dp[j][k] + dp[k+1][i+j] + temp[i+j] - temp[j-1]);
				}
			}
		}
		cout << dp[1][k] << endl;
	}

	return 0;
}
