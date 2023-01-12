#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

const int MAX = 31;

int t,n,m;

int dp[MAX][MAX];
int arr[MAX];

int main(){
	
		
	for(int i=1;i<=30;i++){
		dp[1][i] = i;
		//dp[i][i] = 1;
	}
		
	for(int i=2;i<=30;i++){
		for(int j=i;j<=30;j++){
			for(int k=1;k<=j-1;k++){
				dp[i][j] += dp[i-1][k]; 
			}
		}
	}
	
	cin >> t;
	
	while(t--){
		cin >> n >> m;
		cout << dp[n][m] << endl;
	}
	
	
	return 0;
}
