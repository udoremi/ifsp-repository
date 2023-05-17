algoritmo "semnome"
// faça um algoritmo que solicite N numeros inteiros até que o
// zero seja digitado
//ao final o algoritmo deve informar o maior e o menor número digitado
var
 num, maior, menor:inteiro
 flag:inteiro
inicio
 num <- 1
 flag <- 1
 enquanto num <> 0 faca
   escreval("Informe um número inteiro: ")
   leia (num)
   
     se (flag = 1)entao
     maior <- num
     menor <- num
     flag <- 2
       senao
        se(num>maior)entao
      maior <- num
         se (num < menor) e (num <> 0)entao
      menor <- num
         fimse
        fimse
       fimse
 fimenquanto
   escreval("O maior número digitado foi: ", maior)
   escreval("O menor número digitado foi: ", menor)
   
fimalgoritmo
