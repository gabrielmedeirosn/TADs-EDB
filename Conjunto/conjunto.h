#ifndef CONJUNTO_H
#define CONJUNTO_H
#include <iostream>

class Conjunto{
private:
    int* dados;
    int tam;
    int tamMax = 100;

public:
    Conjunto();
    ~Conjunto();
    
    void add(int elem);
    void remove(int elem);
    bool contains(int elem) const;
    Conjunto unionSet (const Conjunto& B);
    Conjunto intersection (const Conjunto& B);
    void print();
    int size();

};


#endif
