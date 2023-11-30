#include<iostream>
using namespace std;

template<class T>
void print(T arr[]){
    int n=sizeof(arr)/sizeof(T);
    for(int i=0;i<n;i++){cout<<arr[i]<<endl;}
}
int main(){
    int a[]={1,2,3,4,5};
    string b[]={"Devansh","Nishant","Ishu","Saksham","Mari","Ankit"};
    double c[]={1.2,2.3,4.5};
    print(a);
    print(b);
    print(c);
}
