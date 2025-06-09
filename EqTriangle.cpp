//
// Created by Student on 09.06.2025.
//

#include "EqTriangle.h"

EqTriangle::EqTriangle(string name, float a) : Figure(name)
{
    m_a = a;
    m_area = m_a * m_a * sqrt(3)/4;
    m_perimeter = 3 * m_a;
}

float EqTriangle::Area() const
{
    return m_area;
}

float EqTriangle::Perimeter() const
{
    return m_perimeter;
}

void EqTriangle::Info() const
{
    cout << "Equilateral triangle: " << Name() << endl;
    cout << "Dimension: " << m_a << endl;
    cout << "Area: " << m_area << endl;
    cout << "Perimeter: " << m_perimeter << endl;
}