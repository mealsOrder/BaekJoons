#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

const int MAX = 101;

int n,v,cnt;

int arr[MAX];

int main(){
	
	cin >> n;
	
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	
	cin >> v;
	
	for(int i=0;i<n;i++){
		if(arr[i] == v){
			cnt++;
		}
	}
	
	cout << cnt << endl;
	
	return 0;
}
