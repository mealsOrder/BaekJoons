#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

const int MAX = 41;

int f[MAX];
int cnt1,cnt2;

int fib(int x) {
    if (x <= 2){
    	cnt1 ++; //# 코드1
    	return 1;
	} 
    else return (fib(x - 1) + fib(x - 2));
}


int main(){
	int n; 
	cin >> n;
	
	fib(n);
	f[1] = 1;
	f[2] = 1;
	for(int i=3;i<=n;i++){
		f[i] = f[i-1] + f[i-2];
		cnt2++; // # 코드2  
	}
	
	cout << cnt1 <<" " <<cnt2 << endl;
	
	
	return 0;
}
