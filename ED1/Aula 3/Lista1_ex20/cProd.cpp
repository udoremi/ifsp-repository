/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cProd.cpp
 * Author: aluno
 * 
 * Created on 11 de agosto de 2023, 09:13
 */

#include "cProd.h"
#include <iostream>

using namespace std;

cProd::cProd() {
}

cProd::cProd(const cProd& orig) {
}

cProd::~cProd() {
}

void cProd::menu(){
    cout<<"Cod do Produto -- Preço"<<endl;
    cout<<"1001 -- 5,32"<<endl;
    cout<<"1324 -- 6,45"<<endl;
    cout<<"6548 -- 2,37"<<endl;
    cout<<"987 -- 5,32"<<endl;
    cout<<"7623 -- 6,45"<<endl;
}

void cProd::lerCod(){
    
    char opcao='s';
    int cod=0, qtd=0;
    float vendatotal=0.0;
    
    while (opcao=='s'){
        this->menu();
        cout<<"Digite o código do produto: "<<endl;
        cin>>cod;
        cout<<"Digite a quantidade: "<<endl;
        cin>>qtd;
        
        vendatotal += this->calcPreco(cod, qtd);
                
        cout<<"Deseja continuar? s para sim e n para não: "<<endl;
        cin>>opcao;
    }
    cout<<vendatotal;
}
    
    float cProd::calcPreco(int cod, int qtd){
        
        float venda=0.0;
        
        if(cod==1001){
            venda += qtd*5.32;
        }
        else if(cod==1324){
            venda += qtd*6.45;
        }
        else if(cod==6548){
            venda += qtd*2.37;
        }
        else if(cod==987){
            venda += qtd*5.32;
        }
        else if(cod==7623){
            venda += qtd*6.45;
        }
        else{
            cout<<"Código Inválido"<<endl;
        }
        return venda;
    }
