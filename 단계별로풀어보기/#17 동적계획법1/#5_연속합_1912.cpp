#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

const int MAX = 100001;

int n;
int arr[MAX]; 
int dp[MAX];

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
	
	int m = -1001;
	
	for(int i=1;i<=n;i++){
		 if (dp[i-1] + arr[i] < arr[i]){
		 	dp[i] = arr[i];
		 }
		 else{
		 	dp[i] = dp[i-1] + arr[i];
		 }
		 
		 if(dp[i] >= m){
		 	m=dp[i];
		 }
		 
	}
	
	cout << m << endl;
	return 0;
}
