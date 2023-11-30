#include<stdio.h>

int main(){
    FILE *ptr;
    int num,num2,num3,num4;
    ptr = fopen("popoarjhgjgkry.txt", "r");
    fscanf(ptr, "%d", &num);
    fscanf(ptr, "%d", &num2);
    fscanf(ptr, "%d", &num3);
    fscanf(ptr, "%d", &num4);   
    fclose(ptr);
    printf("The value of num is %d\n", num);
    printf("The value of num2 is %d\n", num2);
    printf("The value of num2 is %d\n %d \n %d", num3,num4,ptr);
    return 0;
}