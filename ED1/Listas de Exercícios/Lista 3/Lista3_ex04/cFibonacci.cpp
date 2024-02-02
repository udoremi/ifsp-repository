/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cFibonacci.cpp
 * Author: doremi
 * 
 * Created on September 16, 2023, 4:22 PM
 */

#include "cFibonacci.h"
#include <iostream>

using namespace std;

cFibonacci::cFibonacci() {
}

cFibonacci::cFibonacci(const cFibonacci& orig) {
}

cFibonacci::~cFibonacci() {
}

void cFibonacci::mostraSeq(){
    
    int num=1, prox=0, ant=0;
    
    for(int i=1;i<=20;i++){
        cout<<num<<" ";
        prox = num + ant;
        ant = num;
        num = prox;
    }
    
}