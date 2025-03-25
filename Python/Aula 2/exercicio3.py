num, maior, menor = 0,0,0

num = int(input("Digite um número inteiro ou 0 para terminar: "))
maior = num
menor = num

while num != 0:
    
    if(num < menor) and (num != 0):
        menor = num
    else:
        if(num > maior):
            maior = num

    num = int(input("Digite um número inteiro ou 0 para terminar: "))

print(f"O maior número digitado foi: {maior}")
print(f"O menor número digitado foi: {menor}")