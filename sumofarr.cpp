#include<iostream>
using namespace std;

int getsum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<< sum;
}

int main(){
    int num[5];
    int key;
    cin>>key;
    
    for (int i = 0; i <key; i++){
        /* code */
        cin>>num[i];
     }
  
    getsum(num,key);
}