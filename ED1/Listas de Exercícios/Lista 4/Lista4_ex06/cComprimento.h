/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cComprimento.h
 * Author: doremi
 *
 * Created on September 17, 2023, 11:44 AM
 */

#ifndef CCOMPRIMENTO_H
#define CCOMPRIMENTO_H

class cComprimento {
public:
    cComprimento();
    cComprimento(const cComprimento& orig);
    virtual ~cComprimento();
    
    void lerDados();
    void verifTri(float x, float y, float z);
    
private:

};

#endif /* CCOMPRIMENTO_H */

