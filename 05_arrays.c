/*
ARRAYS: collection of elements of same datatype
data_type a[array_size]={element1,element2,.......,element n}

*to store input values in an array we use for loop
 for(i=0;i<n;i++)//n---->number of elements in array
  {
    scanf("%d", &array_name[i])
  }

*to print the array we again require a for loop
 for(i=0;i<n;i++)//n---->number of elements in array
  {
    printf("%d", array_name[i])
  }
 
  note:same can be done using while loop
*/

#include <stdio.h>
int main()
{
    //TO FIND SUM OF 10 NUMBERS USING ARRAY
    int array[10];
    int i,sum=0;
    printf("Enter 10 natural numbers :");

    for(i=0;i<10;i++)
    {
        scanf("%d", &array[i]);//input: 1 2 3 4 5 6 6 7 8 9 0
        sum += array[i];
    }
    printf("%d", array[i]);
/*logic for sum += array[i]

when i=0  sum=0 (we have initialized sum=0)
  sum = 0 + 1(first input) --->1

when i=1  sum=1
  sum = 1 + 2(second input)--->3

when i=2  sum=3
  sum = 3 + 3(third input)--->6

when i=3  sum=6
  sum = 6 + 4(fourth input)--->10

when i=4  sum=8
  sum = 10 + 5(fifth input)--->15

when i=5  sum=15
  sum = 15 + 6(sixth input)--->21
.
.
.
till i=9
*/
 return 0;
}



//TO FIND ADDITION OF TWO MATRICES
#include<stdio.h>
int main()
{
int matrix1[10][10], matrix2[10][10], sum[10][10];
int rows, cols;

 // Input rows and columns
 printf("Enter number of rows and columns: ");
 scanf("%d %d", &rows, &cols);

 // Input elements of first matrix
 printf("Enter elements of first matrix:\n");
 for (int i = 0; i < rows; i++) 
 {
   for (int j = 0; j < cols; j++) 
    {
       scanf("%d", &matrix1[i][j]);
    }
 }

 // Input elements of second matrix
 printf("Enter elements of second matrix:\n");
 for (int i = 0; i < rows; i++) 
 {
   for (int j = 0; j < cols; j++) 
    {
       scanf("%d", &matrix2[i][j]);
    }
 }

 // Add the matrices
 for (int i = 0; i < rows; i++) 
 {
   for (int j = 0; j < cols; j++) 
   {
       sum[i][j] = matrix1[i][j] + matrix2[i][j];

       printf("%d", sum[i][j]);//result
   }
 
   printf("\n");
 }
 return 0; 
}



//TO FIND TRANSPOSE OF A MATRIX
#include<stdio.h>
int main()
{
//for matrix operations we use 2D array
 int matrix[10][10],transpose[10][10];
 int rows, cols;
 // Input rows and columns
 printf("Enter number of rows and columns: ");
 scanf("%d %d", &rows, &cols);

 // Input matrix elements
 printf("Enter elements of the matrix:\n");
 for (int i = 0; i < rows; i++)
   {
     for (int j = 0; j < cols; j++) 
     {
        scanf("%d", &matrix[i][j]);
     }
    }
        // Find transpose
        for (int i = 0; i < rows; i++) 
        {
            for (int j = 0; j < cols; j++) 
            {
              transpose[j][i] = matrix[i][j];
            }
        }
        // Print transpose
        printf("Transpose of the matrix:\n");
        for (int i = 0; i < cols; i++)
         {
           for (int j = 0; j < rows; j++) 
           {
              printf("%d\t", transpose[i][j]);
            }
         printf("\n");//switch to new line after printing 3 elements
        }

}



//TO SORT AN ARRAY IN ASCENDING ORDER
#include<stdio.h>
int main()
{
  int a[20],i,j,n,temp;

  printf("hfgf");
  scanf("%d",&n);

  printf("jhrhg");
  for(i=0;i<n;i++)
   {
     scanf("%d", &a[i]);
   }
//bubble sorting
//*swap two adjacent elememts if element_1 > element_2
  for(j=1;j<n;j++)
   {
     for(i=0;i<n-j;i++)
     {
         if (a[i]>a[i+1])
        {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
     }
   }
   //results
  for(i=0;i<n;i++)
  {
 printf("%d\n",a[i]);
  }
 return 0;
}



//MATRIX MULTIPLICATION
#include <stdio.h>
int main()
{
  int a[10][10], b[10][10], result[10][10];
  int r1, c1, r2, c2;

    // input rows and columns
    printf("Enter rows and columns of first matrix: ");
    scanf("%d%d", &r1, &c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d%d", &r2, &c2);

    // check if multiplication is possible
    if (c1 != r2) {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }

    // input elements of first matrix
    printf("Enter elements of first matrix (%d x %d):\n", r1, c1);
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // input elements of second matrix
    printf("Enter elements of second matrix (%d x %d):\n", r2, c2);
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // initialize result matrix = 0
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }

    // matrix multiplication
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // result
    printf("Resultant matrix (%d x %d):\n", r1, c2);
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}



