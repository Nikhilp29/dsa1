#include<iostream>
using namespace std;

void reverse(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
      swap(arr[start],arr[end]);
      start++;
    end--;
    }
    
    
}

void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
  int arr[5]={1,2,3,4,5};
  int brr[8]={10,20,30,40,50,60,70,80};

  reverse(arr,5);
  reverse(brr,8);

   printarr(arr,5);
   printarr(brr,8);




// void reverse(int arr[],int n){
//     int begin=0;
//     int end=n-1;
//     while (begin<=end)
//     {
//         swap(end,begin);
//         begin++;
//         end--;
//     }
// }
// void printarr(int arr[],int n){
//     for (int i = 0; i < n; i++)
//     {
//        cout<<arr[i];
//     }
    
// }


    
    

// int main(){
//     int arr[5]={1,2,3,4,5};
//     reverse(arr,5);
//     printarr(arr,5);

}