'''Construa um algoritmo que determine quanto será gasto para encher o tanque de um carro.
 O usuário fornecerá os seguintes dados: Tipo de carro (TC) (G – gasolina ou A – álcool) e Capacidade do tanque (CT), em litros.
Após a escolha do tipo de veículo e da capacidade do tanque, o sistema irá imprimir uma mensagem falando o tipo do carro
(Gasolina ou álcool) e pedirá para o usuário informar o valor do preço do litro do combustível.
Como saída, será informado para o usuário, o valor, em reais, do preço de se encher tanque de combustível.'''

tipocar = ""
litros = 0.0
precol = 0.0

tipocar = input("Digite o tipo de carro usando A para álcool e G para gasolina: ")
litros = float(input("Digite a capacidade do tanque em litros: "))

if(tipocar=="G"):
    print("O combustível escolhido foi gasolina.")
else:
    if(tipocar=="A"):
        print("O combustível escolhido foi o álcool.")
    
precol = float(input("Digite o preço do litro do combustível: "))        
precol *= litros

print(f"O preço para encher o tanque será: R$ {precol}")