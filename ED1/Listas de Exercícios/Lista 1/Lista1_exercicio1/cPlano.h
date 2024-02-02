/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cPlano.h
 * Author: aluno
 *
 * Created on 4 de agosto de 2023, 09:35
 */

#ifndef CPLANO_H
#define CPLANO_H

class cPlano {
public:
    
    int x1,x2,y1,y2;
    
    cPlano();
    cPlano(const cPlano& orig);
    virtual ~cPlano();
    
    void lerPontos();
    float calcularDE();
    
private:

};

#endif /* CPLANO_H */

