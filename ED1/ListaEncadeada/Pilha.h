/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Pilha.h
 * Author: doremi
 *
 * Created on 17 de novembro de 2023, 07:22
 */

#ifndef PILHA_H
#define PILHA_H

struct no{
	int valor;
	struct no *ant;
};

class Pilha {
public:
    Pilha();
    Pilha(const Pilha& orig);
    virtual ~Pilha();
    
    no *aux, *topo;
    void menu();
    void inserir();
    void remover();
    void listar();
    void calcMeio();
    struct no* apresentarMeio(int meio);
    
private:

};

#endif /* PILHA_H */

