/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cCardapio.h
 * Author: doremi
 *
 * Created on September 15, 2023, 5:50 PM
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
    void calcPreco(int cod);
    float mostraPreco(float preco);
    
private:

};

#endif /* CCARDAPIO_H */

