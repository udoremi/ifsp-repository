algoritmo "Exemplo Função"

var

inicio
  funcao calculo_idade():inteiro
  var
  ano_nasc, ano_atual, idade:inteiro
  inicio
    escreva("Informe a data de nascimento: ")
    leia(ano_nasc)
    escreva("Informe o ano atual: ")
    leia(ano_atual)
    
    idade <- ano_atual - ano_nasc
    
    retorne idade
  fimfuncao
  //chamando a função calculo_idade()
  escreval("A idade em anos é: ",calculo_idade())
fimalgoritmo
