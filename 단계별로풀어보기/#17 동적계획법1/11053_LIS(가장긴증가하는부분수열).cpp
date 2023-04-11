#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

const int MAX = 1002;

int dp[MAX];
int arr[MAX];

int main(){
	
	
	int n;
	int result=0;
	cin >> n;
	
	
	dp[0] = 1;
	 
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	
	for(int i=0;i<n;i++){
		
		dp[i]=1;
		
		for(int j=0;j<i;j++){
			if(arr[i]>arr[j]){
				dp[i] = max( dp[j]+1, dp[i] );
			}
		}
		result = max(result, dp[i]);
	}
	
	cout << result << endl;
	
	return 0;
}
