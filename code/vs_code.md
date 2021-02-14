#include <stdio.h>

int check_binary(int copy) {
    int temp = 0;
    while (copy != 0) {
        temp = copy % 10;

        if ((temp == 0) || (temp == 1)) {
            copy = copy / 10;
            if (copy == 0)
            {
                printf("valid binary number.\n");
                return 1;
                break;
            }
        }
        else {
            printf("Invalid Bin\n");
            return 0;
            break;
        }
    }
}
int check_octal(long n) 
{ 
    while (n) 
    { 
        if ((n % 10) >= 8) 
            return 0; 
        else
            n = n / 10; 
    } 
    return 1; 
}
void convert_to_x_base(int num, int base)
{    
    int rem;

    // base condition
    if (num == 0)
    {
        return;
    }

    else
    {
        rem = num % base; // get the rightmost digit        
        convert_to_x_base(num/base, base);  // recursive call        
        if(base == 16 && rem >= 10)
        {
            printf("%c", rem+55);
        }

        else
        {
            printf("%d", rem);
        }
    }

}

int main() 
{
    int num1,val=0,ch1=0; 
    int num, choice, base;

    while(1)
    {
        
        printf("Select conversion Type: \n\n");
        printf("1. BASE Conversion\n");
        printf("2. Units Conversion\n\n");
        scanf("%d",&ch1);


        
        
        

        switch(ch1)
        {
            case 1:
                printf("1. Decimal to Binary. \n");
                printf("2. Decimal to Octal. \n");
                printf("3. Decimal to Hexadecimal. \n");
                printf("4. Binary to Decimal. \n");
                printf("5. Hexadecimal to Decimal. \n");
                printf("6. Octal to Decimal. \n"); 
                printf("7. Exit. \n");
                printf("\nEnter your choice: ");
                
                scanf("%d", &choice);
                break;
            case 2:
                    printf("1.  \n");
                    printf("2.  \n");
                    printf("3.  \n");
                    printf("4.  \n");
                    printf("5.  \n");
                    printf("6.  \n"); 
                
                break;              
                    
            default:
                printf("Invalid choice.\n");
                continue;
        }
        switch(choice)
        {
            case 1:
                base = 2;
                break;
            case 2:
                base = 8;
                break;              
            case 3:
                base = 16;
                break;
            case 4:
                
                //printf("Exiting ...");
                //exit(1);
            case 5:

            default:
                printf("Invalid choice.\n");
                continue;
        }

        printf("Enter a number: ");
        scanf("%d", &num);

        printf("Result = ");

        convert_to_x_base(num, base);

        printf("\n");
    }        

        printf("Input a number: ");
    //scanf("%d", &num); 
   // check_binary(num1);
    val=check_octal(num1);
    if (val==1)
    printf("valid\n");
    else printf("Invalid\n");
    return 0;
}
