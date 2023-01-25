#include<iostream>

using namespace std;

const int MAX = 10000001;

int n;
int arr[MAX];
int main(){
	
	cin >> n;
	
	while(n!=1){
		for(int i=2;i<=n;i++){
			if(n%i == 0){
				cout << i << endl;
				n/=i;
				break;
			} 
		}
	}
	
	
	return 0;
}
