#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

const int MAX = 50;

long long int arr[MAX]={0,1,};
int t;
long long int fibo(int x){
	if(x==0 || x==1){
		return arr[x];
	}
	else if(arr[x] == 0){
		return arr[x] = fibo(x-1) + fibo(x-2);
	}
	return arr[x];
}

int main(){
	
	cin >> t;
	
	while(t--){
		int a;
		cin >> a;
		if(a == 0){
			cout << "1 0"<<endl;
		}
		else{
			cout << fibo(a-1) << " " << fibo(a) << endl;
		}
		
	}
	
	return 0;
}
