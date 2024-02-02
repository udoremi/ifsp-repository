/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cAluno.cpp
 * Author: doremi
 * 
 * Created on September 10, 2023, 11:54 AM
 */

#include "cAluno.h"
#include <iostream>

using namespace std;

cAluno::cAluno() {
}

cAluno::cAluno(const cAluno& orig) {
}

cAluno::~cAluno() {
}

void cAluno::lerDados(){
    int cod=0;
    float n1=0, n2=0, n3=0;
    
    cout<<"Digite o código do aluno: "<<endl;
    cin>>cod;
    
    cout<<"Digite a primeira nota do aluno: "<<endl;
    cin>>n1;
    cout<<"Digite a segunda nota do aluno: "<<endl;
    cin>>n2;
    cout<<"Digite a terceira nota do aluno: "<<endl;
    cin>>n3;
    
    cout<<"O código do aluno digitado foi: "<<cod<<endl;
    cout<<"A média ponderada das notas digitadas foi: "<<this->calculaNota(n1,n2,n3);
}


float cAluno::calculaNota(float n1, float n2, float n3){
    float mediapon, maiornota=0;
    maiornota = n1;
    mediapon = ((maiornota*4) + (n2*3) + (n3*3)) / 11;
    
    
    if(n2>n1 && n2 > n3){
        maiornota = n2;
        mediapon = ((maiornota*4) + (n1*3) + (n3*3)) / 11;
    } else{
        if(n3 > n1 && n3 > n2){
            maiornota = n3;
            mediapon = ((maiornota*4) + (n2*3) + (n1*3)) / 11;
        }
    }
    return mediapon;
}