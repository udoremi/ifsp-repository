algoritmo "semnome"
//numero de 1 a 5, mostrar inválido para outros números
//0 termina a execução
var
num:inteiro
inicio
num <- 1

 enquanto num <> 0 faca
 escreval("Digite um número de 1 a 5: ")
leia(num)
   se (num=1)entao
   escreval("O número digitado foi: um")
     senao
      se(num=2)entao
   escreval("O número digitado foi: dois")
        senao
          se(num=3)entao
      escreval("O número digitado foi: três")
           senao
             se(num=4)entao
       escreval("O número digitado foi: quatro")
            senao
              se(num=5)entao
      escreval("O número digitado foi: cinco")
                senao
                  se(num<>0)entao
             escreval("Número Inválido")
                  fimse
              fimse
             fimse
           fimse
         fimse
        fimse
 fimenquanto
 
fimalgoritmo
