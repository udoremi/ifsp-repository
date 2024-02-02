/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cComprimento.cpp
 * Author: doremi
 * 
 * Created on September 17, 2023, 11:44 AM
 */

#include "cComprimento.h"
#include <iostream>

using namespace std;

cComprimento::cComprimento() {
}

cComprimento::cComprimento(const cComprimento& orig) {
}

cComprimento::~cComprimento() {
}

void cComprimento::lerDados(){
    float x,y,z;
    
    cout<<"Digite o valor X: "<<endl;
    cin>>x;
    cout<<"Digite o valor Y: "<<endl;
    cin>>y;
    cout<<"Digite o valor Z: "<<endl;
    cin>>z;
    
    this->verifTri(x,y,z);
}

void cComprimento::verifTri(float x, float y, float z){
    if((x==y) && (x==z) && (y==z)){
        cout<<"O triângulo é equilátero.";
    } else{
        if((x==y) || (x==z) || (y==z)){
            cout<<"O triângulo é isóceles.";
        }else{
            cout<<"O triângulo é escaleno.";
        }
    }
}