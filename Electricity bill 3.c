/*
//program for Electricity bill calculation 
Author: Maxwell Gathara 
Reg no:CT101/G/22271/24
Date:05/10/2024
*/
//preprocessor directive 
#include<stdio.h>
int main(){
int ElectricityBill;
int CustomerID;
char CustomerName [50];
int UnitsConsumed;
float chargesPerUnit;
float TotalBill;
float surcharge=0.0;
//input Customer details 
printf("Enter customer ID");
scanf("%d",& CustomerID);
printf("Enter customer Name");
scanf("%s",& CustomerName);
printf("Enter Units Consumed");
scanf("%d",&UnitsConsumed);
//Determine charges per unit based on units Consumed 
if(UnitsConsumed<=199){chargesPerUnit=1.20;
}
else if(UnitsConsumed>=200&& UnitsConsumed<400){chargesPerUnit=1.50;
}
else if(UnitsConsumed>=400 && UnitsConsumed<600){chargesPerUnit=1.80;
}
else{chargesPerUnit=2.00;}
//calculate total bill without surcharge 
TotalBill=UnitsConsumed*chargesPerUnit;
//By applying surcharge when units>400
if(TotalBill>400){surcharge=TotalBill*0.15;
TotalBill+=surcharge;
}
//Minimum bill=100
if(TotalBill<100){TotalBill=100;
}
//Output details 
printf("\nElectricity Bill\n",& ElectricityBill);
printf("\n Customer ID:%d\n",&CustomerID);
printf("\nCustomer Name:%s\n",&CustomerName);
printf("\nUnits Consumed:%d\n",&UnitsConsumed);
printf("charges per unit:ksh%.2f\n",&chargesPerUnit);
printf("Total Amount to pay:ksh%.2f\n",&TotalBill);
return 0;
}