#include<iostream>
using namespace std;
int Getmin(int num[],int n){
        int min= INT8_MAX;
        for(int i=0;i<n;i++){
                 // mini=min(mini,num[i]);
                if(num[i]<min){
                        min=num[i];
                }
        }
        return min;
}

int Getmax(int num[],int n){
        int max= INT8_MIN;
        for(int i=0;i<n;i++){
               // maxi=max(maxi,num[i]);
                if(num[i]>max){
                        max=num[i];
                }
        }
        return max;
}
 

int main(){
        int size;
        cin >> size ;
        int num[10];
        cout<<"enter array elements"<<endl;
        for(int i=0;i<size;i++){
                cin>>num[i];
        }
        cout<<"Largest value is "<< Getmax(num,size)<<endl;
        cout<<"Smallest value is "<< Getmin(num,size)<<endl;
}