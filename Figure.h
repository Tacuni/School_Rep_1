//
// Created by Student on 09.06.2025.
//

#ifndef NADKLASY_FIGURE_H
#define NADKLASY_FIGURE_H

#include <string>
#include <iostream>
#include <cmath>

using std::string;
using std::cout;
using std::endl;

class Figure
{
private:
    string m_name;
protected:
    string Name() const;
public:
    Figure(string name = "");
    virtual ~Figure() {}
    virtual float Area() const = 0;
    virtual float Perimeter() const = 0;
    virtual void Info() const = 0;
};

#endif //NADKLASY_FIGURE_H
