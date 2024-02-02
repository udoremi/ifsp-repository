/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cIMC.cpp
 * Author: doremi
 * 
 * Created on September 17, 2023, 6:46 PM
 */

#include "cIMC.h"
#include <iostream>

using namespace std;

cIMC::cIMC() {
}

cIMC::cIMC(const cIMC& orig) {
}

cIMC::~cIMC() {
}

void cIMC::lerDados(){
    
    int qtd=0;
    int pesqCPF=0;
     
    cout<<"Digite a quantidade de pessoas: "<<endl;
    cin>>qtd;
    sPessoa vetor[qtd];
    
    for(int i=0;i<qtd;i++){
        cout<<"Digite o nome da pessoa: "<<endl;
        cin>>vetor[i].nome;
        cout<<"Digite a altura da pessoa em metros: "<<endl;
        cin>>vetor[i].alt;
        cout<<"Digite o peso da pessoa em kilos: "<<endl;
        cin>>vetor[i].peso;
        cout<<"Digite o CPF da pessoa: "<<endl;
        cin>>vetor[i].cpf;
        cout<<"Digite o sexo da pessoa: "<<endl;
        cin>>vetor[i].sexo;
    }
    //this->Bolha(vetor, qtd);
    //for(int i=0;i<qtd;i++){
    //    cout<<vetor[i].alt<<"; ";
    //}
    
    cout<<"Informe o cpf para pesquisar."<<endl;
    cin>>pesqCPF;
    this->localizaPessoa(vetor, qtd, pesqCPF);
    cout<<"O IMC dessa pessoa é: "<<this->calculaIMC(vetor, this->localizaPessoa(vetor, qtd, pesqCPF));
}

int cIMC::localizaPessoa(sPessoa *vetor, int qtd, int pesqCPF){
    int i=0;
    
    for(i=0;i<qtd;i++){
        if(pesqCPF == vetor[i].cpf){
            return i;
        }
    }
}

float cIMC::calculaIMC(sPessoa *vetor, int i){
    float imc=0;
    //for(int i=0;i<qtd;i++){
    imc = vetor[i].peso/(vetor[i].alt*vetor[i].alt);
    //}
    return imc;
}

/*void cIMC::Bolha(sPessoa *vetor, int qtd) {
    int i, j;
    int temp;
    
        for (i=(qtd-1); i >= 1; i--) {
        for (j= 0; j < i ;j++) {
            if (vetor[j].alt < vetor[j+1].alt) {
                temp = vetor[j].alt;
                vetor[j].alt = vetor[j+1].alt;
                vetor[j+1].alt = temp;
}
}
}
}*/