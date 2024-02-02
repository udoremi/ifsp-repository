/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cCarros.h
 * Author: doremi
 *
 * Created on September 8, 2023, 4:50 PM
 */

#ifndef CCARROS_H
#define CCARROS_H

class cCarros {
public:
    cCarros();
    cCarros(const cCarros& orig);
    virtual ~cCarros();
    
    void lerDados();
    float precoFinal(float precofab);
    
private:

};

#endif /* CCARROS_H */

