algoritmo "Salário"
//Faça um programa que receba o código correspondente ao cargo de um
//funcionário e seu salário atual e mostre o cargo, o valor do aumento
//e seu novo salário. Os cargos estão na tabela a seguir

//código             cargo            aumento
//1               escrituário            50%
//2               secretário             35%
//3                  caixa               20%
//4                 gerente              10%
//5                 diretor              0%
//obs: caso seja digitado um código que não está na lista, deve ser
// mostrado a mensagem: "código inválido"
var
cod:inteiro
salario:real
inicio
escreva("Informe o código de 1 a 5: ")
leia(cod)

escreva("Informe o salário: ")
leia(salario)

se(cod=1)entao
   escreval("cargo: escrituário")
   escreval("O aumento é: ", (salario * 50/100))
   escreva("O salário final é: ",(salario + salario * 50/100))
 senao
   se(cod=2)entao
     escreval("cargo: secretário")
     escreval("O aumento é: ", (salario * 35/100))
     escreva("O salário final é: ",(salario + salario * 35/100))
  senao
    se(cod=3)entao
      escreval("cargo: caixa")
      escreval("O aumento é: ", (salario * 20/100))
      escreva("O salário final é: ",(salario + salario * 20/100))
   senao
     se(cod=4)entao
       escreval("cargo: gerente")
       escreval("O aumento é: ", (salario * 10/100))
       escreva("O salário final é: ",(salario + salario * 10/100))
    senao
       se(cod=5)entao
         escreval("cargo: diretor")
         escreval("O aumento é: ", (salario * 0/100))
         escreva("O salário final é: ",(salario + salario * 0/100))
      senao
      escreva( "Código Inválido")
fimse
  fimse
    fimse
      fimse
        fimse

fimalgoritmo
