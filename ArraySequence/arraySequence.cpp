#include "arraySequence.h"
#include <iostream>

arraySequence::arraySequence(){
    tam = 0;
    tamMax = 100;
    dados = new int[tamMax];
}

arraySequence::~arraySequence(){
    delete[] dados;
}


void arraySequence::pushBack(int elem){
    if(tam >=tamMax){
        return;
    }
    dados[tam] = elem;
    tam++;
}

void arraySequence::pushFront(int elem){
    if(tam >=tamMax){
        return;
    }
    for(int i = tam; i > 0; i--){ //move todos os elementos para direita e adiciona o nova na posicao 0
        dados[i] = dados[i-1];
    }
    dados[0] = elem;
    tam++;
}

void arraySequence::insert(int pos, int elem){
     if (pos<0 or pos>tam){
        return;
    } // verifica se a posicao eh valida
    if(tam >= tamMax){
        return;
    } //verifica se atingiu o tam max

    for (int i = tam; i > pos; i--) {
        dados[i] = dados[i - 1];
    } //copia o valor para direita e adiciona o novo elemento
    dados[pos] = elem;
    tam++;
}

void arraySequence::remove(int pos){
    if (pos<0 or pos>=tam){
        return;
    } // verifica se a posicao eh valida
    for (int i = pos; i < tam - 1; i++){
        dados[i] = dados[i+1];
    }
    tam--;
}

int arraySequence::find(int elem){ //retorna a posicao do elemento desejado
    for (int i = 0; i < tam; i++){
        if (dados[i] == elem){
            return i;
        }
    }
    return -1;
}

int arraySequence::size(){
    return tam;
}

void arraySequence::print(){
    for (int i = 0; i < tam; i++){
        std::cout << dados[i] << " "; 
    }
    std::cout << std::endl;
}
