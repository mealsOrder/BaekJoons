#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

const int MAX = 91;


int n;

long long int dp[MAX];

int main(){
	
	cin >>n;
	
	dp[1] = 1;
	dp[2] = 1;
	for(int i=3;i<=n;i++){
		dp[i] = dp[i-2] + dp[i-1];
	}
	
	
	cout << dp[n] << endl;
	
	return 0;
}
