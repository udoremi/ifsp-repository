algoritmo "Exemplo Vetor"

var
  nota:vetor[1..3] de inteiro
  contador:inteiro
inicio

      para contador <- 1 ate 3 faca
       escreval("Informe a nota ",contador,": ")
       leia(nota[contador])
      fimpara
  
             para contador <- 1 ate 3 faca
               escreval("A nota",contador," é: ",nota[contador])
             fimpara
fimalgoritmo
