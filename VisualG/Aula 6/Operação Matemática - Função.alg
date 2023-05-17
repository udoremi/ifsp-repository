algoritmo "Operação matemática"

var
 n1,n2:inteiro
 operacao:literal
 result:real
inicio
  funcao operacao_matematica(a,b:inteiro):real
  var
  inicio
  se(operacao="+")entao
   result <- a + b
    senao
     se(operacao="-")entao
      result <- a - b
       senao
        se(operacao="*")entao
         result <- a * b
          senao
           se(operacao="/")entao
            result <- a / b
           fimse
        fimse
     fimse
  fimse
  
    retorne result
  fimfuncao
  escreval("Digite o primeiro número: ")
  leia(n1)
  escreval("Digite o segundo número: ")
  leia(n2)
  
  escreval("Digite a operação desejada: ")
  escreval("(+) Adição")
  escreval("(-) Subtração")
  escreval("(*) Multiplicação")
  escreval("(/) Divisão")
  leia(operacao)

   escreval("O resultado é: ",operacao_matematica(n1,n2))
fimalgoritmo
