//
// Created by Student on 09.06.2025.
//

#ifndef NADKLASY_TRAPEZIUM_H
#define NADKLASY_TRAPEZIUM_H

#include "Figure.h"

class Trapezium : public Figure
        {

        private:
        float m_a;
        float m_b;
        float m_c;
        float m_h;
        float m_area;
        float m_perimeter;

        public:
        Trapezium(string name = "", float a = 0,float b = 0,float c = 0,float h = 0);
        virtual ~Trapezium() {}
        virtual float Area() const;
        virtual float Perimeter() const;
        virtual void Info() const;
    };



#endif //NADKLASY_TRAPEZIUM_H
