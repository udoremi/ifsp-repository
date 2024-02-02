/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cMatricula.cpp
 * Author: doremi
 * 
 * Created on September 17, 2023, 1:57 PM
 */

#include "cMatricula.h"
#include <iostream>

using namespace std;

cMatricula::cMatricula() {
}

cMatricula::cMatricula(const cMatricula& orig) {
}

cMatricula::~cMatricula() {
}

void cMatricula::lerDados(){
    
    int qtd=0;
    int i=0;
    
    cout<<"Digite a quantidade de alunos: "<<endl;
    cin>>qtd;
    
    sAluno vetor[qtd];
    for(i=0; i<qtd; i++){
        cout<<"Digite a matrícula do aluno: "<<endl;
        cin>>vetor[i].matricula;
        cout<<"Digite o nome do aluno: "<<endl;
        cin>>vetor[i].nome;
        cout<<"Digite a primeira nota do aluno: "<<endl;
        cin>>vetor[i].n1;
        cout<<"Digite a segunda nota do aluno: "<<endl;
        cin>>vetor[i].n2;
        
    vetor[i].media = (vetor[i].n1 + vetor[i].n2 )/ 2;
    }
    this->mostraDados(vetor, qtd);
}

void cMatricula::mostraDados(sAluno *vetor, int qtd){
    
    for(int i=0; i<qtd; i++){
        cout<<"\n\nMatrícula do aluno: "<<vetor[i].matricula<<endl;
        cout<<"Nome do aluno: "<<vetor[i].nome<<endl;
        cout<<"A média final é: "<<vetor[i].media;
    }
}
