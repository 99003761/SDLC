**Any_To_Any**

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>


int toAnyBase(int n, int toBase); // from base 10 (2nd)
int toBaseTen(char array[256], int fromBase); // from any base (1st)
int fromAnyToAny(char input[],int fromBase,int toBase);

int main()
{
    char input[10];
    int fromBase=0;
    int toBase=0;
    int answer=0;
    int answer2=0;
    

    printf("Enter number :");
    fgets(input, sizeof(input),stdin);
    printf("\n Enter base of input: ");
    scanf("%d",&fromBase);
    printf("\n Enter base of output: ");
    scanf("%d",&toBase);
    answer=fromAnyToAny(input,fromBase,toBase);
   // system("pause");
    return 0;
}


int fromAnyToAny(char input[],int fromBase,int toBase)
{
    int x=0;
    int y=0;
    x=toBaseTen(input,fromBase);
    y=toAnyBase(x,toBase);
    return y;
    printf("%d", y);
}

int toAnyBase(int n, int toBase) 
{ 
    int counter=0;
    int bin[256];
    int quo=1;
    int answer;
    
    
    while(quo!=0)
        {
            quo=n/toBase;
            bin[counter]= n % toBase;
            counter++;
            n=quo;
        }
        
    while(counter>0)
        {
            printf("%d",bin[counter-1]);
            counter--;
        }
        printf("\n");
return answer;
}
    
    
int toBaseTen(char array[256], int fromBase)
{
    int i,j;
    int arraylen;
    int n;
    int sum=0;
    int pwr;
        
    arraylen=strlen(array)- 1;
         for(i=0,j=arraylen-1;i<arraylen,j>-1;i++,j--)
            {          
              n = (array[i] - '0');
              sum+= n*pow(fromBase,j);
            }
    return sum;
}
