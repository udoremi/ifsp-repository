/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cContaBancaria.h
 * Author: doremi
 *
 * Created on September 20, 2023, 5:22 PM
 */

#ifndef CCONTABANCARIA_H
#define CCONTABANCARIA_H
#include <iostream>

using namespace std;

struct sConta{
    string nome;
    int cpf;
    float saldo;
};

class cContaBancaria {
public:
    
    sConta vetor[3];
    
    cContaBancaria();
    cContaBancaria(const cContaBancaria& orig);
    virtual ~cContaBancaria();
    
    void lerDados();
    void cadastro();
    void saque();
    void deposito();
    int pesqCliente(int cpf);
    void imprimirCliente(int i);
    
private:

};

#endif /* CCONTABANCARIA_H */

