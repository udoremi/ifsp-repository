/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cClassif.cpp
 * Author: doremi
 * 
 * Created on September 15, 2023, 5:43 PM
 */

#include "cClassif.h"
#include <iostream>

using namespace std;

cClassif::cClassif() {
}

cClassif::cClassif(const cClassif& orig) {
}

cClassif::~cClassif() {
}

void cClassif::lerDados(){
    
    int num;
    
    cout<<"Digite um número: "<<endl;
    cin>>num;
    
    this->verifNum(num);
}

void cClassif::verifNum(int num){
    if(num % 2 == 0){
        cout<<"Número par."<<endl;
    }else{
        cout<<"Número ímpar."<<endl;
    }
    
    if(num>=0){
        cout<<"Número positivo.";
    }else{
        cout<<"Número negativo.";
    }
    
}