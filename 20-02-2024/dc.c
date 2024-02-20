/*
The program must accept two integers A and T as the input, where A represents the number of days a student has attended the class and Trepresents the total number of days the student must attend the class. The program must print Allowed to exam hall if the student gets more than 75% attendance. Else the program must print Not allowed as the output.
Proceed to Solve the Program
Boundary Condition(s): 2 AT 200
Input Format:
The first line contains A and T separated by a space.
Output Format:
The first line contains Allowed to exam hall or Not allowed.
Example Input/Output 1:
Input:
45 75
Output
Not allowed
Explanation:
The student's attendance is 45 and the total number of days is 75. The percentage of the student's attendance is 60%, which is less than 75% Hence the output is Not allowed
Example Input/Output 2:
Input:
70 75
Output
Allowed to exam hall
*/

#include<stdio.h>
#include<string.h>
int main(){
int a,s,d;
scanf("%d %d",&a,&s);
d=(a*100)/s;
if(d<=75)
  printf("Not allowed");
else
  printf("Allowed to exam hall");
}
