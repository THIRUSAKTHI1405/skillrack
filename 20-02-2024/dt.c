/*
The program must accept an integer N as the input. The program must print the prime factors of N in ascending order as the output.
Proceed to Solve the Program
Boundary Condition(s): 10 <= N <= 10^5
Input Format: The first line contains N.
Output Format:
The first line contains the prime factors of N in ascending order.
Example Input/Output 1:
Input: 100
Output
2 5
Explanation:
The factors of 100 are 1, 2, 4, 5, 10, 20, 25, 50 and 100 The prime factors of 100 are 2 and 5.
So 2 and 5 are printed as the output.
Example Input/Output 2:
Input
150
Output
2 3 5
  */

#include<stdio.h>
#include<conio.h>
int main(){
  int q,s[1000000],c,v,b=0;
scanf("%d",&q);
for(int e=1;e<=q;e++){
if(q%e==0){
s[b]=e;
b++;
}
}
for(int e=0;e<b;e++){
c=s[e];
v=0;
for(int t=2;t<=c;t++){
if(c%t==0){
v+=1;
}
}
if(v==1)
  printf("%d ",c);
}
}
