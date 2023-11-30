#include<stdio.h>
// sum is a function which takes a and b as input and returns an integer as an output
 // function prototype declaration

int main(){
    
    sum(2, 15); // function call
    
    return 0;
}

void sum (int a, int b){
    int c;
    c = a + b;
    printf("The value of c is %d\n", c);
}
