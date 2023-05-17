algoritmo "semnome"

var
 num, soma:inteiro
inicio
 enquanto num < 1000 faca
     se (num mod 2 = 0)entao
       soma <- soma + num
     fimse
     num <- num + 1
   escreval("O resultado da soma dos números pares é: ", soma)
 fimenquanto

fimalgoritmo
