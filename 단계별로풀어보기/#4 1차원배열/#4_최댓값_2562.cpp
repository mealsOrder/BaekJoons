#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

const int MAX = 1000000;

int arr[9]; 

int main(){
	
	int index,m=0;
	
	for(int i=0;i<9;i++){
		cin >> arr[i];
		
		if(m<arr[i]){
			m = arr[i];
			index = i+1;
		}
		
		
	}
	
	cout << m <<endl;
	cout << index << endl;
	
	return 0;
}
