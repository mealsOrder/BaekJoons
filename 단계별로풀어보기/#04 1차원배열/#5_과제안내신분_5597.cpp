#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

const int MAX = 31;

int arr[MAX]; 
int temp[MAX];
bool chk[MAX];

int main(){
	
	for(int i=1;i<=28;i++){
		cin >> arr[i];
		chk[ arr[i] ] = true;
	}
	
	for(int i=1;i<=30;i++){
		temp[i] = i;
		if(chk[i] == false){
			cout << temp[i] << endl;
		}
	}
	
	
	
	return 0;
}
