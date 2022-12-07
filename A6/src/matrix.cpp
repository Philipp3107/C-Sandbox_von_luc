#include <iostream>
#include "matrix.h"

using namespace std;

Matrix::Matrix(char c)  : m_zeilen(1), m_spalten(2), name(c)
{
    for (int zeile = 0; zeile <= m_zeilen; zeile++) {
        m_element[zeile] = 0;
    }
}

Matrix::Matrix(int z, int s, char c) : m_zeilen(z), m_spalten(s), name(c)
{
}

Matrix::~Matrix() {
    cout << "Matrix " << Matrix::name ;
    Matrix::ausgabe();
    cout <<" wird zerstört" << endl;
    // std::cout << "Ich bin ein dekonstruktor" << std::endl;
}


void Matrix::ausgabe() {
    cout << " ( ";
    for (int zeile = 0; zeile <= m_zeilen; zeile++) {
        cout << m_element[zeile] << " ";    
    }
    cout << ")";
}