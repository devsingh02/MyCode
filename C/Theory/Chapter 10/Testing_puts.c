#include<stdio.h>
#include<string.h>

void main(){
    FILE *ptr;
    char c, s[100];
    ptr = fopen("Debu.txt", "r");
    fgetc(ptr); 
    fgets(s,20,ptr);  //will print 4-1 (n-1) characters, terminates at \n or EOF
    printf("%s",s);
    fgets(s,11,ptr);  
    printf("%s",s);
    fclose(ptr);
}