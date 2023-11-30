#include<stdio.h>
#include<string.h>
int main(){
    // int a = 4;
    // printf("%d", a);

    // char *ptr = "Harry bhai";
    char ptr[] = "Harry bhai";
    strcpy(ptr,"Debu bhai");  //ptr="Debu bhai" is wrong
    printf("%s", ptr);
    return 0;
}