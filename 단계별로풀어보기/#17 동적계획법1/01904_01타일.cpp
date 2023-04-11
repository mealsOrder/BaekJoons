#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

const int MAX = 1000001;
const int DIV = 15746;

long long int dp[MAX];

int main(){
	
	int n;
	
	cin >> n;
	
	dp[1] = 1;
	dp[2] = 2;
	
	for(int i=3;i<=n;i++){
		dp[i] = (dp[i-1]+ dp[i-2])% DIV;
	}
	
	cout << dp[n]  <<endl;
	return 0;
}
