#include <iostream>

template<typename T>
void ft_print(T & c)
{
    std::cout << c << std::endl;
}


template<typename T>
void iter(T *ar, int length, void (f)(T &))
{
    for (int i = 0; i < length; i++)
    {
        f(ar[i]);
    }
}


int main()
{

    int int_arr[4] = {1,2,3,4};
    iter(int_arr, 4, ft_print);

    std::cout << "=================" << std::endl;

    double double_arr[5] = {1.5,2.42,3.21,4.13,5.37};
    iter(double_arr, 5, ft_print);

    std::cout << "=================" << std::endl;

    char char_arr[7] = "abcdef";
    iter(char_arr, 6, ft_print);

    return 0;
}