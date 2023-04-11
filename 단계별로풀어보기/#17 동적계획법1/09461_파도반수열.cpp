#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

const int MAX = 101;

long long int dp[MAX];

int main(){
	
	int t;
	
	cin >> t;
	
	while(t--){
		int n; 
		cin >> n;
		
		dp[1]=1;
		dp[2]=1;
		dp[3]=1;
		dp[4]=2;
		dp[5]=2;
		dp[6]=3;
		for(int i=7;i<=n;i++){
			dp[i] = dp[i-1] + dp[i-5];
		}
		cout << dp[n] << endl;
	}
	
	return 0;
}
