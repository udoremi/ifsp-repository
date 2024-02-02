/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cFabrica.cpp
 * Author: doremi
 * 
 * Created on September 7, 2023, 5:45 PM
 */

#include "cFabrica.h"
#include <iostream>

using namespace std;

cFabrica::cFabrica() {
}

cFabrica::cFabrica(const cFabrica& orig) {
}

cFabrica::~cFabrica() {
}

void cFabrica::lerDados(){
    
    int seg=0;
    
    cout<<"Digite o tempo em segundos: "<<endl;
    cin>>seg;
    
    cout<<this->mostrarHoras(seg);
    
}

int cFabrica::mostrarHoras(int seg){
    int horas=0, min=0, segs=0;
    
    horas = seg / 3600;
    min = (seg%3600) / 60;
    segs = (seg%3600)%60;
    
    cout<<horas<<" Hora(s)," <<min<<" minuto(s) e "<<segs<< " segundo(s)"<<endl;
}