#variavel
contador = 0
num = 0

#algoritmo
numero = int(input("Informe o número para a tabuada: "))

for contador in range (1,11,1):
    print(f"{numero} X {contador} = {numero * contador}")