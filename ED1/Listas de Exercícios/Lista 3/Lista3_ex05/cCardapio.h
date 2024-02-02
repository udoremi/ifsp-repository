/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cCardapio.h
 * Author: doremi
 *
 * Created on September 16, 2023, 5:02 PM
 */

#ifndef CCARDAPIO_H
#define CCARDAPIO_H

class cCardapio {
public:
    cCardapio();
    cCardapio(const cCardapio& orig);
    virtual ~cCardapio();
    
    void menu();
    void lerDados();
    float mostraPreco(float precototal);
    
private:

};

#endif /* CCARDAPIO_H */

