/*
//program to prompt user for stop and start values in do while loop
Author: Maxwell Gathara 
Reg no:CT101/G/22271/24
Date:05/10/2024
*/
#include<stdio.h>
int main(){
int start;
int stop;
int i;
// prompt user for start values
printf("Enter the start value:");
scanf("%d",&start);
//prompt user to enter stop values
printf("Enter the stop value");
scanf("%d",&stop);
i=start;
//do-while loop part
do{
   printf("i:%d\n",i);
   i++;
   }while(i<=stop);
   return 0;
}
