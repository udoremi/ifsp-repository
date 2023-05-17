algoritmo "Exemplo Função 3"

var
 horas_trabalhadas:inteiro
 valor_hora:real
inicio
  funcao calculo_salario(a:inteiro;v:real):real
  var
   salario:real
  inicio
    salario <- a * v
    retorne salario
  fimfuncao
  escreva("Informe o número de horas trabalhadas: ")
  leia(horas_trabalhadas)
  escreva("Informe o valor da hora: ")
  leia(valor_hora)
  
  //chamando a funcao calculo_salario(a:inteiro;v:real)
  escreval("O salário é: R$ ",calculo_salario(horas_trabalhadas,valor_hora))
fimalgoritmo
