//ONE Template for ONE class/object

#include<iostream> 
using namespace std;
// template<class T1,class T2,class T3> X // <__,__,__> doesn't match functions' (__,__) parameter

template<int s>
void subt(){cout<<2-3<<endl;}

int main(){
 subt();
}