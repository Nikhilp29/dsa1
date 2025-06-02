#include<iostream>
using namespace std;



int main(){
    int arr[4]={4,8,56,45};
    int largest=arr[0];
    int sec=arr[0];
   int n=4;
  

    for(int i=0;i<n;i++){
        if(arr[i]>largest){
          largest=arr[i];
          cout<<largest<<endl;
        }
    }
  cout<< largest<<endl;

 
  
}