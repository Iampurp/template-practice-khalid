#ifndef COORDS_H_INCLUDED
#define COORDS_H_INCLUDED

template <class T>
class Coords
{
public:
    T x;
    T y;

    Coords();

    Coords(T x,T y);

    float distanceFromPoint(Coords other);

};
#endif // COORDS_H_INCLUDED
