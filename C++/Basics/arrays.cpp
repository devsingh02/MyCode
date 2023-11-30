//sizeof() function gives FULL SIZE of anything that is put into it. [2 int values = 2x4=8 bytes]

//strings --> s.length()
//arrays  --> sizeof(a)/sizeof(a[0])    [prefer user's input variable]

//Default values in an ____ Array ->
// int : 0
// double : 0.0
// string, char : ""

//INITIALIZATION same as java (dynamic):
//Java : int a[]=new int[size];  
//       OR
//       int a; a=new int[size];
//C++ : int* a[]=new int[size];     (pointer used)
//      OR
//      int* a; a=new int[size];

#include<iostream>
using namespace std;

int main(){
    
    //Known
    int arr[]={1,2,3,4,5}; //OR  int arr[5]={1,2,3,4,5};
    cout<<sizeof(arr)<<endl; //5x4(int)=20bytes

    //Unknown : Sequence is imp. (size must be initialised before array)
    int size;
    cout<<"Enter Size : "; cin>>size;
    int a[size];
    cout<<"Enter Values : "<<endl;
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){ //sizeof(a)/sizeof(a[0]) = size
        cin>>a[i];
    }
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){   //i exists(is visible) only in for's scope. Cannot be used outside.
        cout<<a[i]<<" ";
    }
}
