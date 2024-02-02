/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cDesempenho.cpp
 * Author: aluno
 * 
 * Created on 18 de agosto de 2023, 11:25
 */

#include "cDesempenho.h"
#include <iostream>
#include <string>
using namespace std;

cDesempenho::cDesempenho() {
}

cDesempenho::cDesempenho(const cDesempenho& orig) {
}

cDesempenho::~cDesempenho() {
}


void cDesempenho::lerDados(){
    
    int qtd;
    cout<<"Informe a quantidade de alunos: "<<endl;
    cin>>qtd;
    dados vetor[qtd];
    
    for(int i=0;i<qtd;i++){
        cout<<"Informe o nome: "<<endl;
        cin>>vetor[i].nome;
        cout<<"Informe a matrícula: "<<endl;
        cin>>vetor[i].matricula;

    for(int j=0;i<=1;j++){
        cout<<"Informe a nota "<<j+1<<":"<<endl;
        cin>>vetor[i].nota;
    }
    
}
}

int cDesempenho::calcMedia(){
    
}