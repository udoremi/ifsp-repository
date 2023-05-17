//Você está fazendo um trabalho de classificação do solo. Após colher
// uma amostra e verificar a quantidade de pontos de água presente
// nela, classificou a amostra em:

algoritmo "Classificação de solo"

var
 amostra:real
inicio
 escreva("Informe a quantidade de pontos de água: ")
 leia(amostra)
 
se(amostra<=10)entao
  escreval("Amostra de Solo Rochosa")
  senao
   se((amostra>10) e (amostra<=40))entao
   escreval("Amostra de Solo Firme")
    senao
     se((amostra>40) e (amostra<=80))entao
   escreval("Amostra de Solo Pantanosa")
      senao
   escreval("Amostra de Quantidade Inválida")
fimse
    fimse
      fimse
fimalgoritmo
