/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Pilha.cpp
 * Author: doremi
 * 
 * Created on 17 de novembro de 2023, 07:22
 */

#include "Pilha.h"
#include <iostream>

using namespace std;

Pilha::Pilha() {
    this->aux=NULL;
    this->topo=NULL;
}

Pilha::Pilha(const Pilha& orig) {
}

Pilha::~Pilha() {
}

void Pilha::menu(){
    int opcao;
    
    do{
        cout<<"1 - INSERIR\n";
        cout<<"2 - LISTAR\n";
        cout<<"3 - REMOVER\n";
        cout<<"4 - PROCURAR MEIO";

        cout<<"\nInforme a opção desejada: ";
        cin>>opcao;

        switch(opcao){
            case 1:
                this->inserir();
            break;
            case 2:
                this->listar();
            break;
            case 3:
                this->remover();
            break;
            case 4:
                this->calcMeio();
            break;
        }
    }while(opcao!=0);
}

void Pilha::inserir(){
    cout<<"Informe o valor para inserir: ";
    this->aux = (struct no*) malloc (sizeof(this->aux));
    cin>>this->aux->valor;
    this->aux->ant=NULL;
    this->aux->ant = this->topo;
    this->topo=this->aux;
}

void Pilha::remover(){
    cout<<"Digite um elemento para remover: ";
    cin>>this->aux->valor;
    this->aux = this->topo;
    this->topo = this->aux->ant;
    free(this->aux);
}

void Pilha::listar(){
    this->aux=this->topo;
    while(this->aux!=NULL){
	cout<<this->aux->valor;
	this->aux = this->aux->ant;
    }
}

void Pilha::calcMeio(){
    int qtd=1, meio=0;
    
    this->aux = this->topo;
        while(this->aux!=NULL){
            qtd++;
            this->aux = this->aux->ant;
        }
    meio = qtd/2;
    cout<<" "<<this->apresentarMeio(meio)->valor;
}

struct no* Pilha::apresentarMeio(int meio){
    int cont=1;
    for(this->aux = this->topo; this->aux != NULL; this->aux = this->aux->ant){
        if(cont==meio){
            return this->aux;
        }
        cont++;
    }
}