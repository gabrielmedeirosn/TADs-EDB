#include "sequencia.h"
#include <iostream> 

Sequencia::Sequencia() {
    tam = 0;
    tamMax = 100;
    dados = new int[tamMax];
}

Sequencia::~Sequencia(){
    delete[] dados;
}

void Sequencia::insert(int pos, int num) {
    if (pos<0 or pos>tam){
        return;
    } // verifica se a posicao eh valida
    if(tam >= tamMax){
        return;
    } //verifica se atingiu o tam max

    for (int i = tam; i > pos; i--) {
        dados[i] = dados[i - 1];
    } //copia o valor para direita e adiciona o novo elemento
    dados[pos] = num;
    tam++;
}

void Sequencia::remove(int pos) {
    if (pos<0 or pos>=tam){
        return;
    } // verifica se a posicao eh valida
    for (int i = pos; i < tam - 1; i++){
        dados[i] = dados[i+1];
    }
    tam--;
}

int Sequencia::get(int pos){
    return dados[pos];
}

void Sequencia::print(){
    for (int i = 0; i< tam; i++){
        std::cout << dados[i] << " ";
    }
    std::cout << std::endl;
}

int Sequencia::size(){
   return tam;
}
