#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

const int MAX = 100001;
	
int s[2][MAX];
int dp[2][MAX];

int main(){
	
	ios_base::sync_with_stdio(false); 
	cin.tie(0); 
	cout.tie(0);
	
	int t,n;
	cin >> t;
	
	while(t--){
		
		cin >> n;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=2;j++){
				cin >> s[j][i];
			}
		}
		
		dp[1][1] = s[1][1];
		dp[2][1] = s[2][1];
		dp[1][2] = dp[1][1] + s[2][2]; 
		dp[2][2] = dp[2][1] + s[1][2];
		
		for(int i=3;i<=n;i++){
			dp[1][i] = dp[1][i] + max(dp[2][i-1],dp[2][i-2]);
			dp[2][i] = dp[2][i] + max(dp[1][i-1],dp[1][i-2]);
		}
		
		cout << dp[n]<<'\n'; 
	}
	
	
	
	
	return 0;
}
