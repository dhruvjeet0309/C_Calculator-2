#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void menu(int x);
void addition(int x,int y);
void subtraction(int x,int y);
void multiplication(int x,int y);
void division(int x,int y);
void modulus(int x,int y);
void square(int x);
void exit(int x);

int main()
{
    int opt;
    printf("___Welcome___\n\n"); 
    printf("MENU--\n\n");
    printf("1.Addition\t2.Substraction\t3.Multiplication\n\n4.Division\t5.Modulus\t6.Square\n\n");
    
    printf("Enter the option no. to proceed --\n");
    scanf("%i",&opt);
    menu(opt);
}

//-------------------------------MENU FUNCTION--------------------------

void menu(int x)
{
    int n,n1,n2;
    if(x==1){
        printf("Enter the two numbers :\n");
        scanf("%i\n%i",&n1,&n2);
        addition(n1,n2);
    }else if(x==2){
        printf("Enter the two numbers :\n");
        scanf("%i\n%i",&n1,&n2);
        subtraction(n1,n2);
    }else if(x==3){
        printf("Enter the two numbers :\n");
        scanf("%i\n%i",&n1,&n2);
        multiplication(n1,n2);
    }else if(x==4){
        printf("Enter the two numbers :\n");
        scanf("%i\n%i",&n1,&n2);
        division(n1,n2);
    }else if(x==5){
        printf("Enter the two numbers :\n");
        scanf("%i\n%i",&n1,&n2);
        modulus(n1,n2);
    }else if(x==6){
        printf("Enter the number :\n");
        scanf("%i",&n);
        square(n);
    }
}


//-------------------------ADDITITON FUNCTION------------------------------

void addition(int x,int y)
{ 
    int re;
    int sum=x+y;
    printf("Sum = %i",sum);

    printf("\nEnter 7 for restart:\n");
    scanf("%i",&re);
    if(re==7){
        system("clear");
        int opt;
    printf("___Welcome___\n\n"); 
    printf("MENU--\n\n");
    printf("1.Addition\t2.Substraction\t3.Multiplication\n\n4.Division\t5.Modulus\t6.Square\n\n");
    
    printf("Enter the option no. to proceed --\n");
    scanf("%i",&opt);
    menu(opt);
    }else{
        printf("THanks");
    }

}

//-------------------------SUBTRACTION FUNCTION------------------------------

void subtraction(int x,int y)
{ 
    int diff=x-y;
    printf("Difference = %i",diff);

}

//-------------------------MULTIPLICATION FUNCTION------------------------------

void multiplication(int x,int y)
{ 
    int pro=x*y;
    printf("Product = %i",pro);

}

//-------------------------DIVISION FUNCTION------------------------------

void division(int x,int y)
{ 
    int div=x/y;
    printf("Division = %i",div);

}

//-------------------------ADDITITON FUNCTION------------------------------

void modulus(int x,int y)
{ 
    int mod=x%y;
    printf("Modulus = %i",mod);

}

//-------------------------ADDITITON FUNCTION------------------------------

void square(int x)
{ 
    int square=x*x;
    printf("Square = %i",square);

}