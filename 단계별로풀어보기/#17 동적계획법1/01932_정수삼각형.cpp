#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

const int MAX = 501;


int dp[MAX][MAX];
int arr[MAX][MAX];

int main(){
	
	int n;
	int result=0;
	cin >> n;
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cin >> arr[i][j];
		} 
	}
	
	
	dp[0][0] = 0;
	dp[1][1] = arr[1][1];
	
	dp[2][1] = dp[1][1] + arr[2][1];
	dp[2][2] = dp[1][1] + arr[2][2];
	
	dp[3][1] = dp[2][1] + arr[3][1];
	dp[3][2] = dp[2][1] + arr[3][2];
	dp[3][3] = dp[2][2] + arr[3][3];
	
	dp[4][1] = dp[3][1] + arr[4][1];
	dp[4][2] = dp[3][1] + arr[4][2];
	dp[4][3] = dp[3][2] + arr[4][3];
	dp[4][4] = dp[3][3] + arr[4][4];
	
	for(int i=2;i<=n;i++){
		for(int j=1;j<=i;j++){
			dp[i][j] = max(dp[i-1][j],dp[i-1][j-1]) + arr[i][j];
		}
	}
	
	for(int i=1;i<=n;i++){
		result = max(result,dp[n][i]);	
	}
	
	cout << result << endl;
	
	return 0;
}
