#include<iostream>
using namespace std;

int uni(int arr[],int size){
  int ele=0;
  for (int i = 0; i < size; i++)
  {
    ele=ele^arr[i];
  }
  cout<<"unique element in array:"<< ele;
}

int main(){
  int number;
  cout<<"enter the array size"<<endl;
  cin>>number;
  int num[number];
  cout<<"enter the array element"<<endl;
  for (int i = 0; i < number; i++)
  {
    cin>>num[i];
  }
  
 uni(num,number);


}