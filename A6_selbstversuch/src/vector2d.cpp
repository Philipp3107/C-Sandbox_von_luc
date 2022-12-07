#include <iostream>
#include "vector2d.h"
#include "vector.h"
#include "matrix.h"

using namespace std;

vector2d::vector2d() {
    m_element[0] = 0;
    m_element[1] = 0;
}


vector2d::vector2d(int a, int b) {
    m_element[0] = a;
    m_element[1] = b;
}

void vector2d::addiere(vector2d v2d) {
    cout << " addieren\n";
    m_element[0] += v2d.m_element[0];
    m_element[1] += v2d.m_element[1];
}