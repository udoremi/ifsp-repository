/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cPesquisaSeqBin.cpp
 * Author: doremi
 * 
 * Created on September 19, 2023, 4:48 PM
 */

#include "cPesquisaSeqBin.h"
#include <iostream>

using namespace std;

cPesquisaSeqBin::cPesquisaSeqBin() {
}

cPesquisaSeqBin::cPesquisaSeqBin(const cPesquisaSeqBin& orig) {
}

cPesquisaSeqBin::~cPesquisaSeqBin() {
}

void cPesquisaSeqBin::lerDados(){
    
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
    
    cout<<"Informe o cpf para pesquisar."<<endl;
    cin>>pesqCPF;
    this->localizaPessoa(vetor, qtd, pesqCPF);
    cout<<"O IMC dessa pessoa é: "<<this->calculaIMC(vetor, this->PesquisaBinaria(vetor, qtd));
}

int cPesquisaSeqBin::localizaPessoa(sPessoa *vetor, int qtd, int pesqCPF){
    int i=0;
    
    for(i=0;i<qtd;i++){
        if(pesqCPF == vetor[i].cpf){
            return i;
        }
    }
}

float cPesquisaSeqBin::calculaIMC(sPessoa *vetor, int i){
    float imc=0;
    //for(int i=0;i<qtd;i++){
    imc = vetor[i].peso/(vetor[i].alt*vetor[i].alt);
    //}
    return imc;
}

int cPesquisaSeqBin::PesquisaBinaria(sPessoa *vetor, int qtd){
 int chave, inf,sup,meio;
 inf=0;
 sup=qtd-1;
    while (inf<=sup){
        meio=(inf+sup)/2;
        if (chave==vetor[meio].cpf)
            return meio;
        else if (chave<vetor[meio].cpf)
        sup=meio-1;
            else
            inf=meio+1;
 }
 return -1; /* não encontrado */
}