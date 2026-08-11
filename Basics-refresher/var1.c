/*This is to understand how scanf works*/

#include <stdio.h>

int main(){

    int age;
    float weight;
    printf("Enter the values :\n");
    scanf("%d %f",&age,&weight); //& is used to pass the address of the variable 
    // There should be space between the format specifier while using scanf
    printf("The value given by user is : %d %f\n",age,weight); 

    return 0;
}