/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cCarros.cpp
 * Author: doremi
 * 
 * Created on September 8, 2023, 4:50 PM
 */

#include "cCarros.h"
#include <iostream>

using namespace std;

cCarros::cCarros() {
}

cCarros::cCarros(const cCarros& orig) {
}

cCarros::~cCarros() {
}

void cCarros::lerDados(){
    
    float precofab=0.0;
    
    cout<<"Digite o preço de fábrica do carro: "<<endl;
    cin>>precofab;
    
    cout<<this->precoFinal(precofab);
    
}

float cCarros::precoFinal(float precofab){
    
    float precofinal=0.0;
    
    precofinal = precofab*1.73;
    
    return precofinal;
}