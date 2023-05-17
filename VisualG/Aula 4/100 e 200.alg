algoritmo "semnome"
//faça um algoritmo que leia vários números e informe quantos desses números
// entre 100 e 200 foram digitados
//Quando o valor zero for lido o algoritmo deverá parar a execução
var
num, cont:inteiro
inicio
num <- 1
cont <- 0

  enquanto num <> 0 faca
   escreval("Digite um número qualquer ou zero para parar: ")
   leia(num)
     se (num>=100) e (num<=200)entao
       cont <- cont + 1
     fimse
  fimenquanto

escreval ("Total: ",cont)
fimalgoritmo
