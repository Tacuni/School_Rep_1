//
// Created by Student on 09.06.2025.
//

#ifndef NADKLASY_RECTANGLE_H
#define NADKLASY_RECTANGLE_H



#include "Figure.h"

class Rectangle : public Figure
{
private:
    float m_a;
    float m_b;
    float m_area;
    float m_perimeter;

public:
    Rectangle(string name = "", float a = 0, float b = 0);
    virtual ~Rectangle() {}
    virtual float Area() const;
    virtual float Perimeter() const;
    virtual void Info() const;
};



#endif //NADKLASY_RECTANGLE_H
