/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cAprovacao.h
 * Author: doremi
 *
 * Created on September 8, 2023, 5:33 PM
 */

#ifndef CAPROVACAO_H
#define CAPROVACAO_H

class cAprovacao {
public:
    cAprovacao();
    cAprovacao(const cAprovacao& orig);
    virtual ~cAprovacao();
    
    void lerDados();
    float notaFinal(float n1, float n2, float n3);
    
private:

};

#endif /* CAPROVACAO_H */

