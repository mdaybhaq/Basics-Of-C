//Convert celsius into Farenheit
#include <stdio.h>

float tempConversion(float c);

int main(){
	float celcius;

	printf("Enter temperature in celcius : ");
	scanf("%f", &celcius);

	float f = tempConversion(celcius);

	printf("Farenheit : %f", f);
}



float tempConversion(float c){
	float farenheit1;
	farenheit1 = (9*c/5)+32;
	return farenheit1;
	}
