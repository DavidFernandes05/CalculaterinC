#include <stdio.h>
#include <math.h>
#define NAME_MAX 23
#define line "..........................."

int main (){
    //variavel defitions 
    float num1 ,num2;
    char name [NAME_MAX];
    int operation;


    puts (line);
    printf("\nCalculater in C\n");
    puts (line);
    printf("\n");

    //request data from the user
    printf ("Whats your name?\n");
    scanf ("%s",name);


    printf("%s what is the first numeber?",name);
    scanf ("%f",&num1);
    printf("%s what is the second numeber?",name);
    scanf ("%f",&num2);
    
    do {
        printf ("Operation? \n1-> Add \n2-> Sub \n3-> Mul \n4-> Div\n");
        scanf("%d",&operation);

    }while (operation != 1 && operation != 2 && operation != 3 && operation != 4);


    //menu for basic operations
    switch (operation){
        case 1:
        printf ("The add the 2 numbers is %0.2f",num1+num2);
        break;
        case 2:
        printf ("The sub the 2 numbers is %0.2f",num1-num2);
        break;
        case 3:
        printf ("The mul the 2 numbers is %0.2f",num1*num2);
        break;
        case 4:
        printf ("The div the 2 numbers is %0.2f",num1/num2);
        break;
        default :
            printf ("erro !!");
        break;

    }

    printf("\n\n\n\n\n Thanks for using program");



}