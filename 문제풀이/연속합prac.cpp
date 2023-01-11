#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

const int MAX = 100001;

int n;

int arr[MAX];
int dp[MAX];
int ans;
int large(int x, int y){
	if(x>y){
		return x;
	}
	else{
		return y;
	}
}

int main(){
	
	cin >> n;
	
	for(int i=1;i<=n;i++){
		cin >> arr[i];
	}
	
	
	// 초기값 설정  
	dp[1] = arr[1];
	
	// 부분합 계산 점화식  
	for(int i=2;i<=n;i++){
		dp[i] = large(dp[i-1] + arr[i], arr[i]);
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
