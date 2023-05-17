algoritmo "altura"
 //construir um algoritmo que leia a altura de 20 pessoas
 //o alogirtmo deve calcular e imprimir a média de todas as alturas e
 // quantas pessoas possuem altura maior que 2 metros
var
contador:inteiro
altura, altura2, alturasoma, mediaf, soma:real
inicio

escreval("Vamos calcular a altura de 20 pessoas")

 para contador <- 1 ate 20 faca
  escreval("Informe a altura: ",contador, ": ")
   leia(altura)
     alturasoma <- altura + alturasoma
  
      se(altura>2)entao
        altura2 <- altura2 + 1
      fimse
 fimpara
 
   mediaf <- alturasoma / 20
        
  escreval("A altura média é: ",mediaf)
  escreval("A quantidade de pessoas com altura maior que 2 metros é: ",altura2)

fimalgoritmo
