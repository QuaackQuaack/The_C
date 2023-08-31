#include <stdio.h>

#define UPPER  300          /* note define doesn't have semicolon at the end*/
#define LOWER  0            /* also symbolic constant are written in upper case so they can be readily distinguish form variable*/
#define STEP 20

main()
{
    int fahr;

    for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP){
        printf("%3d %6.1f \n",fahr, (5.0/9.0)*(fahr - 32));

    }
}