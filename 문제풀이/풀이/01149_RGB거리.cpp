#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

const int MAX = 1001;
int n;
	
long long int house[MAX][3];
long long int dp[MAX][3];


int main(){
	
	ios_base::sync_with_stdio(false); 
	cin.tie(0); 
	cout.tie(0);
	
	cin >> n;
	
	for(int i=1;i<=n;i++){
		for(int j=0;j<3;j++){
			cin >> house[i][j];
		}
	}
	
	for(int i=1;i<=n;i++){
		dp[i][0] = min(dp[i-1][1],dp[i-1][2]) + house[i][0];
		dp[i][1] = min(dp[i-1][0],dp[i-1][2]) + house[i][1];
		dp[i][2] = min(dp[i-1][0],dp[i-1][1]) + house[i][2];
	}
	
	cout << min(dp[n][0],min(dp[n][1],dp[n][2]))<<'\n';
	return 0;
}
