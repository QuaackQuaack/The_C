// same question as Fahrenheit.c but in reverse order 

#include <stdio.h>

main()
{
    float fahr, celsius ; 

    printf("in fahr\t in celsius\n");

    for(fahr = 300.0; fahr >= 0.0; fahr-= 20.0 )
    {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%1.0f\t%6.1f\n",fahr,celsius);
    }
}