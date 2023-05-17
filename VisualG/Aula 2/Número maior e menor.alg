algoritmo "semnome"
//faça um algoritmo que solicite N números inteiros.
// Ao final, o algoritmo deve informar o maior e o menor número digitado
var
numero, quantidade, contador, max, min:inteiro
inicio

 escreva("Informe a quantidade de números: ")
 leia(quantidade)

   para contador <- 1 ate quantidade faca
    escreval("Digite um número: ")
     leia(numero)
       se(contador = 1)entao
         max <- numero
         min <- numero
           senao
             se (numero > max) entao
              max <- numero
             fimse
             se (numero < min)entao
              min <- numero
             fimse
        fimse
   fimpara
  
  
 escreval("O maior número digitado foi: ",max)
 escreval("O menor número digitado foi: ",min)
 
 
fimalgoritmo
