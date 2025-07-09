#include<stdio.h>
int main()
{
//some points to consider for using for loop 
/*
0---->a
i=0 starting point
i<=a termination point and i should take all the values between 0--->a
*/

//TO PRINT NUMBERS FROM ZERO TO a USING FOR LOOP
int a,i ;
printf("enter the number");
scanf("%d" , &a);

for (i=0 ; i<a ; i= i-1)  //for acdending order
 {
  printf("the numbers are %d\n" , i);
   }

for (i = a; i >= -2; i--) // for decending order//
 {
   printf("the number is %d\n", i);
    }
  return 0;
}




// PRINT NUMBERS BETWEEN A GIVEN RANGE (num1 > num2)
int a,b,i;
printf("Enter the 1st number :");
scanf("%d" , &a);
printf("Enter the 2nd number :");
scanf("%d" , &b);

printf("THE NUMBERS BETWEEN %d AND %d ARE :" ,a,b);

for(i=a+1 ; i<=b-1 ; i++)
{
     printf("%d " , i);
} 
return 0;
}



//PRINT NUMBERS BETWEEN ANY TWO NUMBERS
int a,b,i;
printf("ENTER THE 1st  NUMBER :");
scanf("%d",&a);
printf("ENTER THE 2nd NUMBER :");
scanf("%d",&b);
/*
input:20 10 //output:19 18 17 16 15 14 13 12 11 
*/
if(a>b) 
{
printf("THE NUMBERS BETWEEN %d AND %d ARE:" ,a,b )

    for(i=a-1 ; i>=b+1 ; i--){
    printf("%d ",i );
    }
}
/*
input:10 20 //output:11 12 13 14 1 16 17 18 19 
*/
else if(b>a)
{
    printf("THE NUMBERS BETWEEN %d AND %d ARE:" ,b,a );

    for(i=a+1 ; i<=b-1 ; i++){
        printf("%d ",i );
    }
}
else {printf("NUMBERS ARE EQUAL");}



                 //DO WHILE LOOP

/*syantax
do
{
//code to executed

}while( condition  );
*/
#include<stdio.h>
int main()
{
int a,i;
i=0;
printf("Enter the number :");
scanf("%d" , &a);
do
{
 //prints numbers: 0 1 2 3 4 5 .....a
 printf("%d\n" , i);
 i = i + 1;

}while(i<a);
return 0;
}

                  // WHILE LOOPS 

/*
syntax 
while( condition );
{
//code to be executed
}
*/
//SAME EXAMPLE AS IN DO WHILE LOOP



//TO PRINT n NATURAL OR n WHOLE NUMBERS
#include<stdio.h>
int main()
{
int a,i;
printf("ENTER THE NUMBER TILL YOU WANT THE NATURAL NUMBERS :");//NATURAL--->WHOLE
scanf("%d" , &a);
printf("THE NATURAL NUMBERS TILL THE GIVEN LIMIT ARE :");//NATURAL--->WHOLE

for(i=1 ;i<=a ; i++ )//whole numbers---> for(i=0; i<=a;i++)
{
    printf("%d " , i);
}
return 0;
}



//TO PRINT MULTIPLICATION TABLE
#include<stdio.h>
int main()
{
int a,i;
printf("ENTER THE NUMBER YOU THE TBALE OF :");
scanf("%d" ,&a);

for(i=1;i<=10; i++)
{
    printf("%d x %d = %d \n" , a,i, a*i);
}
return 0;
}



//covert decimal into binary number
#include<stdio.h>
int main()
{
 int n,rem,b=0,base=1;
 printf("\nEnter Any Number To Convert Into Its Binary Equivalent = "); 
 scanf("%d",&n);
 while(n>0)
 {
 rem=n%2; //Base of Binary no is 2

 b=b+rem*base;

 n=n/2;

 base=base*10; //Base of Decimal no is 10 
 }

 printf("\nBinary No. Is = %d",b);
return 0;
}



//TO CHECK WHETHER THE NUMBER IS PRIME OR NOT
#include <stdio.h>
int main()
{
    int num, i, flag= 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

      if (num <= 1)//no less than 1 or one itself is prime//
       {
         flag= 0;
       } 
      else 
       {// checking the divisibility of entered number // 2 to num/2
        for (i = 2; i <=num/2; i++) {
                if (num % i == 0) {
                    flag= 0; 
                    break;
                }
            }
       }
        if (flag) {
            printf("%d is a prime number.\n", num);
        } else {
            printf("%d is not a prime number.\n", num);
        }
    return 0;
}



//Factors of a number:
#include<stdio.h>
int main()
{
int n,i;

printf("Enter a number:");
scanf("%d",&n);

printf("Factors are:\n");

i=2;
while(i<=n-1)
 {
   if(n%i==0)//checking the divisibility 
   printf("%d\n",i);
   i++;
 }
 return 0;
}



//alphabet regualr pyramid pattern
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number of lines:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)//printing rows
    {
         for(j=1;j<=n-i;j++)//printing spaces
            {
             printf(" ");
             }
            for(j=1;j<=i;j++)//left side character
               {
                 printf("%c",(char)(j+64));
               }
                for(j=i-1;j>=1;j--)//right side character
                 {
                   printf("%c",(char)(j+64));
                 }
     printf("\n");
    }
    return 0;
}



//Fibonacci Series: 0 1 1 2 3 5 8 13 21 . . . . .
#include<stdio.h>
int main()
{
int i,no,a=0,b=1,c;

printf("Enter the value of n:");
scanf("%d",&no);

printf("%d\n%d\n",a,b);

for(i=1;i<=n-2;i++)
 {
  c=a+b;
  printf("%d",c);
  a=b;
  b=c;
 }
return 0;
}



//Armstrong Number: 153 = cube(1)+cube(5)+cube(3)
#include<stdio.h>
int main()
{
int n,cp,dig,sum=0;

printf("Enter any number:");
scanf("%d",&n);
cp=n;

do
{
dig=n%10;
sum=sum+dig*dig*dig;
n=n/10;
}while(n!=0);

if(sum==cp)
printf("Armstrong Number");
else
printf("Not an Armstrong Number");

return 0;
}