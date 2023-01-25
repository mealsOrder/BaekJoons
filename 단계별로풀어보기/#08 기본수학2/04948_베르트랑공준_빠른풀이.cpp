#include<iostream>

using namespace std;

const int MAX = 246913;
int arr[MAX];
int n;
int main(){
    
    for(int i=1;i<=MAX;i++){
        arr[i]=i;
    }

    for(int i=2;i<=MAX;i++){
        if(arr[i]==0) continue;
        for(int j=2*i;j<=MAX;j+=i){
            arr[j]=0;
        }
    }
    
    while(1){
        cin >> n;
        if(n==0) break;
        int cnt=0;
        for(int i=n+1;i<=2*n;i++){
            if(arr[i]!=0) cnt++;
        }
        cout << cnt << endl;
    }
    
}
