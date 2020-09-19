// exercise1_8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <math.h>
#include "exercise1_8.h"
int main()
{
    int input, closest, root =0;
    int quadratics[9999];
    double closedouble =0 ;



    input = 0;
    printf("Input a number: \n");
    scanf_s("%d", &input);

    if (input > 0)
    {
        
            root = round(sqrt(double(input)));
            closest = root * root;
            printf("%d is the closest number to %d with a integer root of %d", closest, input, root);
        

    }
    else
        printf("Input is zero or negative.");
    return 0;
}