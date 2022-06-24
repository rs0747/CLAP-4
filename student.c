#include <stdio.h>
#include<string.h>
struct student 
{
 char fname[50];
 int roll;
 float marks;
};
int main() 
{
 struct student st;
 printf("Enter the details of the student:");
 printf("\nEnter roll number:"); 
 scanf("%d", &st.roll);
 printf("Enter first name:"); 
 scanf("%s",&st.fname);
 printf("Enter marks obtained out of 100:"); 
 scanf("%f\n", &st.marks);
 printf("\nPrinting the details of the student:\n");
 printf("Name: %s\n",st.fname);
 printf("Roll Number: %d\n",st.roll);
 printf("Marks obtaned: %0.1f",st.marks);
 return 0;
}
