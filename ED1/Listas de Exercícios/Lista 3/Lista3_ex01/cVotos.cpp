/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cVotos.cpp
 * Author: doremi
 * 
 * Created on September 16, 2023, 10:09 AM
 */

#include "cVotos.h"
#include <iostream>

using namespace std;

cVotos::cVotos() {
}

cVotos::cVotos(const cVotos& orig) {
}

cVotos::~cVotos() {
}

void cVotos::lerDados(){
    
    int c=1,c1=0,c2=0,c3=0,c4=0,nulo=0,branco=0;
    
    cout<<"Digite 0 para terminar o registro."<<endl;
    while(c!=0){
        
        cout<<"Informe o número do candidato desejado: "<<endl;
        cin>>c;
        
        if(c==1){
            c1++;
        } else{
            if(c==2){
                c2++;
            } else{
                if(c==3){
                    c3++;
                } else{
                    if(c==4){
                        c4++;
                    } else{
                        if(c==5){
                            nulo++;
                        } else{
                            if(c==6){
                                branco++;
                            }
                        }
                    }
                }
            }
        }
    }
    this->mostraVotos(c1,c2,c3,c4,nulo,branco);
}

void cVotos::mostraVotos(int c1,int c2, int c3, int c4, int nulo, int branco){
    float total = c1+c2+c3+c4+nulo+branco;
    cout<<"TOTAL DE VOTOS: "<<total<<" - "<<total*(100/total)<<"%"<<endl;
    cout<<"Candidato 1 -- "<<c1<<" - "<<c1*(100/total)<<"%"<<endl;
    cout<<"Candidato 2 -- "<<c2<<" - "<<c2*(100/total)<<"%"<<endl;
    cout<<"Candidato 3 -- "<<c3<<" - "<<c3*(100/total)<<"%"<<endl;
    cout<<"Candidato 4 -- "<<c4<<" - "<<c4*(100/total)<<"%"<<endl;
    cout<<"Votos nulos: -- "<<nulo<<" - "<<nulo*(100/total)<<"%"<<endl;
    cout<<"Votos brancos -- "<<branco<<" - "<<branco*(100/total)<<"%"<<endl;
}