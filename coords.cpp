#include "coords.h"
#include <math.h>

template <class T>
Coords<T>::Coords()
{
    x = 0;
    y = 0;
}
template <class T>
Coords<T>::Coords(T x, T y)
{
    this->x = x;
    this->y = y;
}

template <class T>
float Coords<T>::distanceFromPoint(Coords<T> other)
{
    float run = other.x - this->x;
    float rise = other.y - this->x;
    run = pow(run,2);
    rise = pow(rise,2);
    float distance = sqrt(run + rise);
    return distance;
    //return sqrt( (this->x - other.x)*(this->x - other.x) + ((this->x - other.x)*(this->x - other.x)));
}
