/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cDelta.h
 * Author: doremi
 *
 * Created on September 16, 2023, 6:15 PM
 */

#ifndef CDELTA_H
#define CDELTA_H

class cDelta {
public:
    cDelta();
    cDelta(const cDelta& orig);
    virtual ~cDelta();
    
    void lerDados();
    int calcDelta(int a, int b, int c);
    
private:

};

#endif /* CDELTA_H */

