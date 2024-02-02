/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cValores.h
 * Author: doremi
 *
 * Created on September 9, 2023, 3:32 PM
 */

#ifndef CVALORES_H
#define CVALORES_H

class cValores {
public:
    cValores();
    cValores(const cValores& orig);
    virtual ~cValores();
    
    void lerDados();
    void mostrarValores(int a, int b, int c);
    int mostrarMaior(int a, int b, int c);
    
private:

};

#endif /* CVALORES_H */

