/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cAltura.cpp
 * Author: doremi
 * 
 * Created on September 16, 2023, 3:31 PM
 */

#include "cAltura.h"
#include <iostream>

using namespace std;

cAltura::cAltura() {
}

cAltura::cAltura(const cAltura& orig) {
}

cAltura::~cAltura() {
}

void cAltura::lerDados(){
    
    float alt, maior, menor;
    
    for(int i=1;i<=5;i++){
        cout<<"Informe a altura da "<<i<<"° pessoa"<<endl;
        cin>>alt;
        
        if(alt>maior){
            maior = alt;
        }
        if(alt<menor){
            menor = alt;
        }
    }
    cout<<"\nA maior altura é: "<<maior<<endl;
    cout<<"A menor altura é: "<<menor<<endl;
}