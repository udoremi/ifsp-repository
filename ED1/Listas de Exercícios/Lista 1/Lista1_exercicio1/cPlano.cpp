/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cPlano.cpp
 * Author: aluno
 * 
 * Created on 4 de agosto de 2023, 09:35
 */

#include "cPlano.h"
#include <iostream>
#include <cmath>

using namespace std;

cPlano::cPlano() {
}

cPlano::cPlano(const cPlano& orig) {
}

cPlano::~cPlano() {
}

void cPlano::lerPontos(){
    
    cout<<"Digite o ponto x1:"<<endl;
    cin>>this->x1;
    cout<<"Digite o ponto y1:"<<endl;
    cin>>this->y1;
    cout<<"Digite o ponto x2:"<<endl;
    cin>>this->x2;
    cout<<"Digite o ponto y2:"<<endl;
    cin>>this->y2;
    
}

float cPlano::calcularDE(){
    
    float d=0.0;
    
    d = sqrt(pow(this->x2 - this->x1, 2) + pow(this->y2 - this->y1, 2));
    
    
    return d;
   
    
}