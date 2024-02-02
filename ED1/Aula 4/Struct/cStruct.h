/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cStruct.h
 * Author: aluno
 *
 * Created on 18 de agosto de 2023, 10:10
 */

#ifndef CSTRUCT_H
#define CSTRUCT_H

#include <iostream>
using namespace std;

struct dados{
    string nome;
    int idade;
    char sexo;
    float nota [3];
};

class cStruct {
    
   dados vetor[3]; 
   
public:
    cStruct();
    cStruct(const cStruct& orig);
    virtual ~cStruct();

    void lerDados();

        
private:
    
};

#endif /* CSTRUCT_H */

