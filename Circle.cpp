//
// Created by Student on 09.06.2025.
//

#include "Circle.h"



Circle::Circle(std::string name, float r) : Figure(name)
{
    m_r = r;
}

float Circle::Area() const
{
    return m_r*M_PI*M_PI;
}

float Circle::Perimeter() const
{
    return m_r*2*M_PI;
}

void Circle::Info() const
{
    cout << "Circle: " << Name() << endl;
    cout << "Dimension: " << m_r << endl;
    cout << "Area: " << Circle::Area() << endl;
    cout << "Perimeter: " << Circle::Perimeter() << endl;
}