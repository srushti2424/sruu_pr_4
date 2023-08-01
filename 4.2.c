#include<stdio.h>

void main(){
  

   int n, r, c, a=11;

   printf("Enter number of rows: ");
   scanf("%d", &n);

   for(r=11; r<=n; r++)
   {
     for(c=1; c<=r; c++) 
     printf("%d",a++);

     printf("\n");
   }

   
	
}
