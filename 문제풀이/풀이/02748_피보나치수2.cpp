#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

const int MAX = 91;


int n;
	
long long int dp[MAX]; 

int main(){
	
	ios_base::sync_with_stdio(false); 
	cin.tie(0); 
	cout.tie(0);
	
	cin >> n;
	
	dp[0] = 0;
	dp[1] = 1;
	
	for(int i=2;i<=n;i++){
		dp[i] = dp[i-1] + dp[i-2];
	}
	
	cout << dp[n];
	
	return 0;
}
