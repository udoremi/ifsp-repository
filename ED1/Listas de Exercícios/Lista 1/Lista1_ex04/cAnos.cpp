/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cAnos.cpp
 * Author: doremi
 * 
 * Created on September 5, 2023, 5:40 PM
 */

#include "cAnos.h"
#include <iostream>

using namespace std;

cAnos::cAnos() {
}

cAnos::cAnos(const cAnos& orig) {
}

cAnos::~cAnos() {
}

void cAnos::lerDados(){
    
    int dias;
    
    cout<<"Digite a idade em dias: "<<endl;
    cin>>dias;
    
    cout<<this->mostrarAnos(dias);
    
}

int cAnos::mostrarAnos(int dias){
    int ano, mes, dia;
    
    ano = dias / 365;
    mes = (dias%365) / 30;
    dia = (dias%365)%30;
    
    cout<<ano<<" ano(s)," <<mes<<" mes(es) e "<<dia<< " dias"<<endl;
}