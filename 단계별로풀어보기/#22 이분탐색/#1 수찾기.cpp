#include <stdio.h>
#include <cstdio>
#include <algorithm>

using namespace std;

const int MAX = 100005;
int n,m,k;
int a[MAX],b[MAX];


int binarySearch(int arr[], int start, int end, int value){
	
	if(start > end) return -1;
	else if( start == end){
		if(arr[start] == value) return start;
		else return -1;
	}
	else{
		int mid = (start+end) / 2;
		if(arr[mid] == value) return mid;
		else if(arr[mid] > value) return binarySearch(arr,start,mid-1,value);
		else return binarySearch(arr,mid+1,end,value);
		
	}
	
}


int main(){
	
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	
	scanf("%d",&m);
	
	for(int i=0;i<m;i++){
		scanf("%d",&b[i]);
		int k = b[i];
		int idx = binarySearch(a,0,n-1,k);
		if(idx == -1) printf("0\n");
		else printf("1\n");
	}
	
	
	
	
	
	return 0;
}
