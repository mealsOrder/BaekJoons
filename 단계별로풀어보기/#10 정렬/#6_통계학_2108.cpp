#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
using namespace std;

const int MAX = 500001;

int arr[MAX];
int sort[MAX];


int range(){
	return arr[n-1] - arr[0];
}
int n;
int main(){
	cin >> n;
	
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	sort(arr,arr+n);
	
	cout << range() << endl;
	return 0;
}
