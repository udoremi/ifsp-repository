/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cImc.cpp
 * Author: aluno
 * 
 * Created on 25 de agosto de 2023, 10:26
 */

#include "cImc.h"
#include <iostream>

using namespace std;

cImc::cImc() {
}

cImc::cImc(const cImc& orig) {
}

cImc::~cImc() {
}

void cImc::lerDados(){
    
    int i,qtde=0,pesqCpf=0;
    
    cout<<"Digite a quantidade de alunos: "<<endl;
    cin>>qtde;
    
    sImc vetor[qtde];
    
    for(i=0;i<qtde;i++){
    cout<<"Informe o nome: "<<endl;
    cin>>vetor[i].nome;
    cout<<"Informe a altura: "<<endl;
    cin>>vetor[i].altura;
    cout<<"Informe o peso: "<<endl;
    cin>>vetor[i].peso;
    }
    
    cout<<"Digite o CPF a ser pesquisado: "<<endl;
    cin>>pesqCpf;
    
    cout<<this->calcIMC(vetor,this->localizaAluno(vetor,pesqCpf, qtde));
    
}

int cImc::localizaAluno(sImc *vetor, int pesqCPF, int qtde){
    int i=0;
    
    while (i<qtde){
        if(pesqCPF == vetor[i].cpf)
            return i;
        i++;
    }
}

float cImc::calcIMC(sImc *vetor, int i){
    float imc = vetor[i].peso / (vetor[i].altura * vetor[i].altura);
    return imc;
}