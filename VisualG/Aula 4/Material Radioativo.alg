algoritmo "semnome"
// Um determinado material radioativo perde metade da sua massa a cada 60
// segundos. Dada a massa inicial, em gramas, fazer um programa que determine
// o tempo necessário para que essa massa se torne menor que 0,5g
// Escreva a massa inicial, a massa final e o tempo calculado em segundos
var
massai, massaf:real
segundo:inteiro
inicio
massaf <- 0
escreval("Digite a massa inicial em gramas: ")
leia(massai)

massaf <- massai

  enquanto massaf >= 0.5 faca
       massaf <- massaf / 2
       segundo <- segundo + 60
  fimenquanto

 escreval("A massa inicial digitada foi: ",massai)
 escreval("A massa final é: ",massaf)
 escreval("O tempo calculado foi: ",segundo," s")


fimalgoritmo
