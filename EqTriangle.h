//
// Created by Student on 09.06.2025.
//

#ifndef NADKLASY_EQTRIANGLE_H
#define NADKLASY_EQTRIANGLE_H

#include "Figure.h"

class EqTriangle : public Figure
{
private:
    float m_a;
    float m_area;
    float m_perimeter;

public:
    EqTriangle(string name = "", float a = 0);
    virtual ~EqTriangle() {}
    virtual float Area() const;
    virtual float Perimeter() const;
    virtual void Info() const;
};



#endif //NADKLASY_EQTRIANGLE_H
