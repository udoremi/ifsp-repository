/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cMatricula.h
 * Author: doremi
 *
 * Created on September 17, 2023, 1:57 PM
 */

#ifndef CMATRICULA_H
#define CMATRICULA_H
#include <iostream>
using namespace std;

struct sAluno{
    string nome;
    int matricula;
    float n1,n2, media;
};

class cMatricula {
public:
    cMatricula();
    cMatricula(const cMatricula& orig);
    virtual ~cMatricula();
    
    void lerDados();
    void mostraDados(sAluno *vetor, int qtd);
    //float calcMedia(sAluno *vetor, int qtd);
    
    
private:

};

#endif /* CMATRICULA_H */

