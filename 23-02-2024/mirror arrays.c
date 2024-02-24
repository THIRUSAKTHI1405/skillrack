/*
input
4
10 20 30 40
04 30 20 10
output
1
input
7
12 13 14 15 16 17
17 16 15 18 13 19
output 0

the reversing two array must be in the same format
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
