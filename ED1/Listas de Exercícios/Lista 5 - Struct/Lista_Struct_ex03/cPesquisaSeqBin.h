/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cPesquisaSeqBin.h
 * Author: doremi
 *
 * Created on September 19, 2023, 4:48 PM
 */

#ifndef CPESQUISASEQBIN_H
#define CPESQUISASEQBIN_H
#include <iostream>

using namespace std;

struct sPessoa{
    string nome, sexo;
    float alt, peso;
    int cpf;
};

class cPesquisaSeqBin {
public:
    cPesquisaSeqBin();
    cPesquisaSeqBin(const cPesquisaSeqBin& orig);
    virtual ~cPesquisaSeqBin();
    
    void lerDados();
    int localizaPessoa(sPessoa *vetor, int qtd, int pesqCPF);
    float calculaIMC(sPessoa *vetor, int i);
    int PesquisaBinaria (sPessoa *vetor, int qtd);
    
private:

};

#endif /* CPESQUISASEQBIN_H */

