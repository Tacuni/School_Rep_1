#include <iostream>
#include "Rectangle.h"
#include "Square.h"
#include "Circle.h"
#include "EqTriangle.h"
#include "Trapezium.h"
int main()
{
    Rectangle R1("R1", 2.0, 3.0);
    Rectangle R2("R2", 3.0, 4.0);
    Rectangle R3;
    Circle C1("C1",4);
    Circle C2("C2",3);
    EqTriangle E1("E1",7);
    Square S1("S1", 5.0);
    Trapezium T1("T1",4,5,6,7);
    R1.Info();
    std::cout << std::endl;
    R2.Info();
    std::cout << std::endl;
    R3.Info();
    std::cout << std::endl;
    S1.Info();
    std::cout << std::endl;
    C1.Info();
    std::cout << std::endl;
    C2.Info();
    std::cout << std::endl;
    E1.Info();
    std::cout << std::endl;
    T1.Info();
    std::cout << std::endl;

//    std::cout << "Wykorzystanie wskaźnika" << std::endl;
//    Figure* pointer_s = &S1;
//    Figure* pointer_r = &R1;
//    std::cout << std::endl;
//    pointer_s->Info();
//    std::cout << std::endl;
//    pointer_r->Info();
//
//    std::cout << "Wykorzystanie referencji" << std::endl;
//    Figure& ref_s = S1;
//    Figure& ref_r = R1;
//    std::cout << std::endl;
//    ref_s.Info();
//    std::cout << std::endl;
//    ref_r.Info();

}