/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cVolume.h
 * Author: doremi
 *
 * Created on September 17, 2023, 11:17 AM
 */

#ifndef CVOLUME_H
#define CVOLUME_H

class cVolume {
public:
    cVolume();
    cVolume(const cVolume& orig);
    virtual ~cVolume();
    
    void lerDados();
    float calcVol(float raio);
    
private:

};

#endif /* CVOLUME_H */

