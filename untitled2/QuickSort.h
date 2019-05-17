//
// Created by utec on 17/05/19.
//

#ifndef UNTITLED2_QUICKSORT_H
#define UNTITLED2_QUICKSORT_H


#include <vector>
#include <iostream>

template <typename TypeList>
class QuickSort {
private:
    std::vector<TypeList> Lista;
    int length;
public:
    explicit QuickSort(std::vector<TypeList> Lista_){ Lista = Lista_; length = Lista.size();}

    void Ordenar(){
        if (length > 1){

            TypeList Pivote = Lista[length-1];
            std::vector<TypeList> Minus = {};
            std::vector<TypeList> Plusi = {};
            std::vector<TypeList> Finale = {};
            for (TypeList n : Lista){
                if (n <= Pivote)
                    Minus.push_back(n);
                else
                    Plusi.push_back(n);
            }
            Ordenar(Minus, Finale);
            Finale.push_back(Pivote);
            Ordenar(Plusi, Finale);

            Lista = Finale;

        }
}
    void Ordenar(std::vector<TypeList> NewList, std::vector<TypeList> &retorno){
        if (length > 1){

            TypeList Pivote = NewList[length-1];
            std::vector<TypeList> Minus = {};
            std::vector<TypeList> Plusi = {};
            for (TypeList n : Lista){
                if (n <= Pivote)
                    Minus.push_back(n);
                else
                    Plusi.push_back(n);
            }
            Ordenar(Minus, retorno);
            retorno.push_back(Pivote);
            Ordenar(Plusi, retorno);

        }   else if (length == 1){
            retorno.push_back(NewList[0]);

        }
    }
    void print(){
        for (TypeList n : Lista){
            std::cout << n << " ";
        }
    }

};



#endif //UNTITLED2_QUICKSORT_H
