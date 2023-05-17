algoritmo "semnome"
//Construir um algoritmo que calcule a média aritmetica de vários valores
//inteiros positivos, lidos externamente. O final da leitura acontecerá
//quando for lido um valor negativo, esse valor negativo não pode estar na media
var
num, soma, cont:inteiro
media:real
inicio

 enquanto num >= 0 faca
   escreval("Digite um número: ")
    leia(num)
      se(num>=0)entao
        cont <- cont + 1
        soma <- soma + num
      fimse
   media <- soma / cont
 fimenquanto
 
escreval("A média final é: ",media)
fimalgoritmo
