/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cCardapio.cpp
 * Author: doremi
 * 
 * Created on September 16, 2023, 5:02 PM
 */

#include "cCardapio.h"
#include <iostream>

using namespace std;

cCardapio::cCardapio() {
}

cCardapio::cCardapio(const cCardapio& orig) {
}

cCardapio::~cCardapio() {
}

void cCardapio::menu(){
    
    cout<<"         CARDÁPIO "<<endl;
    cout<<"Especificação - Código - Preço"<<endl;
    cout<<"Cachorro quente  100 -- 1,70"<<endl<<"Bauru simples -- 101 -- 2,30"<<endl<<
            "Bauru com ovo -- 102 -- 2,60"<<endl<<"Hambúrger    --  103 -- 2,40"<<endl<<
            "Cheeseburguer -- 104 -- 2,50"<<endl<<"Refrigerante --  105 -- 1,00"<<endl;
    
    this->lerDados();
    
}

void cCardapio::lerDados(){
    
    int cod=1, qtd=0;
    float preco=0.0, precototal=0.0;
    
    while(cod!=0){
        cout<<"Digite o código do produto ou 0 para terminar: "<<endl;
        cin>>cod;
        
        if(cod == 100){
        cout<<"\nProduto escolhido: Cachorro quente."<<endl<<"Qual a quantidade desejada?"<<endl;
        cin>>qtd;
        preco = qtd * 1.70;
        precototal += preco;
    }else{
        if(cod==101){
            cout<<"\nProduto escolhido: Bauru simples."<<endl<<"Qual a quantidade desejada?"<<endl;
            cin>>qtd;
            preco = qtd * 2.30;
            precototal += preco;
        } else{
            if(cod==102){
                cout<<"\nProduto escolhido: Bauru com ovo."<<endl<<"Qual a quantidade desejada?"<<endl;
                cin>>qtd;
                preco = qtd * 2.60;
                precototal += preco;
            } else{
                if(cod==103){
                    cout<<"\nProduto escolhido: Hámburguer."<<endl<<"Qual a quantidade desejada?"<<endl;
                    cin>>qtd;
                    preco = qtd * 2.40;
                    precototal += preco;
                } else{
                    if(cod==104){
                        cout<<"\nProduto escolhido: Cheeseburguer."<<endl<<"Qual a quantidade desejada?"<<endl;
                        cin>>qtd;
                        preco = qtd * 2.50;
                        precototal += preco;
                    } else{
                        if(cod==105){
                            cout<<"\nProduto escolhido: Refrigerante."<<endl<<"Qual a quantidade desejada?"<<endl;
                            cin>>qtd;
                            preco = qtd;
                            precototal += preco;
                        }
                    }
                }
            }
        }
    }
    
    }
    cout<<"\nO valor a pagar  é: "<<this->mostraPreco(precototal)<<" reais";
}

float cCardapio::mostraPreco(float precototal){
    return precototal;
}