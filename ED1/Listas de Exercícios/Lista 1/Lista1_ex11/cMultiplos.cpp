/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cMultiplos.cpp
 * Author: doremi
 * 
 * Created on September 9, 2023, 4:14 PM
 */

#include "cMultiplos.h"
#include <iostream>

using namespace std;

cMultiplos::cMultiplos() {
}

cMultiplos::cMultiplos(const cMultiplos& orig) {
}

cMultiplos::~cMultiplos() {
}

void cMultiplos::lerDados(){
    
    int a,b;
    
    cout<<"Digite o valor A: "<<endl;
    cin>>a;
    cout<<"Digite o valor B: "<<endl;
    cin>>b;
    
    this->verifMulti(a, b);
    
}

void cMultiplos::verifMulti(int a, int b){
    
    if(a % b == 0){
        cout<<"O número "<<a<<" é múltiplo de "<<b<<endl;
    } else{
        cout<<"O número "<<a<<" NÃO é múltiplo de "<<b<<endl;
    }
}