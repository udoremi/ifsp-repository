/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cIdade.cpp
 * Author: doremi
 * 
 * Created on September 4, 2023, 2:35 PM
 */

#include "cIdade.h"
#include <iostream>

using namespace std;

cIdade::cIdade() {
}

cIdade::cIdade(const cIdade& orig) {
}

cIdade::~cIdade() {
}

void cIdade::lerDados(){
    int ano=0, mes=0, dias=0;
    
    cout<<"Digite a quantidade de anos: "<<endl;
    cin>>ano;
    
    cout<<"Digite a quantidade de meses:  "<<endl;
    cin>>mes;
    
    cout<<"Digite a quantidade de dias: "<<endl;
    cin>>dias;
    
    cout<<this->mostrarDias(ano, mes, dias);
            
}

int cIdade::mostrarDias(int ano, int mes, int dias){
    ano = ano * 365;
    mes = mes * 30;
    dias += ano + mes;
    
    return dias;
}