/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cAprovacao.cpp
 * Author: doremi
 * 
 * Created on September 8, 2023, 5:33 PM
 */

#include "cAprovacao.h"
#include <iostream>

using namespace std;

cAprovacao::cAprovacao() {
}

cAprovacao::cAprovacao(const cAprovacao& orig) {
}

cAprovacao::~cAprovacao() {
}

void cAprovacao::lerDados(){
    float n1,n2,n3;
    
    cout<<"Digite a primeira nota: "<<endl;
    cin>>n1;
    cout<<"Digite a segunda nota: "<<endl;
    cin>>n2;
    cout<<"Digite a terceira nota: "<<endl;
    cin>>n3;
    
    cout<<this->notaFinal(n1,n2,n3);
}

float cAprovacao::notaFinal(float n1, float n2, float n3){
    float media;
    
    media = (n1 + n2 + n3) / 3;
    
    if(media>=6){
        cout<<"Aluno aprovado!"<<endl;
    }else{
        cout<<"Aluno reprovado."<<endl;
    }
    cout<<"A nota final é: ";
    return media;
}