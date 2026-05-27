#ifndef SEQUENCIA_H
#define SEQUENCIA_H
#include <iostream>

class Sequencia{

private:
    int* dados;
    int tam;
    int tamMax = 100;

public:
    Sequencia();
    ~Sequencia();

    void insert(int pos, int elem);
    void remove(int pos);
    int get(int pos);
    void print();
    int size();


};


#endif