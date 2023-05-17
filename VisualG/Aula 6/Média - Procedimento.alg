algoritmo "Média de 4 números"

var
  n1,n2,n3,n4:real
inicio
  procedimento tabuada_media(x,y,z,h:real)
  var
  media:real
  inicio
  media <- (x+y+z+h) / 4
  escreval("A média é: ",media)

  fimprocedimento
 escreva("Informe o valor de n1: ")
  leia(n1)
  escreva("Informe o valor de n2: ")
  leia(n2)
  escreva("Informe o valor de n3: ")
  leia(n3)
  escreva("Informe o valor de n4: ")
  leia(n4)
  
  tabuada_media(n1,n2,n3,n4:real)
fimalgoritmo
