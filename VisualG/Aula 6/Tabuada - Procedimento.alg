algoritmo "Tabuada - Procedimento"

var
  num:inteiro
inicio
  procedimento tabuada(num:inteiro)
  var
  contador, result:inteiro
  inicio

    para contador <- 1 ate 10 faca
     result <- num * contador
     escreval(num, " x ",contador, " = ", result)
    fimpara
  fimprocedimento
  
    escreva("Digite um número para calcular a tabuada: ")
    leia(num)
  tabuada(num)

fimalgoritmo
