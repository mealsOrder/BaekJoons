#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

const int MAX = 101;

const int INF = 1000000000;

long long int dp[MAX][MAX];
long long int result;
int main(){
	
	int n;
	cin >> n;
	
	dp[1][0] = 0;
	
	for(int i=1;i<=9;i++){
		dp[1][i] = 1;
	}
	
	for(int i=2;i<=n;i++){
		for(int j=0;j<=9;j++){
			
			if(j==0){
				dp[i][j] = dp[i-1][j+1]% INF;
			}
			else if(j==9){
				dp[i][j] = dp[i-1][j-1]% INF;
				
			}else{
				dp[i][j] = ( dp[i-1][j-1]+dp[i-1][j+1] ) % INF;
			}
			
		}
	}
	
	
	for(int i=0;i<=9;i++){
		result += dp[n][i];
	} 
	cout << result % INF  << endl;
	
	return 0;
}
