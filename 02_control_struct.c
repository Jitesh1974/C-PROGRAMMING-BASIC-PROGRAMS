#include<stdio.h>
int main()
{
//if else STATEMENT
//COMPARE TWO NUMBERS
int a,b;
printf("enter 1st no ");
scanf("%d",&a);

printf("enter 2nd no ");
scanf("%d",&b);

if( a > b)
{
  printf("the greatest no is: %d\n" , a);
}
else 
{
    printf("the greatest no is: %d\n" , b);
}
 return 0;
}



//compare three integers using nested if else
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the 1st number :");
    scanf("%d" ,&a);
    printf("Enter the 2nd number :");
    scanf("%d" ,&b);
    printf("Enter the 3rd number :");
    scanf("%d" ,&c);
   // or use scanf("%d %d %d",&a,&b,&c);
if(a>b)
{
    if(a>c)
    printf("%d",a);
else printf("%d",c);
}
else if(b>c)
{
    if(b>a)
    printf("%d",b);
else printf("%d",a);
}
else printf("%d",c);
    
    return 0;
}



//TO FIND ROOTS OF QUADRATIC EQ
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    float real,img;

    printf("Enter the values of a,b,c respectively:");
    scanf("%d %d %d",&a,&b,&c);

    d=(b*b)-(4*a*c);
   
    if(d>0)
    {
    printf("The roots are real and distinct");
    printf("Roots are :%d and %d",(-b+sqrt(d))/2*a,(-b-sqrt(d))/2*a);
    }
    else if(d==0)
    {
    printf("The roots are real and equal");
    printf("\nRoots are :%d and %d",(-b/(2*a)),(-b/(2*a)));  
    }
    else if(d<0)
    {
        d=-d;
        printf("The roots imaginary");
    real=(-b/(2*a));
    img=(sqrt(-d)/(2*a));

    printf("\nRoots are :%f+%fi and %f-%fi",real,img);   
    }

    else
    printf("Invalid Input");

return 0;
}


//SWITCH CASE
/*
syntax:
   switch(variable_name):
      case 1:
       statement1;break;
      case 2:
       statement2;break
      case 3:
       statement3;break
      
     default: statement(optional)
*/

//BASIC CALCULATOR USING SWITCH CASE
#include <stdio.h>
int main()
{
    int a,b;
    char x;
    printf("ENTER THE OPERATOR (+ - * /) : ");
    scanf("%c" , &x);
    printf("ENTER FIRST NUMBER : ");
    scanf("%d" , &a);
    printf("ENTER SECOND NUMBER :");
    scanf("%d" , &b);

    switch(x)
    {
        case '+':
        printf("%d + %d = %d",a,b,a+b);break;

        case '-':
        printf("%d - %d = %d",a,b,a-b);break;

        case '*':
        printf("%d * %d = %d",a,b,(a*b));break;

        case '/':
        printf("%d / %d = %d",a,b,a/b);break;

        default:printf("INVALID CHARACTER !!!!!!");
    }
    return 0;
}



//TO CHECK THE ALPHABET IS A VOWEL
#include <stdio.h>
int main()
{  
    char x;
    printf("Enter an aplphabet");
    scanf("%c",&x);
    switch(x)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
         {
           printf("Vowel");
           break;
         }
     default:printf("consonent");
    }
    return 0 ;
}