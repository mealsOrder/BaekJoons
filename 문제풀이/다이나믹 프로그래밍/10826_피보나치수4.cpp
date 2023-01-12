#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

const int MAX = 10001;


string f[MAX];

string sum(string x, string y){
	int num;
	int carry = 0;
	string ans;
	
	reverse(x.begin(),x.end());
	reverse(y.begin(),y.end());
	
	while(x.length() < y.length()){
		x += '0';
	}
	
	while(x.length()>y.length()){
		y += '0';
	}
	
	for(int i=0;i<x.length();i++){
		num = (x[i] - '0' + y[i] - '0' + carry) %10;
		ans += to_string(num);
		carry = (x[i] - '0' + y[i] - '0' + carry)/10;
	}
	
	if(carry != 0){
		ans += to_string(carry);
	}
	
	reverse(ans.begin(),ans.end());
	
	return ans;
	
}
int n;

int main(){
	
	cin >> n ;
	f[0] = '0';
	f[1] = '1';
	for(int i=2;i<=n;i++){
		f[i] = sum(f[i-1],f[i-2]);
	}
	
	cout << f[n] << endl;
	
	
	return 0;
}
