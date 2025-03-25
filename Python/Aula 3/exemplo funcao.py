#variaveis
n1, n2, r = 0,0,0

#funcao
def somar_numeros(numero1,numero2):
    r = numero1, numero2
    print(f"A soma dos números é: {r}")

#algoritmo principal
n1 = int(input("Informe o primeiro número: "))
n2 = int(input("Informe o segundo número: "))
somar_numeros(n1,n2)