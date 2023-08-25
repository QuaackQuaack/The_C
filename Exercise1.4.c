#include<stdio.h>
// program to convert Celsius to Fahrenheit
main(){

    float fahr, celsius;
    float upper, lower, step;

    lower = -17.8;
    upper = 148.9;
    step = 11.1;

    printf("In Fahr\t In Celsius\n");

    while(lower <= upper)
    {
        celsius = lower;
        fahr = (celsius * (9.0/5.0)) + 32.0;
        lower += 11.1;
        printf("%3.1f \t %6.1f\n",celsius, fahr);
        
    }
    
    

}
// program is completed but the result in not precise by 0.1 