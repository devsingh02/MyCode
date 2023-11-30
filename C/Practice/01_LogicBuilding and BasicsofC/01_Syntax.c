#include<stdio.h>
int main(){
    int ns, nt;
    printf("Number of students:\n");
    scanf("%d",&ns);
    printf("Number of teams:\n");
    scanf("%d",&nt);
    printf("The number of students in each team is %d and left out is %d",ns/nt,ns%nt);
    return 0;
}