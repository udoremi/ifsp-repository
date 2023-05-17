algoritmo "Exercício 05"

var
  num:vetor[1..6,1..6] de real
  linha,coluna:inteiro
inicio
  para linha <- 1 ate 6 faca
    para coluna <- 1 ate 6 faca
      escreva("Informe o número da linha",linha," coluna",coluna,": ")
      leia(num[linha,coluna])
    fimpara
  fimpara
  
        para linha <- 1 ate 6 faca
         para coluna <- 1 ate 6 faca
         
           se(linha=coluna)entao
            escreva(num[linha,coluna])

           fimse
         fimpara
       fimpara
fimalgoritmo
