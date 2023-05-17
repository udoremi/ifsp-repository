algoritmo "Exercício 01"

var
  numero:vetor[1..10] de inteiro
  contador:inteiro
inicio
  para contador <- 1 ate 10 faca
    escreval("Digite o número",contador,": ")
    leia(numero[contador])
  fimpara
  
     para contador <- 1 ate 10 faca
       escreval("O número",contador," é: ",numero[contador])
     fimpara
fimalgoritmo
