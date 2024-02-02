/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   exLista.h
 * Author: aluno
 *
 * Created on 6 de outubro de 2023, 09:33
 */

#ifndef EXLISTA_H
#define EXLISTA_H
#include <iostream>


struct no{
    int valor;
    struct no *prox=NULL;
};


class exLista {
public:
    exLista();
    exLista(const exLista& orig);
    virtual ~exLista();
    
    no *inicio, *fim, *aux;
    void menu();
    void inserir();
    void remover();
    void listar();
    void pesquisar();
    
    
private:

};

#endif /* EXLISTA_H */

