#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

const int MAX = 100001;

int n;
int arr[MAX]; 
int dp[MAX];

int large(int x,int y){
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
	dp[2] = dp[1] + arr[2];
	dp[3] = large( arr[1] + arr[3], arr[2]+arr[3]);
	for(int i=4;i<=n;i++){
		dp[i] = large(dp[i-2]+ arr[i],dp[i-3]+arr[i-1]+arr[i]);
	}
	
	cout << dp[n];
	return 0;
}
