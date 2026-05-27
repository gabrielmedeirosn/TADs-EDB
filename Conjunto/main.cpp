#include <iostream>
#include "conjunto.h"
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){


    srand(time(NULL));
    Conjunto conjuntoA;
    Conjunto conjuntoB;

    int sizeArrayA;
    cout << "Quantidade de elementos do arrayA(maximo 49): ";
    cin >> sizeArrayA;
    if(true){
        while(sizeArrayA>49){
            cout << "saida invalida, inserir novo valor: ";
            cin >> sizeArrayA;
        }
    }
    
    int sizeArrayB;
    cout << "Quantidade de elementos do arrayB(maximo49): ";
    cin >> sizeArrayB;
    if(true){
        while(sizeArrayB>49){
            cout << "saida invalida, inserir novo valor: ";
            cin >> sizeArrayB;
        }
    }
    cout << endl;

    

    for (int i = 0; i<sizeArrayA; i++){
        int randomNum = rand() % 201;
        conjuntoA.add(randomNum);
    }

    for (int i = 0; i<sizeArrayB; i++){
        int randomNum = rand() % 201;
        conjuntoB.add(randomNum);
    }



    //TESTE DE INTERSECTION
    conjuntoA.add(1200);
    conjuntoA.add(2500);
    conjuntoA.add(3000);
    conjuntoB.add(3000);
    conjuntoB.add(2500);
    conjuntoB.add(1200);

    cout << "conjunto A: ";
    conjuntoA.print();
    cout << endl;

    cout << "conjunto B: ";
    conjuntoB.print();
    cout << endl;

    Conjunto inter = conjuntoA.intersection(conjuntoB);
    cout << "inter: ";
    inter.print();

    Conjunto unionOut = conjuntoA.unionSet(conjuntoB);
    cout << "uniao: ";
    unionOut.print();
    return 0;
}