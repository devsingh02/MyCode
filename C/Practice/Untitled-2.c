#include<stdio.h>
#include<string.h>
int main(){
    FILE *ptr;
    char s[]="Devansh Singh";
    ptr = fopen("Debu.txt", "w");
    fputc('c', ptr);
    fputs('c', ptr);
    fputc('c', ptr);
    fputc('c', ptr);
    fprintf(ptr, "\n");
    fputs(s,ptr);  //doesn 't change line
    fprintf(ptr,"\n");
    
    for(int i=0;i<strlen(s);i++){
        fputc(s[i],ptr);
    }
   
    fclose(ptr);
    return 0;
}

