#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

const int MAX = 1000001;

int dp[MAX];

int n;

int cnt;

int main(){
	
	cin >> n;
	
	// �ʱⰪ ����  
	dp[1] = 0;
	
	for(int i=2;i<=n;i++){
		dp[i] = dp[i-1] + 1;
		
		if(i%2==0){
			dp[i] = min(dp[i],dp[i/2] + 1);
		}
		if(i%3==0){
			dp[i] = min(dp[i],dp[i/3]+1);
		}
	}
	
	cout << dp[n];
	
	return 0;
}
