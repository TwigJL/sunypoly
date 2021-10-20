#include <stdio.h>
/*A library in C to be to have inputs and outputs*/
int calc_side1(int m, int n);
int calc_side2(int m, int n);
int hypotenuse(int m, int n);
/*Line 3-5 declares the functions and how to call it main*/
int main(void)
{
    int m, n;
    /*The local variables of m and n is created*/
    printf("Enter two Integers, First integer greater than the Second \n");
    printf("First Integer: ");
    scanf("%i", &m);
    printf("Second Integer: ");
    scanf("%i", &n);
    /*Line 10-14 prints statements of what the user have to do and
takes in user inputs */
    int Side1 = calc_side1(m, n);
    printf("Side1 is %i\n", Side1);
    int Side2 = calc_side2(m, n);
    printf("Side2 is %i\n", Side2);
    int Hypotenuse = hypotenuse(m, n);
    printf("Hypotenuse is %i\n", Hypotenuse);
    /* Lines 17-22 creates the variables for the function's outputs and prints there results*/
    printf("The Pythagorean Triple for the pair of integers %i and %i is (%i,%i,%i)", m, n, Side1, Side2, Hypotenuse);
    /* Line 24 sums up what the program is intended for and has achieved it by outputing all the results together*/
    return 0;
}
int calc_side1(int m, int n)
{
    int Side1 = m * m - n * n;
    return Side1;
}
/*The function calc_side1 calculates one of the sides by taking in two integers and
processing the formula intended to return as Side1*/
int calc_side2(int m, int n)
{
    int Side2 = 2 * m * n;
    return Side2;
    /*The function calc_side2 calculates one of the sides by taking in two integers and
processing the formula intended to return as Side2*/
}
int hypotenuse(int m, int n)
{
    int hypotenuse = m * m + n * n;
    return hypotenuse;
}
/*The function hypotenuse calculates the hypotenuse by taking in two integers and
processing the formula intended to return as hypotenuse*/
/*Program is created to calculate Pythagorean Triples from two Integer pairs ,
Made by Johnson Li */
