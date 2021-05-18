/*segmentation Fault--> We are trying to access the part of the memory or memory which is not allow to us.
in that case it will give segmation fault or runtime error.
As example 1:- a[-1];
as we know the index of the array's element is start with 0 index so a[-1] will produce error.

Example 2: The max seze of integer array is : arr[10^6] or sometimes arr[10^5]
If we go beyond to this there will be segmation fault or runtime error*/

// some other example 
#include<iostream.h>
using namespace std;

int main(){
    int a[100];
    
    cout<<a[100000];// segmention fault
    return 0;
}