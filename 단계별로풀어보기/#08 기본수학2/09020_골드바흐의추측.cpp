#include<iostream>
#include<cmath>

using namespace std;

bool isPrime(int x){
	int root;
	root = sqrt(x);
	if(root == 1 && x != 1) {//2 �̰ų� 3�ΰ�� 
		return true; 
	}
	if(x%2){	// Ȧ���� ��� 
		for(int j=2;j<=root;j++){
			if(!(x%j)) false;
			if(j==root){
				true;
			}
		} 
	}
}

int main(){
	int t;
	
	cin >> t;
	
	for(int i=0;i<t;i++){
		int n;
		cin >> n;
		for(int j=n/2;j>=2;j--){
			if(isPrime(j) && isPrime(n-j)){
				cout << j << " " << n-j << endl;
				break;
			}
		}
	}
	
	return 0;
}
