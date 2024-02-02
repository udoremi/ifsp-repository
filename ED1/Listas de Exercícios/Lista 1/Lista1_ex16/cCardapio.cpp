/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cCardapio.cpp
 * Author: doremi
 * 
 * Created on September 15, 2023, 5:50 PM
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
    cout<<"Cachorro quente  100 -- 1,20"<<endl<<"Bauru simples -- 101 -- 1,30"<<endl<<
            "Bauru com ovo -- 102 -- 1,50"<<endl<<"Hambúrger    --  103 -- 1,20"<<endl<<
            "Cheeseburguer -- 104 -- 1,30"<<endl<<"Refrigerante --  105 -- 1,00"<<endl;
    
    this->lerDados();
    
}

void cCardapio::lerDados(){
    int cod;
    
    cout<<"\nDigite o código do produto desejado: "<<endl;
    cin>>cod;
    
    this->calcPreco(cod);
}

void cCardapio::calcPreco(int cod){
    int qtd;
    float preco;
    
    if(cod == 100){
        cout<<"\nProduto escolhido: Cachorro quente."<<endl<<"Qual a quantidade desejada?"<<endl;
        cin>>qtd;
        preco = qtd * 1.20;
    }else{
        if(cod==101){
            cout<<"\nProduto escolhido: Bauru simples."<<endl<<"Qual a quantidade desejada?"<<endl;
            cin>>qtd;
            preco = qtd * 1.30;
        } else{
            if(cod==102){
                cout<<"\nProduto escolhido: Bauru com ovo."<<endl<<"Qual a quantidade desejada?"<<endl;
                cin>>qtd;
                preco = qtd * 1.50;
            } else{
                if(cod==103){
                    cout<<"\nProduto escolhido: Hámburguer."<<endl<<"Qual a quantidade desejada?"<<endl;
                    cin>>qtd;
                    preco = qtd * 1.20;
                } else{
                    if(cod==104){
                        cout<<"\nProduto escolhido: Cheeseburguer."<<endl<<"Qual a quantidade desejada?"<<endl;
                        cin>>qtd;
                        preco = qtd * 1.30;
                    } else{
                        if(cod==105){
                            cout<<"\nProduto escolhido: Refrigerante."<<endl<<"Qual a quantidade desejada?"<<endl;
                            cin>>qtd;
                            preco = qtd;
                        }else{
                            cout<<"Código Inválido.";
                        }
                    }
                }
            }
        }
    }
    
    
    cout<<"\nO preço final é: "<<this->mostraPreco(preco)<<" reais";
}

float cCardapio::mostraPreco(float preco){
    return preco;
}