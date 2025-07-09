//TO REVERSE A STRING 
#include<stdio.h>
#include<string.h>
int main()
{
    /*
    note:
    we can also use strrev() function available 
    in string.h header file 
    */
    char str_1[20];
    printf("Enter String:");
    scanf("%s", str_1);
    printf("%s\n\n", strrev(str_1));

    // without using function
    char str[20],temp;
    int i,length=0;

    printf("Enter String:");
    scanf("%s", str);

    //to find length of string//
    while(str[length] != '\0')
    {
      length ++;
    }
    //swapping extreme elements
    for(i=0;i<length/2;i++)
    {
        temp=str[i];
        str[i]=str[length-1-i];
        str[length-1-i]=temp;
    }
    printf("%s",str);//result

    return 0;
}



//TO CHECK WHETHER THE STRING IS PALINDROME OR NOT
#include <stdio.h>
int main() 
{
  char str[100];
  int i, length = 0, flag = 1;

  printf("Enter a string: ");
  scanf("%s", str);

  while (str[length] != '\0') 
  {
    length++;
  }

    // Check palindrome
    for (i = 0; i < length/2; i++) {
        if (str[i] != str[length - i - 1]) {
            flag = 0;
            break;
        }
    }
    //results
    if (flag == 1) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}



//TO CHECK WHETHER THE STRING IS PALINDROME OR NOT USING <string.h>
#include <stdio.h>
#include <string.h>
int main() {
    char str[100], rev[100];

    printf("Enter a string: ");
    scanf("%s", str); 
    
    strcpy(rev, str); // Copy original string
    strrev(rev);  // Reverse the copied string

    if (strcmp(str, rev) == 0) 
    {
        printf("The string is a palindrome.\n");
    } 
    else 
    {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}



//TO PRINT NUMBER OF DIGITS, ALPHABETS AND SPECIAL CHARACTERS IN A ATRING
#include<stdio.h>
int main()
{
char str[20];
int i=0,num=0,alpha=0,sc=0;

printf("ENTER A STRING:");
scanf("%s", str);

while(str[i]!= '\0')
{
if(str[i]>='0'&& str[i]<='9')
 {
   num ++;
 }
   else if ((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
    {
      alpha ++;
    }
      else 
      {
        sc ++;
       }
    i+=1;
   } 
    printf("DIGITS: %d\n", num);
    printf("ALPHABETS: %d\n", alpha);
    printf("SPECIAL CHARACTERS: %d\n", Sc);
return 0;
}



//STRING CONCATENATION
String Concatenation:
#include <stdio.h>
#include <string.h>
void main() 
{
char s1[100], s2[100], i, j;

printf("Enter first string: ");
gets(s1);

printf("Enter second string: ");
gets(s2);

i=strlen(s1);
for(j=0; s2[j]!='\0'; j++, i++)
s1[i]=s2[j];
s1[i]='\0';
printf("After concatenation:");
puts(s1);

//method 2
char str1[]='hello',str2[]='world',res[];
strcpy(res,str1);
//strcat(res,' ');//use this if you want space
strcat(res,str2);
printf("%s",res);

return 0;
}