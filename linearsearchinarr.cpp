#include<iostream>
using namespace std;

/*bool search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
       
    
    }
    return 0;
       
}

int main(){
    int arr[10]={10,20,30,40,50,60,70,80,90,100};
    cout<<"enter the value to search in :"<<endl;
    int key;
    cin>>key;

    bool found = search (arr , 10 , key);
    if(found){
        cout<<"number "<<key<<" is present."<<endl;
    }
    else{
        cout<<"number "<<key <<" is absent."<<endl;

    }
    return 0;
}*/
 
     int search(int arr[],int size,int x ){
        cout<<"enter element to search"<<endl;
        cin>>x;
        for (int i = 0; i < size; i++)
        {
            if (arr[i]==x)
            {
                return 1;
            }
            
        }
        return 0;
        
 }



int main(){
    int num[10];
    int x;
    int key;
    cin>>key;

        for(int i=0;i<key;i++){
        cin>>num[i];
    }

    int found=search(num,10,x);
        if (found)
            {
        cout<<"element is present";
        }
        else{
        cout<<"element is absent";
        }
}
