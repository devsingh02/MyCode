#include<stdio.h>

int main(){
    FILE *ptr;
    // fgetc demo for reading a file
    // ptr = fopen("getcdemo.txt", "r");
    // char c = fgetc(ptr);
    // printf("The value of my character is %c\n", fgetc(ptr));
    // printf("The value of my character is %c\n", fgetc(ptr));
    // printf("The value of my character is %c\n", fgetc(ptr));
    // printf("The value of my character is %c\n", fgetc(ptr));
    // printf("The value of my character is %c\n", fgetc(ptr));

    ptr = fopen("putcdemo.txt", "w");
    fputc('c', ptr);
    fprintf(ptr, "\n");
    fputc('c', ptr);
    fputc('c', ptr);
    putc('c', ptr);
    fclose(ptr);
    return 0;
}