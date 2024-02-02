/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cFabrica.h
 * Author: doremi
 *
 * Created on September 7, 2023, 5:45 PM
 */

#ifndef CFABRICA_H
#define CFABRICA_H

class cFabrica {
public:
    cFabrica();
    cFabrica(const cFabrica& orig);
    virtual ~cFabrica();
    
    void lerDados();
    int mostrarHoras(int seg);
    
private:

};

#endif /* CFABRICA_H */

