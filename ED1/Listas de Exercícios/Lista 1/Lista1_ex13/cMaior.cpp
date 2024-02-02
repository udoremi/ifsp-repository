/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cMaior.cpp
 * Author: doremi
 * 
 * Created on September 10, 2023, 10:32 AM
 */

#include "cMaior.h"
#include <iostream>

using namespace std;

cMaior::cMaior() {
}

cMaior::cMaior(const cMaior& orig) {
}

cMaior::~cMaior() {
}

void cMaior::lerDados(){
    
    float n1, n2, n3;
    
    cout<<"Digite o primeiro número: "<<endl;
    cin>>n1;
    cout<<"Digite o segundo número: "<<endl;
    cin>>n2;
    cout<<"Digite o terceiro número: "<<endl;
    cin>>n3;
    
    cout<<this->mostraMaior(n1,n2,n3);
}

float cMaior::mostraMaior(float n1, float n2, float n3){
    
    float maior=n1;
    
    if(n2>n1 && n2 > n3){
        maior = n2;
    } else{
        if(n3 > n1 && n3 > n2){
            maior = n3;
        }
    }
    cout<<"O maior número é: ";
    return maior;
}