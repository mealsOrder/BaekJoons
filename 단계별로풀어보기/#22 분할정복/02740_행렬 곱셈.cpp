#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

const int MAX = 101;

int a[MAX][MAX];
int b[MAX][MAX];
int r[MAX][MAX];
int n,m,k;

int main(){
	
	cin >> n >> m;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> a[i][j];
		}
	}
	
	cin >> m >> k;
	
	for(int i=0;i<m;i++){
		for(int j=0;j<k;j++){
			cin >> b[i][j];
			
		}
		
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<k;j++){
			for(int x=0;x<m;x++){
				r[i][j] += a[i][x] * b[x][j];
				
			}
			cout << r[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}
