#include<stdio.h>
int main() {
	float a;
	printf("Income Tax Calculator\n");
	printf("Enter Your Total Yearly Income in INR\n");
	scanf("%f", &a);
	if(a<250000){
		printf("No Taxes Applicable.\n");
	}
	else if(a>=250000 && a<500000){
		printf("Your Total Tax is %f", a*5/100);
	}
	else if(a>=500000 && a<1000000){
		printf("Your Total Tax is %f",a*20/100);
	}
	else { printf("Your Total Tax is %f", a*30/100);
		}
		return 0;
}