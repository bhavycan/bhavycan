#include<iostream>
using namespace std;

//Finding the MAximum Number and the Minimum Number Among the Array
int main(){
    int n=5;
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cout<<i+1<<">";
        cin>>arr[i];
    }
    int Max_Number = -1;
    int Min_Number = 99999999;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>Max_Number){
            Max_Number = arr[i];
        }
        else{
            Min_Number = arr[i];
        }
    }
    cout<<Max_Number<<" "<<Min_Number;

    

    
}
