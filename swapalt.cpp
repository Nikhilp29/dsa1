#include<iostream>
using namespace std;

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

}

void swapArr(int arr[],int size){
    for(int i=0;i<size;i=i+2){
        if(i+1<size){
        swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int even[6]={1,2,3,4,5,6};
    int odd[5]={1,2,3,4,5};
    swapArr(even,6);
    printArr(even,6);

    cout<<endl;

       swapArr(odd,5);
    printArr(odd,5);
}