/*
Syntax:
 struct structure_name
 {
  data_type member_1
  data_type member_2
  data_type member_3
  . 
  .
  .
  data_type member_n
 };

*/


//TO ACCEPT & DISPLAY INFORMATION OF 5 STUDENTS
#include <stdio.h>
//structure block
struct student 
{
char name[50];
int roll_no;
float per;
};
//main program
int main()
{
 int i;
 struct student s[5];
 
 printf("ENTER DETAILS\n");
 printf("\n");
 
 for(i=0;i<5;i++)
 {
    printf("Enter information of student %d:\n",i+1);

    printf("Enter name: ");
    scanf("%s",s[i].name); 

    printf("Enter roll number: ");
    scanf("%d",&s[i].roll_no);

    printf("Enter marks: ");
    scanf("%f",&s[i].per);
   }

 printf("\nDisplaying Information\n");

 for(i=0;i<5;i++) 
 {
    printf("STUDENT %d\n",i+1);
    printf("Name: %s\n",s[i].name);
    printf("Roll No.: %d\n",s[i].roll_no);
    printf("Marks: %f\n",s[i].per);
  }
  return 0;
}



//NESTED STRUCTURE TO DISPALY INFORMATION OF 10 EMPLOYEES
#include<stdio.h>
struct Address//sub structure block
{
char HouseNo[25];
char City[25];
char PinCode[25];
};
struct Employee//parent structure block
{
int Id;
char Name[25];
float Salary;
char doj[25];
struct Address Add;//used above declared structure
};
//main program
int main() 
{
int i;
struct Employee E[10];

for(i=0;i<10;i++) 
{
printf("Enter details of Employee %d\n",i+1);

printf("Enter Employee Id : ");
scanf("%d",&E[i].Id);

printf("Enter Employee Name : ");
scanf("%s",E[i].Name);

printf("Enter Employee Salary : ");
scanf("%f",&E[i].Salary);

printf("Enter Employee Date of Joining : ");
scanf("%s",E[i].doj);

printf("Enter Employee House No : ");
scanf("%s",&E[i].Add.HouseNo);

printf("Enter Employee City : ");
scanf("%s",&E[i].Add.City);

printf("Enter Employee House No : ");
scanf("%s",&E[i].Add.PinCode);

print("\n");
}

printf("\nDetails of Employees");

for(i=0;i<10;i++) 
{
printf("\n\tEmployee Id : %d",E[i].Id);
printf("\n\tEmployee Name : %s",E[i].Name);
printf("\n\tEmployee Salary : %f",E[i].Salary);
printf("\n\tEmployee DOJ : %s",E[i].doj);
printf("\n\tEmployee House No : %s",E[i].Add.HouseNo);
printf("\n\tEmployee City : %s",E[i].Add.City);
printf("\n\tEmployee House No : %s",E[i].Add.PinCode);
printf("\n");
}
return 0;
}



//TO DISPLAY INFO OF EMPLOYEES HAVING SALARY >50,000
#include<stdio.h>
struct Address
{
char Road[25];
char City[25];
};

struct Employee
{
int Id;
char Name[25];
long Salary;
char doj[25];
struct Address Add;
};
//main program
int main()
{
int i;
struct Employee E[10];
for(i=0;i<10;i++)
{
printf("Enter details of Employee %d\n",i+1);

printf("Enter Employee Id : ");
scanf("%d",&E[i].Id);

printf("Enter Employee Name : ");
scanf("%s",E[i].Name);

printf("Enter Employee Salary : ");
scanf("%ld",&E[i].Salary);

printf("Enter Employee Date of Joining : ");
scanf("%s",E[i].doj);

printf("Enter name of road near Employee lives: ");
scanf("%s",E[i].Add.Road);

printf("Enter Employee City : ");
scanf("%s",E[i].Add.City);
printf("\n");
}
printf("Details of Employees\n");

for(i=0;i<10;i++) 
{
  if(E[i].Salary>50000)
  {
    printf("Employee Id : %d\n",E[i].Id);
    printf("Employee Name : %s\n",E[i].Name);
    printf("Employee Salary : %ld\n",E[i].Salary);
    printf("Employee DOJ : %s\n",E[i].doj);
    printf("Employee Address Road: %s\n",E[i].Add.Road);
    printf("Employee City : %s\n",E[i].Add.City);
    printf("\n");
  }
}
 return 0;
}