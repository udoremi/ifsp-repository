/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cIdeal.cpp
 * Author: doremi
 * 
 * Created on September 15, 2023, 6:31 PM
 */

#include "cIdeal.h"
#include <iostream>

using namespace std;

cIdeal::cIdeal() {
}

cIdeal::cIdeal(const cIdeal& orig) {
}

cIdeal::~cIdeal() {
}

void cIdeal::lerDados(){
    string sexo="";
    float alt;
    
    cout<<"H para homem e M para mulher"<<endl<<"Digite o sexo: "<<endl;
    cin>>sexo;
    cout<<"Digite a altura: "<<endl;
    cin>>alt;
    
    this->mostraPeso(sexo, alt);
}

void cIdeal::mostraPeso(string sexo, float alt){
    
    float peso;
    
    if((sexo=="H")||(sexo=="h")){
        peso = (72.7*alt) - 58;
    }else{
        if((sexo=="M")||(sexo=="m")){
            peso = (62.1*alt) - 44.7;
        }
    }
    cout<<"O peso ideal é: "<<peso<<" kg.";
}