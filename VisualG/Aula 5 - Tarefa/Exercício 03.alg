algoritmo "Exercício 03"

var
  valor:vetor[1..50] de real
  contador:inteiro
inicio

   para contador <- 1 ate 50 faca
    escreva("Digite o",contador,"º valor: ")
    leia(valor[contador])
   fimpara
    
      para contador <- 1 ate 50 faca
       se(contador mod 2=0)entao
        valor[contador] <- valor[contador] * 1.02
        senao
        valor[contador] <- valor[contador] * 1.05
       fimse
       escreval("O valor",contador," final é: ",valor[contador])
      fimpara

fimalgoritmo
