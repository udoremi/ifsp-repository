/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cMedia.cpp
 * Author: aluno
 * 
 * Created on 4 de agosto de 2023, 11:52
 */

#include "cMedia.h"
#include <iostream>
#include <cmath>

using namespace std;

cMedia::cMedia() {
}

cMedia::cMedia(const cMedia& orig) {
}

cMedia::~cMedia() {
}

void cMedia::lerNum(){
    
    int media; 
    float n1, n2, n3;
   
    cout<<"Digite o primeiro número:"<<endl;
    cin>>n1;
    cout<<"Digite o segundo número:"<<endl;
    cin>>n2;
    cout<<"Digite o terceiro número:"<<endl;
    cin>>n3;
    
    cout<<"1 - Aritmética -- 2 - Ponderada -- 3 - Harmônica"
    cout<<"Digite o tipo de média:"<<endl;
    cin>>media;
    
    cout<<this->calcMed(n1,n2,n3,media);
}

float cMedia::calcMed(float n1, float n2, float n3, float media){
    if (media = 1){
        media = (n1 + n2 + n3) / 3;
    }
    else if(media = 2){
        media = ((n1*3) + (n2*3) + (n3*4)) / 10;
    }
    else if(media = 3){
        media = 3 / ((1/n1) + (1/n2) + (1/n3));
    }
    else{
        cout<<"Média Inválida.";
    }
    
    return media;
}