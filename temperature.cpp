#include <stdio.h>
#define farenheit 1.8
#define celcius 0.5
main(){
	char fa = 102,ce = 99, t;
	float temp,f,c = celcius*temp-32;
	printf("Choose a temperature Celcius(c), farenheit(f): ");
	scanf(" %c", &t);
	if(t == ce){
	printf("Enter temperature in celcius: ");
	scanf(" %f", &temp);
	f= farenheit*temp+32;
	printf("The temperature in farenheit is %.2f", f);
	}else{
		printf("Enter temperature in farenheit: ");
	scanf(" %f", &temp);
	printf("The temparature in celcius is %.2f", c);
	}
}
