#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

const int MAX = 1000000;



int a,b,c,d,e,f;
	
int x,y;

int main(){
	
	
	
	cin >> a >> b >> c >> d >> e >> f ;
	
	x = ( e*c + b*(-1)*f ) / (a*e-b*d);
	y = ( d*(-1)*c + a*f ) / (a*e-b*d) ;
	
	cout << x << " " << y;
	
	return 0;
}
