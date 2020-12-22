#include<stdio.h>
int main() {
	float a;
	float tax=0;
	printf("Income Tax Calculator\n");
	printf("Enter Your Total Yearly Income in INR\n");
	scanf("%f", &a);
	if(a<250000){
		
		printf("No Taxes Applicable.\n");
	}
	if(a>=250000 && a<500000){
		tax=0.05*(a-250000);
		printf("Your Total Tax is %f", tax);
	}
	if(a>=500000 && a<=1000000){
		tax=0.20*(a-500000)+12500;
		printf("Your Total Tax is %f", tax);
	}
	if(a>1000000){
		tax=0.30*(a-1000000)+100000+12500;
		 printf("Your Total Tax is %f", tax);
		}
		return 0;
}
