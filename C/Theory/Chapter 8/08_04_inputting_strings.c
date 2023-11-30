#include<stdio.h>
#include<string.h>
void main(){
    char s[34]; 
    char a[100];
    printf("Enter your name by scanf(): "); 
    gets(s);   //scanf("%s",&s) gives error to whole program
    printf("%s\n",s); 
    printf("Enter your name by gets(): ");
    gets(a);
    printf("%s",a);
}
