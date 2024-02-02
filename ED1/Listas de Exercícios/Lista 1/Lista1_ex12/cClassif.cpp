/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cClassif.cpp
 * Author: doremi
 * 
 * Created on September 9, 2023, 5:22 PM
 */

#include "cClassif.h"
#include <iostream>
using namespace std;

cClassif::cClassif() {
}

cClassif::cClassif(const cClassif& orig) {
}

cClassif::~cClassif() {
}

void cClassif::lerDados(){
    
    int idade;
    
    cout<<"Digite a idade do nadador: "<<endl;
    cin>>idade;
    
    string classificacao="";
    
    if(idade>=5 && idade<=7){
        classificacao = "Infantil A";
    } else{
        if(idade>=8 && idade<=10){
            classificacao = "Infantil B";
        } else{
            if(idade>=11 && idade<=13){
                classificacao = "Juvenil A";
            } else{
                if(idade>=14 && idade<=17){
                    classificacao = "Juvenil B";
                } else{
                    if(idade >= 18){
                        classificacao = "Adulto";
                }
            }
        }
    }
}
    cout<<"A classificação é: "<<classificacao<<endl;
}
