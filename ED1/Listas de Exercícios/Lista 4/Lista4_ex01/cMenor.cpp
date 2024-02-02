/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cMenor.cpp
 * Author: doremi
 * 
 * Created on September 16, 2023, 5:28 PM
 */

#include "cMenor.h"
#include <iostream>

using namespace std;

cMenor::cMenor() {
}

cMenor::cMenor(const cMenor& orig) {
}

cMenor::~cMenor() {
}

void cMenor::lerDados(){
    
    int n1=0,n2=0;
    
    cout<<"Digite o primeiro número: "<<endl;
    cin>>n1;
    cout<<"Digite o segundo número: "<<endl;
    cin>>n2;
    
    cout<<"O menor número é: "<<this->mostraMenor(n1, n2);
}

int cMenor::mostraMenor(int n1, int n2){
    
    int menor=n1;
    
    if(n2<menor){
        menor = n2;
    }
    
    return menor;
}