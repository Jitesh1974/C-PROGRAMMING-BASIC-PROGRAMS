//TO FIND AREA OF CIRCLE 
#include<stdio.h>
float calculateArea(float);//function declaration
void main()
{  
float radius,area;

printf("Enter the radius of circle :");
scanf("%f" , &radius);

area=calculateArea(radius);//function calling
printf("%f",area);
    }

float calculateArea(float radius)//function definition
{
    float area;
    area=radius*radius*(3.142);
    return area;
}



// //FIBONACII SERIES USING FUNCTION
#include <stdio.h>
void fib(int n) //function declaration
{
    //function definition
int first = 0, second = 1, next;

printf("Fibonacci Series: %d, %d", first, second);
    for (int i = 3; i <= n; i++) 
    {
        next = first + second;
        printf(", %d", next);
        first = second;
        second = next;
    }
  printf("\n");
}
   //main progaram 
int main() {
    int terms;

    printf("Enter the number of terms to display in the Fibonacci series: ");
    scanf("%d", &terms);

    if (terms < 2) 
    {
      printf("Please enter a number greater than or equal to 2.\n");
    } 
    else 
    {
      fib(terms);//function calling
    }
    return 0;
}



// TO FIND COBINATION  ----> nCr
#include<stdio.h>
int fact(int a)
{
  int i,f=1;
    for(i=1;i<=n;i++)
     {
        f=f*i;
     } 
  return f;
}

void main()
{
    int n,r;
    printf("enter the values of n and r respectively:");
    scanf("%d %d",&n,&r);

    ncr=fact(n)/(fact(r)*fact(n - r));//formula
    printf("%d", ncr);
}


// TO FIND FACTORIAL OF A NUMBER
#include<stdio.h>
int fact(int n)
{
    int i,n,f;
    for(i=1;i<=n;i++)
    {
        f=1;
        f=f*i;
        return f;
    }
}

void main()
{
 int n
 printf("hg");
 sacnf("%d",&n);

 f=fact(n);
 printf("%d",f);
}



//LCM and GCD USING FUNCTIONS
#include <stdio.h>
int gcd(int a, int b) 
{
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int lcm(int a, int b) {
    return (a * b) / gcd(a, b); //formula
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("GCD of %d and %d is: %d\n", num1, num2, gcd(num1, num2));
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm(num1, num2));

    return 0;
}
