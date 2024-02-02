/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cRecursividade.cpp
 * Author: aluno
 * 
 * Created on 15 de setembro de 2023, 09:25
 */

#include "cRecursividade.h"
#include <iostream>

using namespace std;

cRecursividade::cRecursividade() {
}

cRecursividade::cRecursividade(const cRecursividade& orig) {
}

cRecursividade::~cRecursividade() {
}

int cRecursividade::fatorial(int a){
    if(a>1)
        return (a * fatorial (a-1));
    else
        return(1);
}

void cRecursividade::tabuada(int i, int valor){
    if(i<=10){
        cout<< i* valor<<" ";
        tabuada(i+1, valor);
    }
}