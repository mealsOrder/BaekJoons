#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

const int MAX = 16;

int n;
	
int t[MAX];
int p[MAX];
int dp[MAX];

int main(){
	
	ios_base::sync_with_stdio(false); 
	cin.tie(0); 
	cout.tie(0);
	
	cin >> n;
	
	for(int i=1;i<=n;i++){
		cin >> t[i] >> p[i] ;
	}
	
	int deadLine;
	
	for(int i=n;i>0;i--){
		deadLine = i+t[i];
		
		// 상담 불가  
		if( deadLine > n+1){
			dp[i] = dp[i+1];
		} 
		// 상담 가능, 최대 이익 판별 필요 
		else{
			dp[i] = max( dp[i+1], p[i]+ dp[deadLine]);
		}
	}
	
	cout << dp[1];
	
	return 0;
}
