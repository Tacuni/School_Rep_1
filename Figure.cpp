//
// Created by Student on 09.06.2025.
//

#include "Figure.h"

Figure::Figure(string name)
{
    m_name = name;
}

string Figure::Name() const
{
    return m_name;
}