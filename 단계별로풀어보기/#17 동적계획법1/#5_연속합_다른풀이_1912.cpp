#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

const int MAX = 100001;

int n;

int arr[MAX];
int dp[MAX];

int ans;

int main(){
	
	cin >> n;
	
	for(int i=1;i<=n;i++){
		cin >> arr[i];
	}
	
	dp[1] = arr[1];
	
	for(int i=2;i<=n;i++){
		if(dp[i-1] > 0){
			dp[i] = dp[i-1] + arr[i];
		}
		else{
			dp[i] = arr[i];
		}
	}
	
	ans = dp[1];
	
	for(int i=2;i<=n;i++){
		if(ans<dp[i]){
			ans = dp[i];
		}
	}
	cout << ans << endl;
	return 0;
}
