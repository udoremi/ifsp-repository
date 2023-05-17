algoritmo "Exercício 04"

var
  num:vetor[1..5,1..5] de real
  linha,coluna:inteiro
inicio

  para linha <- 1 ate 5 faca
    para coluna <- 1 ate 5 faca
      escreva("Informe o número da linha",linha," coluna",coluna,": ")
      leia(num[linha,coluna])
    fimpara
  fimpara
  
       para linha <- 1 ate 5 faca
         para coluna <- 1 ate 5 faca
           escreval("O número da linha ",linha," coluna",coluna," é: ",num[linha,coluna])
           escreval()
         fimpara
       fimpara
       
             para linha <- 1 ate 5 faca
               para coluna <- 1 ate 5 faca
                 num[linha,coluna] <- num[linha,coluna] ^ 3
                 escreval("O número da linha ",linha," coluna",coluna," elevado a 3 é: ",num[linha,coluna])
                 escreval()
               fimpara
             fimpara
      
fimalgoritmo
