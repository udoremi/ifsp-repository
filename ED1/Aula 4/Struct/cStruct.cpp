/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cStruct.cpp
 * Author: aluno
 * 
 * Created on 18 de agosto de 2023, 10:10
 */

#include "cStruct.h"
#include <iostream>
#include <string>

using namespace std;

cStruct::cStruct() {
}

cStruct::cStruct(const cStruct& orig) {
}

cStruct::~cStruct() {
}

void cStruct::lerDados(){
    
    for(int i=0;i<=3;i++){
        cout<<"Informe o nome: "<<endl;
        cin>>this->vetor[i].nome;
        cout<<"Informe a idade: "<<endl;
        cin>>this->vetor[i].idade;
        cout<<"Informe o sexo: "<<endl;
        cin>>this->vetor[i].sexo;
    
    
    for(int j=0;j<=2;j++){
        cout<<"Informe a nota:"<<endl;
        cin>>vetor[i].nota[j];
    }
    }
    
}