#include <iostream>
#include "conjunto.h"

Conjunto::Conjunto() {
    tam = 0;
    tamMax = 100;
    dados = new int[tamMax];
}
Conjunto::~Conjunto() {
    delete[] dados;
}

bool Conjunto::contains(int elem) const { //Verifica se o valor ja esta inserido
    for(int i = 0; i < tam; i++){
        if(dados[i] == elem){
            return true;
        }
    }
    return false;
}

void Conjunto::add(int elem) { // adiciona elemento
    if(contains(elem)){ //nao adiciona repetido
        return;
    }
    if(tam>=tamMax){
        return;
    }
    dados[tam] = elem;
    tam++;
}

void Conjunto::remove(int elem) { // remove elemento apos procurar em todo o conjuto.
    for( int i = 0; i< tam; i++) {
        if(dados[i] == elem){
            for (int j = 0; j < tam-1; j++) {
                dados[j] = dados[j+1];
            }
            tam--;
            return;
        }
    }
}

Conjunto Conjunto::unionSet(const Conjunto& B) { // uniao entre dois conjuntos
    Conjunto resultado;

    for(int i = 0; i< tam; i++){
        resultado.add(dados[i]);
    }
    for(int i = 0; i< B.tam; i++){
        resultado.add(B.dados[i]);
    }

    return resultado;
}

// intersection entre 2 conjuntos
Conjunto Conjunto::intersection(const Conjunto& B) { //como o conjunto B nao eh alterado, passagem por referencia
    Conjunto resultado;
    for(int i = 0;i< tam;i++){
        if(B.contains(dados[i])){
            resultado.add(dados[i]);
        }
    }
    return resultado;
}

void Conjunto::print() {
    for (int i = 0; i < tam; i++){
        std::cout << dados[i] << " "; 
    }
    std::cout << std::endl;
}

int Conjunto::size(){
    return tam;
}
