//getc,putc,gets,puts - changes line
//fgetc,fputc,fgets,fputs - doesn't change line

#include<stdio.h>
#include<string.h>

void main(){
    FILE *ptr;
    char s[]="Devansh Singh";
    ptr = fopen("Debu.txt", "w");
    
    fputc('a', ptr);
    fputc('b', ptr);
    fputc('c', ptr);
    fputc('d', ptr);
    fputc('\n', ptr);  // or fprintf(ptr, "\n");
    
    fputs(s,ptr);
    fputs("\n", ptr);  // or fprintf(ptr, "\n");
    // OR 
    for(int i=0;i<strlen(s);i++){
        fputc(s[i],ptr);
    }
    fclose(ptr);
}