#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

const int MAX = 1001;

const int INF = 10007;

long long int dp[MAX];

int main(){
	
	int n;
	cin >> n;
	
	dp[1] = 1;
	dp[2] = 3;
	
	for(int i=3;i<=n;i++){
		dp[i] = (dp[i-1] + dp[i-2] * 2)%INF;
	}
	
	cout << dp[n] % INF << endl;
	
	return 0;
}
