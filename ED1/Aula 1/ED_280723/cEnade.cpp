/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cEnade.cpp
 * Author: aluno
 * 
 * Created on 28 de julho de 2023, 11:25
 */

#include "cEnade.h"
#include <iostream>

using namespace std;

cEnade::cEnade() {
}

cEnade::cEnade(const cEnade& orig) {
}

cEnade::~cEnade() {
}

void cEnade::preenchermatriz(){
    int i,j,c;
    
    c = 0;
           
         for(i=0;i<3;i++){
             for(j=0;j<4;j++){
                 c++;
                 this->mat[i][j] = c;
                        
             }
        }
    
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            c = this->mat[2-i][3-j];
            this->mat[i][j] = c;
        }
    }
}

void cEnade::imprimirmatriz(){
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<this->mat[i][j]<<" - ";
            
        }
        cout<<endl;
    }
}
