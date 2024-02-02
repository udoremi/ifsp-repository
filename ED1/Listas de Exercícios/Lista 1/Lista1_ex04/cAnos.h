/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cAnos.h
 * Author: doremi
 *
 * Created on September 5, 2023, 5:40 PM
 */

#ifndef CANOS_H
#define CANOS_H

class cAnos {
public:
    cAnos();
    cAnos(const cAnos& orig);
    virtual ~cAnos();
    
    void lerDados();
    int mostrarAnos(int dias);
    
private:

};

#endif /* CANOS_H */

