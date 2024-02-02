/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cExp.h
 * Author: aluno
 *
 * Created on 4 de agosto de 2023, 11:02
 */

#ifndef CEXP_H
#define CEXP_H

class cExp {
public:
    
    cExp();
    cExp(const cExp& orig);
    virtual ~cExp();
    
    void lerNum();
    float calc(int a, int b, int c);
    
private:

};

#endif /* CEXP_H */

