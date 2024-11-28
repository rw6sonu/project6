/*Develop a menu-driven program to implement arithmetic operations such as +, -, *, /, and %
using UDF, switch case, and looping. Make sure that the program is endless until a certain letter
is pressed.*/

#include<stdio.h>

int add ( int a , int b ) 
{
   return a + b ;
}

int sub ( int a , int b)
{
    return a - b ;
}

int mul ( int a , int b)
{
    return a * b ;
}

int div ( int a , int b )
{
    if ( b != 0)
    {
        return a / b ;
    }
    else
    {
        printf("Error : division by zero is not allowed .\n");
        return -1 ;
    }
}
int modulus ( int a , int b)
{
    if( b != 0 )
    {
        return a % b ;
    }
    else
    {
        printf("Error : modulus by zero is not allowed.\n");
        return -1 ;
    }
}
int main() 
{
    
    int num1, num2 , choice;  

    while (1) 
    {
        
        printf("Press 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 to exit\n");

        
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0) 
        {
            printf("Exiting the program.\n");
            break;  
        }

        
        if (choice == 5) 
        {
            printf("Enter the first integer for modulus: ");
            scanf("%d", &num1);
            printf("Enter the second integer for modulus: ");
            scanf("%d", &num2);
        } 
        else 
        {
            printf("Enter the first number: ");
            scanf("%d", &num1);
            printf("Enter the second number: ");
            scanf("%d", &num2);
        }

        // Switch-case for performing the chosen operation

        switch (choice) 
        {
            case 1:
                printf("Result: %d\n", add(num1, num2));
                break;
            case 2:
                printf("Result: %d\n", sub(num1, num2));
                break;
            case 3:
                printf("Result: %d\n", mul(num1, num2));
                break;
            case 4:
                if (div(num1, num2) != -1)
                    printf("Result: %d\n", div(num1, num2));
                break;
            case 5:
                if (modulus( num1, num2) != -1)
                    printf("Result: %d\n", modulus( num1, num2));
                break;
            default:
                printf("Invalid choice! Please select a valid operation.\n");
        }
 
   }
}