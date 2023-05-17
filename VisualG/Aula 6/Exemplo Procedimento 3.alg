algoritmo "Exemplo Procedimento 3"

var
 ano_nasc,ano_atual:inteiro
 nome:literal
inicio
  procedimento calculo_idade(a,b:inteiro;n:literal)
  var
   idade:inteiro
  inicio
    idade <- a - b
  
    escreval(n, ", a sua idade em anos é: ",idade)
  fimprocedimento
  
  escreval("Informe o nome do usuário: ")
  leia(nome)
  escreva("Informe o ano de nascimento: ")
  leia(ano_nasc)
  escreva("Informe o ano atual: ")
  leia(ano_atual)
  
  //chamando o procedimento
  calculo_idade(ano_atual,ano_nasc,nome)
fimalgoritmo
