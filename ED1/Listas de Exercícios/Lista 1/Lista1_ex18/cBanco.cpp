/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cBanco.cpp
 * Author: doremi
 * 
 * Created on September 15, 2023, 7:00 PM
 */

#include "cBanco.h"
#include <iostream>

using namespace std;

cBanco::cBanco() {
}

cBanco::cBanco(const cBanco& orig) {
}

cBanco::~cBanco() {
}

void cBanco::lerDados(){
    
    float salmed;
    
    cout<<"Informe o salário médio do cliente: "<<endl;
    cin>>salmed;
    
    cout<<"O saldo médio é: "<<salmed<<endl;
    cout<<"O valor do crédito é: "<<this->calcCred(salmed);
}

float cBanco::calcCred(float salmed){
    
    float credito=0;
    
    if((salmed>0) && (salmed<=200)){
        credito = 0;
    }else {
        if((salmed>200) && (salmed<=400)){
            credito = salmed * 0.2;
        } else{
            if((salmed>400) && (salmed<=600)){
                credito = salmed * 0.3;
            } else{
                credito = salmed * 0.4;
            }
        }
    }
    return credito;
}