#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

long long int fac(int x){
	if(x<=1){
		return 1;
	}else{
		return x * fac(x-1);
	}
}

int main(){
	
	ios_base::sync_with_stdio(false); 
	cin.tie(0); 
	cout.tie(0);
	
	int n; 
	cin >> n;
	
	cout << fac(n);
	
	return 0;
}
