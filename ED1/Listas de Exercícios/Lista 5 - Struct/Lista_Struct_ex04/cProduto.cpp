/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cProduto.cpp
 * Author: doremi
 * 
 * Created on September 20, 2023, 3:23 PM
 */

#include "cProduto.h"
#include <iostream>

using namespace std;

cProduto::cProduto() {
}

cProduto::cProduto(const cProduto& orig) {
}

cProduto::~cProduto() {
}

void cProduto::lerDados(){
    int qtd=0, pesqCOD=0;
    
    cout<<"Digite a quantidade de produtos: ";
    cin>>qtd;
    
    sProd vetor[qtd];
    for(int i=0;i<qtd;i++){
        cout<<"\nInforme o nome do produto: "<<endl;
        cin>>vetor[i].nome;
        cout<<"Informe o código do produto: "<<endl;
        cin>>vetor[i].cod;
        cout<<"Informe o preço do produto: "<<endl;
        cin>>vetor[i].preco;
    }
    cout<<"\nInforme o código para pesquisar."<<endl;
    cin>>pesqCOD;
    this->localizaProd(vetor, qtd, pesqCOD);
    cout<<"O preço desse produto é: "<<this->retornaPreco(vetor, this->localizaProd(vetor, qtd, pesqCOD));
}

int cProduto::localizaProd(sProd *vetor, int qtd, int pesqCOD){
    for(int i=0;i<qtd;i++){
        if(pesqCOD == vetor[i].cod){
            return i;
        }
    }
}

float cProduto::retornaPreco(sProd *vetor, int i){
    return vetor[i].preco;
}