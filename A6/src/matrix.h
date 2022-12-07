#ifndef _MATRIX_H_
#define _MATRIX_H_

class Matrix {
    public:
        Matrix(char c);
        Matrix(int z, int s, char c);
        ~Matrix();
        void ausgabe();
    protected:
        int m_zeilen, m_spalten;
        float m_element[2];
        char name;
    

};

#endif /*_MATRIX_H_*/