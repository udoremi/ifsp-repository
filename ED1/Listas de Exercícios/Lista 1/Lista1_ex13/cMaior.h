/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cMaior.h
 * Author: doremi
 *
 * Created on September 10, 2023, 10:32 AM
 */

#ifndef CMAIOR_H
#define CMAIOR_H

class cMaior {
public:
    cMaior();
    cMaior(const cMaior& orig);
    virtual ~cMaior();
    
    void lerDados();
    float mostraMaior(float n1, float n2, float n3);
    
private:

};

#endif /* CMAIOR_H */

