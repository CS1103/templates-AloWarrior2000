#include <vector>
#include <iostream>
#include "QuickSort.h"

using namespace std;

int main() {

    vector<int> prueba = {7,1,5,10};
    for (int n : prueba){
        cout << n << " ";
    }
    cout << endl;
    QuickSort<int> pruebaOr(prueba);
    pruebaOr.Ordenar();
    pruebaOr.print();
    return 0;
}