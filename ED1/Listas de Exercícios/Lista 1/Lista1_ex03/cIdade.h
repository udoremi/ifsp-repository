/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cIdade.h
 * Author: doremi
 *
 * Created on September 4, 2023, 2:35 PM
 */

#ifndef CIDADE_H
#define CIDADE_H

class cIdade {
public:
    cIdade();
    cIdade(const cIdade& orig);
    virtual ~cIdade();
    
    void lerDados();
    int mostrarDias(int ano, int mes, int dias);
    
private:

};

#endif /* CIDADE_H */

