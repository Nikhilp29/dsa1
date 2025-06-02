#include<iostream>
using namespace std;

int dup(int arr[],int size){
  int temp=0;
  for (int i = 0; i < size; i++)
  {
    temp=temp^arr[i];
    cout<<temp<<" ";
    cout<<endl;
  }
  cout<<"temp after loop"<<temp<<endl;

  for (int j = 0; j < size-1; j++)
  {
    temp=temp^arr[j];
    cout<<temp<<" ";
    cout<<endl;
  }
    cout<<"temp after loop"<<temp;

}



int main(){
  int num[5]={10,20,30,40,30};
  dup(num,5);
  
}