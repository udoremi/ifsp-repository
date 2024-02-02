/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cVolume.cpp
 * Author: doremi
 * 
 * Created on September 17, 2023, 11:17 AM
 */

#include "cVolume.h"
#include <iostream>
#include <math.h>

using namespace std;

cVolume::cVolume() {
}

cVolume::cVolume(const cVolume& orig) {
}

cVolume::~cVolume() {
}

void cVolume::lerDados(){
    
    float raio;
    
    cout<<"Digite o valor do raio: "<<endl;
    cin>>raio;
    
    cout<<"O volume final é: "<<this->calcVol(raio);
}

float cVolume::calcVol(float raio){
    float volume=0.0;
    
    volume = (4 * 3.14 * pow(raio, 3.0)) / 3;
    
    return volume;
}