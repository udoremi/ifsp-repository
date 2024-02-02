/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cVotos.h
 * Author: doremi
 *
 * Created on September 16, 2023, 10:09 AM
 */

#ifndef CVOTOS_H
#define CVOTOS_H

class cVotos {
public:
    cVotos();
    cVotos(const cVotos& orig);
    virtual ~cVotos();
    
    void lerDados();
    void mostraVotos(int c1,int c2, int c3, int c4, int nulo, int branco);
    
private:

};

#endif /* CVOTOS_H */

