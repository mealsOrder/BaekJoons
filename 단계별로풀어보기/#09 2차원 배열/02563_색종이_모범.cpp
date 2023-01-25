#include<iostream>

using namespace std;

const int MAX = 101;

int arr[MAX][MAX];

int main(){
	int n,x,y,cnt=0;
	
	cin >> n;
	
	while(n--){
		cin >> x >> y;
		for(int i=y;i<y+10;i++){
			for(int j=x;j<x+10;j++){
				if(!arr[i][j]){
					cnt++;
					arr[i][j]=1;
				}
			}
		}
	}
	
	cout << cnt << endl;
	return 0;
}
