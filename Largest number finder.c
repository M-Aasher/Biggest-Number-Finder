/*
Program: Biggest Number Finder
Author: Aasher
Description: This program compares three input numbers and displays the largest among them using if–else if–else logic.
Date: 31/10/2025
*/

#include <stdio.h>

int main()
{
int n1, n2, n3;
printf("Enter any 3 numbers:");
scanf("%d%d%d", &n1, &n2, &n3);

if(n1>=n2 && n1>=n3)
printf("The first number %d is the biggest number", n1);

else if(n2>=n1 && n2>=n3)
printf("The second number %d is the biggest number", n2);

else
printf("The third number %d is the biggest number", n3);

return 0;



}
