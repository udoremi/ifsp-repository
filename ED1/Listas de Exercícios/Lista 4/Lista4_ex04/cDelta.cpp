/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cDelta.cpp
 * Author: doremi
 * 
 * Created on September 16, 2023, 6:15 PM
 */

#include "cDelta.h"
#include <iostream>

using namespace std;

cDelta::cDelta() {
}

cDelta::cDelta(const cDelta& orig) {
}

cDelta::~cDelta() {
}

void cDelta::lerDados(){
    
    int a,b,c;
    
    cout<<"Digite o valor de A: "<<endl;
    cin>>a;
    cout<<"Digite o valor de B: "<<endl;
    cin>>b;
    cout<<"Digite o valor de C: "<<endl;
    cin>>c;
    
    cout<<"O valor do delta é "<<this->calcDelta(a,b,c);
}

int cDelta::calcDelta(int a, int b, int c){
    int delta=0;
    
    delta = (b * b) - (4 * a * c);
    
    return delta;
}