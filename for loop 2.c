/*
program to prompt user to enter start and stop values in for loop
Author: Maxwell Gathara 
Reg no:CT101/G/22271/24
Date:05/10/2024
*/
//preprocessor directive 
#include<stdio.h>
int main(){
int start,stop;
//prompt user to start
printf("Enter start value:");
scanf("%d",&start);
//prompt user to enter stop values 
printf("Enter stop value:");
scanf("%d",&stop);
//The for loop part
for(int i=start;i<=stop;i++){
printf("i:%d\n", i);
}
return 0;
}