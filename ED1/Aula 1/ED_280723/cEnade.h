/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cEnade.h
 * Author: aluno
 *
 * Created on 28 de julho de 2023, 11:25
 */

#ifndef CENADE_H
#define CENADE_H

class cEnade {
public:
    
    //Atributos
    int mat[3][4];
    
    //Métodos
    cEnade();
    cEnade(const cEnade& orig);
    virtual ~cEnade();
    
    void preenchermatriz();
    void imprimirmatriz();
    
private:

};

#endif /* CENADE_H */

