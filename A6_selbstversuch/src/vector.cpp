#include <iostream>
#include <math.h>
#include "vector.h"
#include "matrix.h"

using namespace std;

double vector::betrag(){
    return sqrt(pow(m_element[0], 2) + pow(m_element[1],2));
}
//double vector::betrag(){
    //return sprt(pow())
//}