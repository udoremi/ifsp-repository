algoritmo "Exercício 02"

var
 numero:vetor[1..10] de inteiro
 contador:inteiro
inicio
  para contador <- 1 ate 10 faca
    escreva("Digite o número",contador,": ")
    leia(numero[contador])
  fimpara

    para contador <- 1 ate 10 faca
      escreva(numero[contador])
    fimpara
      
        para contador <- 10 ate 1 passo -1 faca
          escreva(numero[contador])
        fimpara
      
fimalgoritmo
