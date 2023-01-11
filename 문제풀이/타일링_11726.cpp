#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

const int MAX = 1001;

long long int dp[MAX];

int n;

int main(){
	
	cin >> n;
	
	dp[1] = 1;
	dp[2] = 2;
	
	
	
	if(n<3){
		cout << dp[n]%10007 << endl;
	}
	else{
		for(int i=3;i<=n;i++){
			dp[i] = (dp[i-1]+ dp[i-2])%10007;
		}
		cout << dp[n] << endl;
	}
	
	
	return 0;
}
