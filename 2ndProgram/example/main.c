#include <stdio.h>
#include <stdlib.h>

int main()
{
    int myInt=42;
    int* myPoint= &myInt;
    // &myInt = myPoint
    // myInt = *myPoint
    // *myInt = ???
    // &myPoint = ???
    // myPoint = &myInt
    // *myPoint = myInt
    return 0;
}
