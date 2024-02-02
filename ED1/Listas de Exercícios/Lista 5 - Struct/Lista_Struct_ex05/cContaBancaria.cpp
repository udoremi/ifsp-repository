/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cContaBancaria.cpp
 * Author: doremi
 * 
 * Created on September 20, 2023, 5:22 PM
 */

#include "cContaBancaria.h"
#include <iostream>

using namespace std;

cContaBancaria::cContaBancaria() {
}

cContaBancaria::cContaBancaria(const cContaBancaria& orig) {
}

cContaBancaria::~cContaBancaria() {
}

//esse exercício tentei de diversas maneiras e não consegui fazer por conta própria, então foi todo baseado no que foi feito em aula 

void cContaBancaria::lerDados(){
    int opcao=1; 
    
    while(opcao>=1){
        cout<<"Digite 1 para fazer cadastro"<<endl;
        cout<<"Digite 2 para fazer saque"<<endl;
        cout<<"Digite 3 para fazer depósito"<<endl;
        cout<<"Digite 0 para terminar"<<endl;
        cin>>opcao;
        switch(opcao){
                case 1: cadastro(); break;
                case 2: saque(); break;
                case 3: deposito(); break;
        }        
    }
}

void cContaBancaria::cadastro(){

    for(int i=0;i<=2;i++){
        cout<<"Digite seu nome: "<<endl;
        cin>>this->vetor[i].nome;
        cout<<"Digite seu cpf: "<<endl;
        cin>>this->vetor[i].cpf;
        cout<<"Digite depósito inicial: "<<endl;
        cin>>this->vetor[i].saldo;
    }

}

int cContaBancaria::pesqCliente(int cpf){
    for(int i=0; i<=2; i++){
        if(cpf==this->vetor[i].cpf)
            return i;
    }
    return -1;
}

void cContaBancaria::saque(){
    float saque;
    int i=0;
    int cpf;
    
    cout<<"Digite o cpf a ser pesquisado: "<<endl;
    cin>>cpf;
    cout<<"Digite o valor do saque: "<<endl;
    cin>>saque;
    
    i = this->pesqCliente(cpf);
    if (i!=-1){
        this->vetor[i].saldo-=saque;
        this->imprimirCliente(i);
    }  
}

void cContaBancaria::deposito(){
    float deposito;
    int cpf;
    
    cout<<"Digite o cpf para pesquisa: "<<endl;
    cin>>cpf;
    cout<<"Digite o valor do depósito: "<<endl;
    cin>>deposito;
    int i = this->pesqCliente(cpf);
    if (i!=0){
        this->vetor[i].saldo+=deposito;
        this->imprimirCliente(i);
    }            
}


void cContaBancaria::imprimirCliente(int i){
    cout<<this->vetor[i].nome<<endl;
    cout<<this->vetor[i].cpf<<endl;
    cout<<this->vetor[i].saldo<<endl;

}
