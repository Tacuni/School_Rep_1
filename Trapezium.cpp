//
// Created by Student on 09.06.2025.
//

#include "Trapezium.h"


Trapezium::Trapezium(string name, float a, float b, float c, float h) : Figure(name)
{
    m_a = a;
    m_b = b;
    m_c = c;
    m_h = h;
    m_area = (m_a + m_b)*h/2;
    m_perimeter = m_a + m_b + m_c*2;
}

float Trapezium::Area() const
{
    return m_area;
}

float Trapezium::Perimeter() const
{
    return m_perimeter;
}

void Trapezium::Info() const
{
    cout << "Isosceles trapezium: " << Name() << endl;
    cout << "Dimension: " << m_a << " x " << m_b << " x " << m_c << " x " << m_h << endl;
    cout << "Area: " << m_area << endl;
    cout << "Perimeter: " << m_perimeter << endl;
}