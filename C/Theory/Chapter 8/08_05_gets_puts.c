#include<stdio.h>
#include<string.h>
int main(){
    char s[34];
    printf("Enter your name: ");
    gets(s); 
     
    printf("Your name is ");
    puts(s);
     printf("%s ",s);
    return 0;
}
