#include <stdio.h>
#include <cstdio>
#include <algorithm>

using namespace std;

const int MAX = 1000001;

long long int n,m,maxNum = -1;
long long int start=0,mid=0,sum=0;

int tree[MAX];

int main(){
	
	scanf("%lld %lld",&n,&m);
	
	for(int i=0;i<n;i++){
		scanf("%d",&tree[i]);
	}
	
	sort(tree,tree+n);
	
	start = 0;
	int end = tree[n-1];
	
	while(start <= end){
		sum = 0;
		mid = (start + end) / 2;
		
		for(int i=0;i<n;i++){
			if(tree[i] > mid ) sum += tree[i] - mid;
		}
		
		if(sum >= m){
			start = mid +1;
			if(mid>maxNum) maxNum = mid;
		}
		else{
			end = mid - 1;
		}
		
	}
	
	printf("%lld\n",maxNum);
	
	return 0;
}

