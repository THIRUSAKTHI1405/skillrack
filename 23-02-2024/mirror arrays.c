/*
The program must accept three integers X, Y and K as the input. The program must print the count of integers from X to Y which contains the integer K as a subset. Boundary Condition(s): 1 <= X< Y <= 10^8 1 <= K <= Y Input Format: The first line contains X, Y and K separated by a space. Output Format: The first line contains the count of integers from X to Y which contains the integer K as a subset. Example Input/Output 1:
 Input: 100 300 25
 Output 12
 Explanation: There are 12 integers from 100 to 300 which contains the integer 25 as a subset 125 25 250 251 252 253 254 255 256 257 258 259 Example Input/Output 2:
 Input: 4987 8959 510
 Output 14
*/

#include<stdio.h>  
#include<stdlib.h>
int main()  { 
int f,k[1000],p[1000],o=0,i; 
 scanf("%d",&f); 
 i=f; 
 for (int t=0;t<f;t++){ 
 scanf("%d ",&k[t]); 
} 
for (int t=0;t<f;t++){ 
 scanf("%d ",&p[t]); 
} 
for (int t=0;t<f;t++){ 
 i--; 
if(k[t]==p[i]){
 o+=1; 
} 
}
 if(o==f)
   printf("1");
  else
   printf("0");
}
