//Assignment 3 Sol 1//
/*
#include<stdio.h>
int main()
{
int x;
printf("Enter a number");
scanf("%d",&x);
if(x>0)
{
printf("positive number");
}
if(x<=0)
{
printf("Non positive");
}
return 0;
}
*/

//Sol 2//
/*
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    if(a%5)
    printf("%d is not divisible by 5",a);
    else
    printf("%d is divisible by 5",a);
    return 0;
}
*/

//Sol 3//
/*
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    if(a%2)
    printf("%d is odd",a);
    else
    printf("%d is even",a);
    return 0;
}
*/

//Sol 4//
/*

#include <stdio.h>
int main()
{
    int number;

    printf("Enter a number to check even or odd");
    scanf("%d", &number);

    if((number & 1)==0)
          printf("%d is even.", number);
    else
        printf("%d is odd.", number);


    return 0;

}
*/

//Sol 5//
/*
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a three digit number");
    scanf("%d",&n);
    printf("%d",n/100+n/10%10+n%10);
    return 0;
}
*/

//Sol 6//
/*
#include<stdio.h>

int main ()
{
  int num1, num2;
  num1=12,num2=13;

  if (num1 == num2)
    printf("both are equal");
  else if (num1 > num2)
    printf("%d is greater", num1);
  else
    printf("%d is greater", num2);

  return 0;
}
*/

//Sol 7//
/*
#include <math.h>
#include <stdio.h>
int main() {
    double a, b, c, discriminant, root1, root2, realPart, imagPart;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    // condition for real and different roots
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
    }

    // condition for real and equal roots
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf;", root1);
    }

    // if roots are not real
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }

    return 0;
}
*/

//Sol 8//
/*
#include <stdio.h>
int main() {
   int year;
   printf("Enter a year: ");
   scanf("%d", &year);

   // leap year if perfectly divisible by 400
   if (year % 400 == 0) {
      printf("%d is a leap year.", year);
   }
   // not a leap year if divisible by 100
   // but not divisible by 400
   else if (year % 100 == 0) {
      printf("%d is not a leap year.", year);
   }
   // leap year if not divisible by 100
   // but divisible by 4
   else if (year % 4 == 0) {
      printf("%d is a leap year.", year);
   }
   // all other years are not leap years
   else {
      printf("%d is not a leap year.", year);
   }

   return 0;
}
*/

//Sol 9//
/*
#include <stdio.h>

int main() {

  double n1, n2, n3;

  printf("Enter three different numbers: ");
  scanf("%lf %lf %lf", &n1, &n2, &n3);

  // if n1 is greater than both n2 and n3, n1 is the largest
  if (n1 >= n2 && n1 >= n3)
    printf("%.2f is the largest number.", n1);

  // if n2 is greater than both n1 and n3, n2 is the largest
  if (n2 >= n1 && n2 >= n3)
    printf("%.2f is the largest number.", n2);

  // if n3 is greater than both n1 and n2, n3 is the largest
  if (n3 >= n1 && n3 >= n2)
    printf("%.2f is the largest number.", n3);

  return 0;
}
*/

//Sol 10//
/*

int main() {
    int costPrice, sellingPrice;
    printf("Enter Cost Price and Selling Price\n");
    scanf("%d %d", &costPrice, &sellingPrice);

    if(costPrice > sellingPrice) {

        printf("Loss = %d\n", costPrice - sellingPrice);
    } else if(sellingPrice > costPrice) {

        printf("Profit = %d\n", sellingPrice - costPrice);
    } else {

        printf("No Profit and No Loss\n");
    }

    return 0;
}
*/

//Sol 11//
/*
#include<stdio.h>
int main()
{
     int m1, m2, m3, m4, m5, tot;
     float per;
     printf("Enter Marks of Five Subjects:\n");
     scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
     tot = m1+m2+m3+m4+m5;
     printf("\nTotal Marks of Student = %d\n",tot);

     if(m1>=33 && m2>=33 && m3>=33 && m4>=33 && m5>=33)
     {
          printf("\nStudent is PASS\n");
          per= tot/5.0;
          printf("\nPercentage of a Student = %.2f",per);
     }
     else
          printf("\nStudent is FAIL");
     return 0;
}
*/

//Sol 12//
/*
#include<stdio.h>

int main() {
   char ch;

   printf("\nEnter The Character : ");
   scanf("%c", &ch);

   if (ch >= 'A' && ch <= 'Z')
      printf("Character is Upper Case Letters");
   else
      printf("Character is Lower Case Letters");

   return (0);
}
*/

//Sol 13//
/*
#include <stdio.h>
int main(void)
{
int i;
for(i = 1; i <= 100; i++)
{
// Condition to check division of 3 and 7
if((i%3) == 0 && (i%2)==0)
{
printf("%d\n", i);
}
}
return 0;
}
*/

//Sol 14//
/*
#include <stdio.h>
int main(void)
{
int i;
for(i = 1; i <= 100; i++)
{
// Condition to check division of 3 and 7
if((i%3) == 0 && (i%7)==0)
{
printf("%d\n", i);
}
}
return 0;
}
*/

//Sol 15//
/*
#include <stdio.h>
int main() {
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    if (num <= 0.0) {
        if (num == 0.0)
            printf("You entered 0.");
        else
            printf("You entered a negative number.");
    }
    else
        printf("You entered a positive number.");
    return 0;
}
*/

//Sol 16//
/*

#include <stdio.h>

int main()
{
    char ch;


    printf("Enter any character: ");
    scanf("%c", &ch);



    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("'%c' is alphabet.", ch);
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("'%c' is digit.", ch);
    }
    else
    {
        printf("'%c' is special character.", ch);
    }

    return 0;
}
*/

//Sol 17//
/*
#include <stdio.h>

int main() {
    int side1, side2, side3;
    printf("Enter Length of Three Sides of a Triangle\n");
    scanf("%d %d %d", &side1, &side2, &side3);

    if((side1 + side2 > side3)&&(side2 + side3 > side1)
            &&(side3 + side1 > side2)) {
        printf("It is a Valid Triangle\n");
    } else {
        printf("It is an invalid Triangle");
    }

    return 0;
}
*/

//Sol 18//
#include <stdio.h>

int main()
{
    int month;

    /* Input month number from user */
    printf("Enter month number (1-12): ");
    scanf("%d", &month);


    if(month == 1)
    {
        printf("31 days");
    }
    else if(month == 2)
    {
        printf("28 or 29 days");
    }
    else if(month == 3)
    {
        printf("31 days");
    }
    else if(month == 4)
    {
        printf("30 days");
    }
    else if(month == 5)
    {
        printf("31 days");
    }
    else if(month == 6)
    {
        printf("30 days");
    }
    else if(month == 7)
    {
        printf("31 days");
    }
    else if(month == 8)
    {
        printf("31 days");
    }
    else if(month == 9)
    {
        printf("30 days");
    }
    else if(month == 10)
    {
        printf("31 days");
    }
    else if(month == 11)
    {
        printf("30 days");
    }
    else if(month == 12)
    {
        printf("31 days");
    }
    else
    {
        printf("Invalid input! Please enter month number between (1-12).");
    }
    return 0;
}





