/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cBanco.h
 * Author: doremi
 *
 * Created on September 15, 2023, 7:00 PM
 */

#ifndef CBANCO_H
#define CBANCO_H

class cBanco {
public:
    cBanco();
    cBanco(const cBanco& orig);
    virtual ~cBanco();
    
    void lerDados();
    float calcCred(float salmed);
    
private:

};

#endif /* CBANCO_H */

