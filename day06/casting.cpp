#include <iostream>
#include <stdio.h>

/*

char    1
int     4
float   4
double  8

*/

int main()
{
    int i = 10;
    float f = 42.42f;
    double d = 454.541;
    char c = 'c';

    // int x = d;
    // int x = static_cast<int>(d);
    // std::cout << x;


    // int fg = static_cast<int>(f);
    // float fgd = static_cast<float>(fg);

    long long fd = static_cast<long long>(c);
    std::cout << fd;




}