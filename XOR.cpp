#include<iostream>
#include<string>
// fiding the unique number among the array
// arr[] = "1,2,3,4,1,2,3"
// Here the unique number is 4
// How to fid? -----------> using XOR
// When we see truthtable, If both number is same will give 0 ( 0,0 & 1,1) 
// and if both are different then it will give us 1( 1,0 & 0,1)
// Note : If we do the xor of same number it will give us ------> 0
//                 1 1 0 1
//             ^   1 1 0 1
//             -----------
//                 0 0 0 0  

using namespace std;
int unique(int arr[],int n){
    int xor_sum = 0;
    for (int i = 0; i < n; i++)
    {
        xor_sum = xor_sum ^ arr[i];         
                                //     0 0 0 0         0 0 0 1     0 0 1 1
                                // ^   0 0 0 1      ^  0 0 1 0   ^ 0 0 1 1
                                // -----------      ----------   ---------
                                //     0 0 0 1         0 0 1 1     0 0 0 0
    }
    return xor_sum;
}

int main()
{
    int arr[]= {1,2,3,4,1,2,3};
    cout<< unique(arr,7)<<endl;
   return 0;
}
    