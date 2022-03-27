#include <iostream>
#include <iomanip>

template< typename T = float >      // Here is where the magic happens.
class Vertex
{
    public:
        Vertex(const T& x, const T& y, const T& z) : _x(x), _y(y), _z(z)
        {
            return ;
        }
        const T&    getX(void) { return(this->_x); }
        const T&    getY(void) { return(this->_y); }
        const T&    getZ(void) { return(this->_z); }
    private:
        Vertex() {}
        const T _x;
        const T _y;
        const T _z;
};

template<typename T>
std::ostream&   operator<<(std::ostream& output, Vertex<T>& vert)
{
    // std::cout.precision(1);
    output << std::setiosflags(std::ios::fixed);
    output << "Vert_float: " << vert.getX() << ", " << vert.getY() << ", " << vert.getZ() << ".";
    return (output);
}

int main(void)
{
    Vertex<>    vert_float(1, 2, 3);     // No type specified, so they'll be treated as floats.
    // std::cout.precision(1);
    std::cout << vert_float << std::endl;

    // Vertex<int> vert_int(1, 2, 3);     // Same input but the type was specified.
    // std::cout.precision(1);
    // std::cout << vert_int << std::endl;
    return (0);
}