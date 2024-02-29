/*
The program must  accept an integer matrix of size RocC as the input. If any cell is 0 in the matrix, the program must replace the entire row and column of the cell with zero. Finally, the program must print the modified matrix as the output. 
Boundary Conditon(s): 2 <=R, C <= 50 0 <= Each integer value <= 1000
 Input Format: The first line contains R and C separated by a space. The next R lines, each containing C integers separated by a space. Output Format: The first R lines, each containing C integers separated by a space. Example
 Input/Output 1: 
Input: 
2 3 
1 0 1
1 1 1 
Output:
0 0 0 
1 0 1 
Explanation: In the given 2x3 matrix, the 0 is present in the first row and second column. So the entire first row and the entire second column are replaced with zero. Now, the matrix becomes
 0 0 0
 1 0 1
Input/output 2:
Input:
3 4
3 8 3 8
0 5 7 8
6 0 4 8
Output:
0 0 3 8
0 0 0 0
0 0 0 0
*/


#include<stdio.h>
int main()
{ 
int q,w; 
scanf("%d %d",&q,&w);
int k[q][w],f[q][w];
for(int e=0;e<q;e++){ 
for(int t=0;t<w;t++){ 
scanf("%d",&k[e][t]);
}
for(int e=0;e<q;e++){
for(int t=0;t<w;t++){ 
f[e][t]=k[e] [t];
} 
}
for(int e=0;e<q;e++){
for(int t=0;t<w;t++){
if(f[e][t]==0){ 
for(int e=0;e<q;e++){ 
k[e] [t]=0;
} 
for(int t=0;t<w;t++){ 
k[e] [t]=0
} 
}
}
for(int e=0;e<q;e++){
for(int t=0;t<w;t++){ 
printf("%d ",k[e][t]);
}
printf("/n");
} 
}
