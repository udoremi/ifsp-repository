/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cValores.cpp
 * Author: doremi
 * 
 * Created on September 9, 2023, 3:32 PM
 */

#include "cValores.h"
#include <iostream>

using namespace std;

cValores::cValores() {
}

cValores::cValores(const cValores& orig) {
}

cValores::~cValores() {
}

void cValores::lerDados(){
    
    int a=0,b=0,c=0;
    
    cout<<"Digite o primeiro valor: "<<endl;
    cin>>a;
    cout<<"Digite o segundo valor: "<<endl;
    cin>>b;
    cout<<"Digite o terceiro valor: "<<endl;
    cin>>c;
    
    this->mostrarValores(a,b,c);
    cout<<"\nO maior valor é: "<<this->mostrarMaior(a,b,c);
    
}

void cValores::mostrarValores(int a, int b, int c){
    
    cout<<"Primeiro valor: "<<a<<endl;
    cout<<"Segundo valor: "<<b<<endl;
    cout<<"Terceiro valor: "<<c<<endl;
    
}

int cValores::mostrarMaior(int a, int b, int c){
    
    int maior=a;
    
    if((b>a) && (b>c)){
        maior = b;
    }
    else{
        if((c>b) && (c>a)){
            maior = c;
        }
    }
    
    return maior;
}