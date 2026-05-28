#include <iostream>
#include "arraySequence.h"
#include <cstdlib>
#include <ctime> 

using namespace std;

int main(){

    srand(time(NULL));
    arraySequence array;

    int sizeArray;
    cout << "Quantidade de elementos do arrayA(minimo 5, maximo 99): ";
    cin >> sizeArray;
    if(true){
        while(sizeArray>100 and sizeArray<5){
            cout << "entrada invalida, inserir novo valor: ";
            cin >> sizeArray;
        }
    }

    cout << "array original: ";
    for (int i = 0; i<sizeArray; i++){
        int randomNum = rand() % 201;
        array.pushBack(randomNum);
    }
    array.print();
    cout << endl;

    cout << "Testando pushFront com os valores 400 e 300" << endl << endl;
    array.pushFront(300);
    array.pushFront(400);
    array.print();

    cout << endl << "Testando insert com o valor 500, posicao 3" << endl << endl;

    array.insert(3,500);
    array.print();
    
    cout << "testando find: " << endl;
    cout << "500 encontrado na posicao: "<<array.find(500) << endl;
    cout << "testando remove do valor 500: " << endl;
    array.remove(500);
    array.print();

    cout << "tamanho final do array: " << array.size();

    return 0;
}