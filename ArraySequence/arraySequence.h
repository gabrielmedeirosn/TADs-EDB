#ifndef ARRAYSEQUENCE_H
#define ARRAYSEQUENCE_H
#include <iostream>

class arraySequence{

private:
    int *dados;
    int tam;
    int tamMax;

public:
    arraySequence();
    ~arraySequence();
    void pushBack(int elem);
    void pushFront(int elem);
    void insert(int pos, int elem);
    void remove(int pos);
    int find(int elem);
    int size();
    void print();
};

#endif