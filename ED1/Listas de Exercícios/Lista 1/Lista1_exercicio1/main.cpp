/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: aluno
 *
 * Created on 4 de agosto de 2023, 09:18
 */

#include <cstdlib>

#include "cPlano.h"
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    cPlano obj;
    obj.lerPontos();
    cout<<obj.calcularDE();
    
    return 0;
}

