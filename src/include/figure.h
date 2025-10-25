#pragma once
#include <memory>

#include "point.h"

template <Scalar T>
class Figure {
   protected:
    std::unique_ptr<Point<T>[]> points_;
    std::size_t size_ = 0;

    virtual double getArea() const = 0;

   public:
    Figure();
    virtual ~Figure();

    virtual operator double() const;

    std::size_t getSize() const;
    const Point<T>* getPoints() const;

    virtual Point<T> getCenter() const = 0;
    virtual void print(std::ostream& os) const = 0;
    virtual void read(std::istream& is) = 0;
    
    virtual bool operator==(const Figure<T>& other) const = 0;
    virtual std::unique_ptr<Figure<T>> clone() const = 0;
};
