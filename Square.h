//
// Created by Student on 09.06.2025.
//

#ifndef NADKLASY_SQUARE_H
#define NADKLASY_SQUARE_H

#include "Figure.h"

class Square : public Figure
{
private:
    float m_a;
    float m_area;
    float m_perimeter;

public:
    Square(string name = "", float a = 0);
    virtual ~Square() {}
    virtual float Area() const;
    virtual float Perimeter() const;
    virtual void Info() const;
};


#endif //NADKLASY_SQUARE_H
