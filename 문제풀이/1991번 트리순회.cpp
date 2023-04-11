#include <iostream>
using namespace std;

const int MAX = 26;

char ans[MAX][2];


void preorder (char x){
	if(x=='.'){
		return;
	}
	cout << x;
	preorder(ans[x-'A'][0]);
	preorder(ans[x-'A'][1]);
}

void inorder (char x){
	if(x=='.'){
		return;
	}
	
	inorder(ans[x-'A'][0]);
	cout << x ;
	inorder(ans[x-'A'][1]);
}

void postoder (char x){
	if(x=='.'){
		return;
	}
	
	postoder(ans[x-'A'][0]);
	postoder(ans[x-'A'][1]);
	cout << x ;
}


int main(){
	
	int n;
	cin >> n;
	for(int i=1;i<=n;i++){
		char a,b,c;
		cin >> a >> b >> c;
		
		ans[(a - 'A')][0] = b;
		ans[(a - 'A')][1] = c;
		
	}
	preorder('A');
	cout << '\n';
	inorder('A');
	cout << '\n';
	postoder('A');
	cout << '\n';
	
	
	return 0;
}
