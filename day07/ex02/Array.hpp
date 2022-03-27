
#include <iostream>

template<typename T>
class Array
{
    private:
        T * array;
        int _size;
    public:
        class IndexOutOfBoundsException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

        Array( void );
        ~Array( void );
        Array(int n);
        Array(Array &obj);
        Array & operator=(Array const &obj);
        T & operator[](int);
        int size( void );
};

template<typename T>
const char* Array<T>::IndexOutOfBoundsException::what() const throw()
{
    return ("The index is out of bounds");
}

template<typename T>
Array<T>::Array( void )
{
    this->_size = 0;
    this->array = new T[0];
}

template<typename T>
Array<T>::~Array( void )
{
    delete [] this->array;
}

template<typename T>
Array<T>::Array(int n)
{
    this->_size = n;
    this->array = new T[n];
}

template<typename T>
Array<T>::Array(Array<T> &obj)
{
    *this = obj;
}

template<typename T>
Array<T> & Array<T>::operator=(Array<T> const &obj)
{
    this->_size = obj._size;
    this->array = new T[this->_size];

    for (int i = 0; i < this->_size; i++)
    {
        this->array[i] = obj.array[i];
    }
    return (*this);
}

template<typename T>
T & Array<T>::operator[](int index)
{
    if (index >= size() || index < 0)
        throw (Array<T>::IndexOutOfBoundsException());

    return (this->array[index]);
}

template<typename T>
int Array<T>::size( void )
{
    return (this->_size);
}