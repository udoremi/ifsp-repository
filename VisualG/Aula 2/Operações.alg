algoritmo "Operações"

// A(adição), S(subtração), M(multiplicação), D(divisão)
var
letra:literal
n1,n2:inteiro
resultado:real
inicio
escreval("Digite a operação que você deseja executar: ")
escreval("A: adição")
escreval("S: subtração")
escreval("M: multiplicação")
escreval("D: divisão")
leia(letra)

escreval("Escreva um número: ")
leia(n1)
escreval("Escreva outro número: ")
leia(n2)

se(letra="A")entao
resultado <- n1+n2
  senao
  se(letra="S")entao
    se(n1 >= n2)entao
    resultado <- n1 - n2
    senao
      resultado <- n2-n1
    fimse
  senao
   se(letra="M")entao
   resultado <- n1 * n2
     senao
      se((n1 > 0) e (n2 > 0))entao
        resultado <- n1/n2
          senao
          resultado <- 0
          fimse
       fimse
     fimse
    fimse
    
    escreval ("O resultado da operação é: ", resultado:2:2)
   
fimalgoritmo
