/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cProduto.h
 * Author: doremi
 *
 * Created on September 20, 2023, 3:23 PM
 */

#ifndef CPRODUTO_H
#define CPRODUTO_H
#include <iostream>

using namespace std;

struct sProd{
    string nome;
    int cod;
    float preco;
};

class cProduto {
public:
    cProduto();
    cProduto(const cProduto& orig);
    virtual ~cProduto();
    
    void lerDados();
    int localizaProd(sProd *vetor, int qtd, int pesqCOD);
    float retornaPreco(sProd *vetor, int i);
    
private:

};

#endif /* CPRODUTO_H */

