/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cNotas.cpp
 * Author: doremi
 * 
 * Created on September 16, 2023, 5:49 PM
 */

#include "cNotas.h"
#include <iostream>

using namespace std;

cNotas::cNotas() {
}

cNotas::cNotas(const cNotas& orig) {
}

cNotas::~cNotas() {
}

void cNotas::lerDados(){
    
    string letra="";
    float n1=0,n2=0,n3=0;
    
    cout<<"Digite a primeira nota: "<<endl;
    cin>>n1;
    cout<<"Digite a segunda nota: "<<endl;
    cin>>n2;
    cout<<"Digite a terceira nota: "<<endl;
    cin>>n3;
    
    cout<<"A - aritmética || P - Ponderada"<<endl;
    cout<<"Informe a média desejada: "<<endl;
    cin>>letra;
    
    if((letra=="A") || (letra=="a")){
        cout<<"Média aritmética: "<<this->mediaA(n1,n2,n3);
    } else{
        if((letra=="P") || (letra=="p")){
            cout<<"Média ponderada: "<<this->mediaP(n1,n2,n3);
        }
    }
}
float cNotas::mediaA(float n1, float n2, float n3){
    float media=0;
    
    media = (n1 + n2 + n3) / 3;
    
    return media;
}


float cNotas::mediaP(float n1, float n2, float n3){
    float media=0;
    
    media = ((n1*5) + (n2*3) + (n3*2)) / 10;
    
    return media;
}