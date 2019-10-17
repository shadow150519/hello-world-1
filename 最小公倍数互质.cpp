#include<stdio.h>
int main()   
{ 
   int m, n, a, b, c;
   printf("Input two integer numbers:\n");
   scanf("%d%d", &a, &b);
   m=a;   n=b;
   while(b!=0)  
   { c=a%b; a=b;  b=c;}
   printf("The largest common divisor:%d\n", a);
   printf("The least common multiple:%d\n", m*n/a);
   if (a!=1){
     printf("两数不互质。");}
   else{
     printf("两数互质。");}
}
