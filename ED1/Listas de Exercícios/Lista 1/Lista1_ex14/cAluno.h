/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cAluno.h
 * Author: doremi
 *
 * Created on September 10, 2023, 11:54 AM
 */

#ifndef CALUNO_H
#define CALUNO_H

class cAluno {
public:
    cAluno();
    cAluno(const cAluno& orig);
    virtual ~cAluno();
    
    void lerDados();
    float calculaNota(float n1, float n2, float n3);
    
private:

};

#endif /* CALUNO_H */

