#include<stdio.h>
float force(float mass){
    float result = mass * 9.8;
    return result;
}

int main(){
    float m;
    printf("Enter the value of mass in kgs\n");
    scanf("%f", &m);
    printf("The value of force in Newton is %.2f\n", force(m)); 
    return 0;
}

