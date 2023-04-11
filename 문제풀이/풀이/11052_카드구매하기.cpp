#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

const int MAX = 1001;

int n;
	
int p[MAX];
int dp[MAX];

int main(){
	
	ios_base::sync_with_stdio(false); 
	cin.tie(0); 
	cout.tie(0);
	
	cin >> n;
	
	for(int i=1;i<=n;i++){
		cin >> p[i];
	}
	
	// √ ±‚»≠ 
	dp[0] = 0; 
	dp[1] = p[1];
	
	for(int i=1;i<=n;i++){
		for(int j=1; j<=i;j++){
			dp[i] = max( dp[i], dp[i-j] + p[j] );
		}
	}
	
	cout << dp[n];
	
	return 0;
}
