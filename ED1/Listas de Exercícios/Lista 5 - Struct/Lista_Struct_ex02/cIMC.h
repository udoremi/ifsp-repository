/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cIMC.h
 * Author: doremi
 *
 * Created on September 17, 2023, 6:46 PM
 */

#ifndef CIMC_H
#define CIMC_H
#include <iostream>

using namespace std;

struct sPessoa{
    string nome, sexo;
    float alt, peso;
    int cpf;
};

class cIMC {
public:
    cIMC();
    cIMC(const cIMC& orig);
    virtual ~cIMC();
    
    void lerDados();
    int localizaPessoa(sPessoa *vetor, int qtd, int pesqCPF);
    float calculaIMC(sPessoa *vetor, int i);
    //void Bolha(sPessoa *vetor, int qtd);
    
private:

};

#endif /* CIMC_H */

