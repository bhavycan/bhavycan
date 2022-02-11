#include<iostream>
using namespace std;
//Here, i am finding the element from the given array
int main(){
    int arr[5]= {10,15,42,13,15};
    int n =5;
    int a=0;
    int key;
    cout<<"What is the Key: ";
    cin>>key;
    for (int i = 0; i <n; i++)
    {
        if (arr[i] == key)
        {
            a=i+1;
        }
     
    }
    if (a !=0)
    {
        cout<<"Key is Successfully Founded!"<<endl;
    }
    else{
        cout<<"Sorry! it is not founded!";
    }
    
}