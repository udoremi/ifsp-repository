/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Fila.cpp
 * Author: doremi
 * 
 * Created on 17 de novembro de 2023, 07:22
 */
/*
#include "Fila.h"
#include <iostream>

using namespace std;

Fila::Fila() {
    this->inicio=NULL;
    this->fim=NULL;
    this->aux=NULL;
}

Fila::Fila(const Fila& orig) {
}

Fila::~Fila() {
}


void Fila::menu(){
    int opcao=0, valorPesq=0;
    
    do{
        cout<<"1 - INSERIR\n";
        cout<<"2 - PESQUISAR\n";
        cout<<"3 - REMOVER\n";
        cout<<"4 - LISTAR\n";
        cout<<"5 - VERIFICAR\n";

        cout<<"\nInforme a opção desejada ou 0 para sair: ";
        cin>>opcao;

        switch(opcao){
            case 1:
                this->inserir();
            break;
            case 2:
                cout<<"Digite um valor para pesquisar: ";
                cin>>valorPesq;
                this->pesquisar(valorPesq);
            break;
            case 3:
                this->remover();
            break;
            case 4:
                this->listar();
            break;
            case 5:
                cout<<"Digite um valor para pesquisar: ";
                cin>>valorPesq;
                this->verificar(valorPesq);
                    if(this->verificar(valorPesq) == true){
                    cout<<"ACHOU!!!!!!!!!!!!!!!!!"<<endl;
                    } else{
                        cout<<"Valor não encontrado, insira-o: "<<endl;
                        this->inserir();
                    }
            break;
        }
    }while(opcao!=0);
}

void Fila::inserir(){
    
        int valorp=0;
        cout<<"Informe o valor a ser inserido: ";
	cin>>valorp;
            
        if(this->verificar(valorp))
            cout<<"\nValor já existe!";
        else{
            this->aux = (struct no*) malloc (sizeof(this->aux));
            this->aux->valor=valorp;
        
            if(this->inicio == NULL)
                    this->inicio = this->aux;
            else     
                    this->fim->prox = this->aux;

            this->fim = this->aux;
        }
}

void Fila::remover(){
    cout<<"Informe o valor para remover: ";
    cin>>this->aux->valor;
	
	if(this->inicio == NULL)
		cout<<"não há o que remover";
	else
		this->aux = this->inicio;
            	this->inicio = this->aux->prox;
		free(this->aux);
}

void Fila::listar(){
        
	for(this->aux = this->inicio; this->aux != NULL; this->aux = this->aux->prox){
		cout<<this->aux->valor<<" ";
	}
        cout<<"\n";
}

void Fila::pesquisar(int valorPesq){

	this->aux = (struct no*) malloc (sizeof(this->aux));

	for(this->aux = inicio; this->aux != NULL; this->aux = this->aux->prox){
		if(valorPesq == this->aux->valor)
                    cout<<"ACHOU";
	}
}

bool Fila::verificar(int valorPesq){
    
    bool Ver = false;
    
	for(this->aux = this->inicio; this->aux != NULL; this->aux = this->aux->prox){
		if(valorPesq == this->aux->valor){
                    Ver = true;
                }
	}
    return Ver;
}
*/