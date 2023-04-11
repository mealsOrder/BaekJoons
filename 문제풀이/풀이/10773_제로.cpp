#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

const int MAX = 100001;
int n;
	
int ans;

vector <int> v;

int main(){
	
	ios_base::sync_with_stdio(false); 
	cin.tie(0); 
	cout.tie(0);
	
	int k;
	 
	cin >> k;
	
	for(int i=0;i<k;i++){
		int a;
		cin >> a;
		if(a==0){
			v.pop_back();
		}
		else{
			v.push_back(a);
		}
	}
	
	for(int i=0;i<v.size();i++){
		ans += v[i];
	}
	
	cout << ans;
	
	return 0;
}
