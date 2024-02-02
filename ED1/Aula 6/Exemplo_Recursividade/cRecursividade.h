/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cRecursividade.h
 * Author: aluno
 *
 * Created on 15 de setembro de 2023, 09:25
 */

#ifndef CRECURSIVIDADE_H
#define CRECURSIVIDADE_H

class cRecursividade {
public:
    cRecursividade();
    cRecursividade(const cRecursividade& orig);
    virtual ~cRecursividade();
    
    int fatorial(int a);
    void tabuada(int i, int valor);
    
private:

};

#endif /* CRECURSIVIDADE_H */

