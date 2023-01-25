#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

const int MAX = 101;

int arr[MAX][MAX];

int n;
int result;
int main(){
	
	cin>>n;
	
	for(int k=0;k<n;k++){
		int a,b;
		
		cin >> a >> b;
		
		for(int i=a;i<a+10;i++){
			for(int j=b;j<b+10;j++){
				arr[i][j] = 1;
			}
		}
			
	}
	
	for(int i=1;i<101;i++){
		for(int j=1;j<101;j++){
			if(arr[i][j] == 1){
				result += 1;
			}
		}
		
	}
	
	cout << result << endl;
	
	return 0;
}
