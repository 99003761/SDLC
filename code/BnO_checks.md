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


int main() {
    int num,val=0; //variable will be saved for future use
        printf("Input a number: ");
    scanf("%d", &num); 
   // check_binary(num);
    val=check_octal(num);
    if (val==1)
    printf("valid\n");
    else printf("Invalid\n");
    return 0;
}
