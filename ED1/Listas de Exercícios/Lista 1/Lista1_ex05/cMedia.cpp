/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cMedia.cpp
 * Author: doremi
 * 
 * Created on September 7, 2023, 3:00 PM
 */

#include "cMedia.h"
#include <iostream>

using namespace std;

cMedia::cMedia() {
}

cMedia::cMedia(const cMedia& orig) {
}

cMedia::~cMedia() {
}

void cMedia::lerDados(){
    
    float n1, n2, n3;
    
    cout<<"Digite a primeira nota: "<<endl;
    cin>>n1;
    cout<<"Digite a segunda nota: "<<endl;
    cin>>n2;
    cout<<"Digite a terceira nota: "<<endl;
    cin>>n3;
    
    cout<<this->notaFinal( n1,  n2,  n3);
    
}

float cMedia::notaFinal(int n1, int n2, int n3){
    float media;
    
    media = ((n1*2) + (n2*3) + (n3*5)) / 10;
    
    return media;
}