//
// Created by utec on 17/05/19.
//

#include "QuickSort.h"


//template <typename TypeList>
//void QuickSort<TypeList>::Ordenar(){
//    if (length > 1){
//
//    TypeList* Pivote = Lista[length-1];
//    std::vector<TypeList> Minus;
//    std::vector<TypeList> Plusi;
//    std::vector<TypeList> Finale;
//    for (TypeList n : Lista){
//        if (n <= Pivote)
//            Minus.append(n);
//        else
//            Plusi.append(n);
//    }
//    Ordenar(Minus, Finale);
//    Finale.append(Pivote);
//    Ordenar(Plusi, Finale);
//
//    Lista = Finale;
//
//}}

//template <typename TypeList>
//void QuickSort<TypeList>::Ordenar(std::vector<TypeList> NewList, std::vector<TypeList> &retorno){
//    if (length > 1){
//
//    TypeList* Pivote = NewList[length-1];
//    std::vector<TypeList> Minus;
//    std::vector<TypeList> Plusi;
//    for (TypeList n : Lista){
//        if (n <= Pivote)
//            Minus.push_back(n);
//        else
//            Plusi.push_back(n);
//    }
//    Ordenar(Minus, retorno);
//    retorno.push_back(Pivote);
//    Ordenar(Plusi, retorno);
//
//}   else if (length == 1){
//        retorno.append(NewList[0]);
//
//    }
//
//}

//template <typename TypeList>
//void QuickSort<TypeList>::print(){
//    for (TypeList n : Lista){
//        std::cout << n << " ";
//    }
//}