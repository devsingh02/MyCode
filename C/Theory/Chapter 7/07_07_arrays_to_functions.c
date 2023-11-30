#include<stdio.h>

 void printArray(int *ptr, int n){
     for(int i=0; i<n; i++){
         printf("The value of element %d is %d\n", i+1, *(ptr++)); 
     }
     
int main(){
    int arr[] = {1,2,3543,34,3,645,23};
    int size=7;
    printArray(arr, size);
    printf("%d", arr[2]);
    return 0;
}
