/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cNotas.h
 * Author: doremi
 *
 * Created on September 16, 2023, 5:49 PM
 */

#ifndef CNOTAS_H
#define CNOTAS_H

class cNotas {
public:
    cNotas();
    cNotas(const cNotas& orig);
    virtual ~cNotas();
    
    void lerDados();
    float mediaA(float n1, float n2, float n3);
    float mediaP(float n1, float n2, float n3);
    
private:

};

#endif /* CNOTAS_H */

