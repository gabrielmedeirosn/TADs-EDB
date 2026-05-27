#include <iostream>
#include "sequencia.h"
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){

    Sequencia array;
    Sequencia arrayCopy;

    srand(time(NULL));
    
    int sizeArray;
    cout << "Quantidade de elementos do array: ";
    cin >> sizeArray;
    if(true){
        while(sizeArray>100){
            cout << "saida invalida, inserir novo valor: ";
            cin >> sizeArray;
        }
    }


    cout << endl << "elementos inseridos: ";

    //criar x elementos

    for (int i = 0; i<sizeArray; i++){
        int randomNum = rand() % 101;
        array.insert(i,randomNum);
    }

    array.print();

    //cria um array copia
    for(int i = 0; i < array.size(); i++){
    arrayCopy.insert(i,array.get(i));
    }

    int posRemove;
    cout << "Escolha posicao do numero que vai ser removido: ";
    cin >> posRemove;
    cout << endl;
    arrayCopy.remove(posRemove-1);
    arrayCopy.print();
    cout << "Escolha posicao do segundo numero que vai ser removido: ";
    cin >> posRemove;
    cout << endl;
    arrayCopy.remove(posRemove-1);

    cout << "array original: ";
    array.print();
    cout << endl;
    cout << "array final...: ";
    arrayCopy.print();


    return 0;
}
