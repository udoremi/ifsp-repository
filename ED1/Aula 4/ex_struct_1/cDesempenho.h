/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cDesempenho.h
 * Author: aluno
 *
 * Created on 18 de agosto de 2023, 11:25
 */

#ifndef CDESEMPENHO_H
#define CDESEMPENHO_H
#include <iostream>

using namespace std;

struct dados{
    string nome, matricula;
    float nota[2];
};

class cDesempenho {
    
public:
    cDesempenho();
    cDesempenho(const cDesempenho& orig);
    virtual ~cDesempenho();
    
    void lerDados();
    
private:

};

#endif /* CDESEMPENHO_H */

