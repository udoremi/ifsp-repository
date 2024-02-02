/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   exLista.cpp
 * Author: aluno
 * 
 * Created on 6 de outubro de 2023, 09:33
 */

#include "exLista.h"
#include <iostream>

using namespace std;

exLista::exLista() {
    this->inicio=NULL;
    this->fim=NULL;
    this->aux=NULL;
}

exLista::exLista(const exLista& orig) {
}

exLista::~exLista() {
}

void exLista::menu(){
    
    int tipo;
    cout<<"1 - Inserir || 2 - Remover || 3 - Listar || 4 - Pesquisar || Outro para sair"<<endl;
    cout<<"Digite o tipo de operação que deseja realizar: "<<endl;
    cin>>tipo;
    
    switch(tipo){
        case 1:
            this->inserir();
            this->menu();
            break;
        case 2:
            this->remover();
            break;
        case 3:
            this->listar();
            break;
        case 4:
            this->pesquisar();
            break;
        default:
            cout<<"Fim da execução.";
            break;
            
    }
}

void exLista::inserir(){
    
    cout<<"Digite o valor: "<<endl;
    this->aux = (struct no*) malloc(sizeof(this->aux));
    cin>>this->aux->valor;
    
    if(this->inicio==NULL){
        this->inicio = this->aux;
    } else{
        fim->prox = aux;
    }
    fim = aux;
    fim->prox = NULL;
    
}

void exLista::remover(){
    
}

void exLista::listar(){
    for(this->aux = this->inicio;this->aux!=NULL; this->aux = this->aux->prox){
        cout<<this->aux->valor;
    }
}

void exLista::pesquisar(){
    
}