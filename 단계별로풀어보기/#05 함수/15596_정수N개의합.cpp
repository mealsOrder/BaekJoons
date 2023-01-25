#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

const int MAX = 3000001;

long long int sum(vector<int> &a){
	long long int result=0;
	for(int i=0;i<a.size();i++){
		result += a[i];
	}
	return result;
} 
