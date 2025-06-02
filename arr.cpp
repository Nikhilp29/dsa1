#include<iostream>
using namespace std;

int printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    return 0;
}

int main(){
    int first[15]={4,8,56,45,7,18,10,99,3,69};

    int n=15;
    cout<<"first array:";
    printarr(first,10);
    cout<<endl;

    int second[15]={4,18,10,93,69};
        cout<<"2nd array:";
     n=5;
    printarr(second,5);
    cout<<endl;

     char third[10]={'a','b','c','d','e','f','g','h','i','j'};
     n=10;
        cout<<"3rd array:";
        for(char i=0;i<n;i++){
            cout<<third[i]<<" ";
        }
    
   // cout<<"3rd array:";
   // printarr(third,10);
 //   cout<<endl;

}