/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cExp.cpp
 * Author: aluno
 * 
 * Created on 4 de agosto de 2023, 11:02
 */

#include "cExp.h"
#include <iostream>
#include <cmath>

using namespace std;

cExp::cExp() {
}

cExp::cExp(const cExp& orig) {
}

cExp::~cExp() {
}

void cExp::lerNum(){
    cout<<"Digite o número A: "<<endl;
    cin>>this->a;
    cout<<"Digite o número B: "<<endl;
    cin>>this->b;
    cout<<"Digite o número C: "<<endl;
    cin>>this->c;
    
}

float cExp::calc(){
    
    float D = 0.0, R = 0.0, S = 0.0;
    
    R = pow(this->a + this->b, 2);
    S = pow(this->b + this->c, 2);
    
    D = (R + S) / 2;
    
    return D;
    
}