
#include <iostream>

template<typename T>
class Array
{
    public:
        Array( void );
        Array(int n);
        Array(Array &obj);
        Array & operator=(Array const &obj);
        T & operator[](int);
        int size( void );
        class IndexOutOfBoundsException : public IndexOutOfBoundsException
        {
            public:
                
        }
};