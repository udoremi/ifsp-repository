/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cPrimo.cpp
 * Author: doremi
 * 
 * Created on September 16, 2023, 1:44 PM
 */

#include "cPrimo.h"
#include <iostream>

using namespace std;

cPrimo::cPrimo() {
}

cPrimo::cPrimo(const cPrimo& orig) {
}

cPrimo::~cPrimo() {
}

void cPrimo::confereNum(){
    
    int num=0, i=0, mult=0;
    
    cout<<"Digite um número: "<<endl;
    cin>>num;
    
    for(i=2;i<=num/2;i++){
        if(num % i == 0){
            mult++;
            break;
        }
    }
    if (mult == 0)
        cout<<"Número primo.";
        else
            cout<<"Número não primo.";
}