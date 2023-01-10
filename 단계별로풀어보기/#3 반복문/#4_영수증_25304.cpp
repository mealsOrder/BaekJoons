#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

const int MAX = 1000000;

int main(){
	
	int x,n,result=0;
	
	cin >> x;
	cin >> n;
	
	for(int i=0;i<n;i++){
		int a,b;
		
		cin >> a >> b;
		
		result += a*b;
		
		
	}
	
	if(result == x){
		cout << "Yes" << endl;
	}
	else{
		cout << "No" << endl;
	}
	
	return 0;
}
