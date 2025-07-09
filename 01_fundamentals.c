#include<stdio.h>
int main()
{
    printf('Hello World');
return 0;
}



#include<stdio.h>
int main()
{
int a,b,c;
// // you cannot write input command and sring in same line of code// // 
printf("enter 1st no ");
scanf(" %d",&a);
printf("enter 2nd no ");
scanf(" %d",&b);
// or you can use scanf("%d%d" , &a,&b);
c = a*b ;
printf("the multiplication of given numbers is : %d \n" ,c);
return 0;
}



//Swapping two integers
#include<stdio.h>
int main()
{
int x=5,y=6,temp;

//method 1 using 3rd variable
temp=a;//a------>temp , a------>b, b------>temp 
a=b;
b= temp;
printf("%d %d",a,b);

//method 2 usind add and subt
x=x+y; 
y=x-y; 
x=x-y;
printf("%d %d",x,y);

//method 3 using XOR operator
x=x^y; 
y=x^y; 
x=x^y;
printf("%d %d",x,y);

return 0;
}



//covert celsius to fahrenhiet
#include<stdio.h>
int main()
{
float far,cel;
printf("Enter the Temperature in degree celsius:");
scanf("%f",&cel);

far=(1.8*cel;
printf("The temperature in fahrenhiet is: %0.3f",far);

return 0;
}



//some imp considerations
/*%a.b  d or f or c etc
a=>no of space for the given entity
b=>no of decimal plaace in the output */
#include<stdio.h>
int main()
{
int a =2;
float b =5.5637;
printf("%20.7f\n" ,b);//prints 5.5637002
printf("The value of a is %d and value of b is %f \n",a,b);

return 0;
}



//Program to find largest of three numbers using conditional operator:
#include<stdio.h>
int main()
{
  int a,b,c,greatest;

  printf("Enter three numbers:\n");
  scanf("%d%d%d",&a,&b,&c);

  greatest = (a>b) ? (a>c ? a:c) : (b>c ? b:c);
  
  printf("The greatest Number is: %d", greatest);

  return 0;
}



//TO CHECK LEAP YEAR
#include<stdio.h>
int main()
{
int year;

printf("Enter a year:");
scanf("%d",&year);

if((year%400==0) || ((year%4==0) && (year%100!=0)))
printf("Leap Year");

else
printf("Not a leap year");
}
