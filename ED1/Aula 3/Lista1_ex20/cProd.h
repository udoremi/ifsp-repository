/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cProd.h
 * Author: aluno
 *
 * Created on 11 de agosto de 2023, 09:13
 */

#ifndef CPROD_H
#define CPROD_H

class cProd {
public:
    cProd();
    cProd(const cProd& orig);
    virtual ~cProd();
    
    void menu();
    void lerCod();
    float calcPreco(int cod, int qtd);
    
private:

};

#endif /* CPROD_H */

