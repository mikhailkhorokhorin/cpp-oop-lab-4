#pragma once
#include "../include/point.h"

template <Scalar T>
Point<T>::Point() : x(0), y(0) {
}

template <Scalar T>
Point<T>::Point(T x_, T y_) : x(x_), y(y_) {
}

template <Scalar T>
bool Point<T>::operator==(const Point& other) const {
    return x == other.x && y == other.y;
}
