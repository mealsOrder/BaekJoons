#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

const int MAX = 10001;

int dp[MAX];
int arr[MAX];


int main(){
	
	int n;
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> arr[i];
	}
	dp[0] = 0;
	dp[1] = arr[1];
	dp[2] = arr[1] + arr[2];
	//dp[3] = max(dp[2], max(dp[1]+arr[3],dp[0]+arr[2]+arr[3]));
	for(int i=3;i<=n;i++){
		dp[i] = max(dp[i-1], max(dp[i-2]+arr[i],dp[i-3]+arr[i-1]+arr[i]));
	}
	
//	for(int i=1;i<=n;i++){
//		cout << dp[i] << " ";
//	}
//		
	
	cout << dp[n] << endl;
	
	return 0;
}
