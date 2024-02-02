/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Fila.h
 * Author: doremi
 *
 * Created on 17 de novembro de 2023, 07:22
 */
/*
#ifndef FILA_H
#define FILA_H

struct no{
	int valor;
	struct no *prox;
};

class Fila {
public:
    Fila();
    Fila(const Fila& orig);
    virtual ~Fila();
    
    no *inicio, *aux, *fim;
    void menu();
    void inserir();
    void remover();
    void listar();
    void pesquisar(int valorPesq);
    bool verificar(int valorPesq);
    
private:

};

#endif /* FILA_H */
