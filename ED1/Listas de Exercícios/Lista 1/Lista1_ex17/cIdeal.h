/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cIdeal.h
 * Author: doremi
 *
 * Created on September 15, 2023, 6:31 PM
 */

#ifndef CIDEAL_H
#define CIDEAL_H
#include <iostream>

using namespace std;

class cIdeal {
public:
    cIdeal();
    cIdeal(const cIdeal& orig);
    virtual ~cIdeal();
    
    void lerDados();
    void mostraPeso(string sexo, float alt);
    
private:

};

#endif /* CIDEAL_H */

