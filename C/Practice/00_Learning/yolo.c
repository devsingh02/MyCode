#include<stdio.h>
int main(){
    int nos,not;
    printf("Number of students:\n");
    scanf("%d",&nos);
    printf("Number of teams:\n");
    scanf("%d",&not);
    printf("The number of students in each team is %d and left out is %d",nos/not,nos%not);
}