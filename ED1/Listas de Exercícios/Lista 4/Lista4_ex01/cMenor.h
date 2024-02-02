/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cMenor.h
 * Author: doremi
 *
 * Created on September 16, 2023, 5:28 PM
 */

#ifndef CMENOR_H
#define CMENOR_H

class cMenor {
public:
    cMenor();
    cMenor(const cMenor& orig);
    virtual ~cMenor();
    
    void lerDados();
    int mostraMenor(int n1, int n2);
    
private:

};

#endif /* CMENOR_H */

