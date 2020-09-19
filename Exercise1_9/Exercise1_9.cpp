// Exercise1_9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>

int main()
{
    int input, crossSum =0;
    

    printf("Please input an integer: \n");
    scanf_s("%d", &input);

    while (input != 0)
    {
        crossSum = crossSum + input % 10;
        input = input / 10;
    }
    printf("%d", crossSum);

    //Referenced to: https://stackoverflow.com/questions/57875914/cross-sum-calculation-can-anyone-explain-the-code-please
}
