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
			// 각 파일의 크기  
			cin >> file[i];
			
			// 1~i 까지의 파일의 합 
			temp[i] = temp[i-1] + file[i];
		}
		
		// i 는 구해야 하는 범위를 의미 
		// ex. i=2 이면 2~3 번째 파일들을 합칠 때를 의미  
		for(int i=1;i<=k;i++){
			// j 는 합치는 범위의 시작 부분을 의미
			// i가 범위를 의미함, k-i까지만 돌려주면 k까지 탐색 
			for(int j=1;j<=k-i;j++){
				
				// 큰 값으로 초기화  
				dp[j][i+j] = INF;
				
				// k는 구해야 하는 범위를 두 부분으로 나눈 기준점을 의미  
				for(int k=j;k<i+j;k++){
					dp[j][i+j] = min(dp[j][i+j],dp[j][k] + dp[k+1][i+j] + temp[i+j] - temp[j-1]);
				}
			}
		}
		cout << dp[1][k] << endl;
	}

	return 0;
}
