#include<stdio.h> 
#include<stdlib.h> 

int main(){
    char *ptr; 
    ptr = (char *) calloc(6, sizeof(char));  // malloc() returns ERROR
    // for(int i=0; i<6;i++){
    //     printf("Enter the value of %d element: \n", i); 
    //     scanf("%d", &ptr[i]);
    // }

    for(int i=0; i<6;i++){
        printf("The value of %d element is: %c\n", i, ptr[i]); 
    }
    return 0;
}