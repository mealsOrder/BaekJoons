#include<iostream>

using namespace std;

const int MAX = 10002;

int main(){
	int t;
	bool num[MAX];
	
	for(int i=0;i<MAX;i++){
		num[i] = true;
	}
	
	num[1] = false;
	for(int i=2;i*i<MAX;i++){
		if(num[i]){
			for(int j=i*i;j<MAX;j+=i){
				num[j] = false;
			}
		}
	}
	
	cin >> t;
	
	for(int i=0;i<t;i++){
		int n;
		cin >> n;
		for(int j=n/2;j>=0;j--){
			if(num[j] && num[n-j]){
				cout << j << " " << n-j << endl;
				break;
			}
		}
	}
	
	return 0;
}
