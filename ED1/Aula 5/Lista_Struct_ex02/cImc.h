/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cImc.h
 * Author: aluno
 *
 * Created on 25 de agosto de 2023, 10:26
 */

#ifndef CIMC_H
#define CIMC_H
#include <iostream>

using namespace std;

struct sImc{
    string nome;
    int cpf;
    float altura, peso;
};

class cImc {
public:
    cImc();
    cImc(const cImc& orig);
    virtual ~cImc();
    
    void lerDados();
    float calcIMC(sImc *vetor, int i);
    int localizaAluno(sImc *vetor, int pesqCPF, int qtde);
    
private:

};

#endif /* CIMC_H */

