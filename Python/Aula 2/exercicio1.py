'''idade de N pessoas, calcular a media da idade e a maior e menor idade'''
idade, i, n = 0,0,0
soma, media, maior, menor = 0,0,0,0

n = int(input("Digite a quantidade de pessoas: "))

for i in range(0,n,1):
    idade = int(input(f"Digite a idade da {i+1}º pessoa em anos: "))
    
    if (i==0):
        maior = idade
        menor = idade
    else:
        if (idade > maior):
            maior = idade

        if (idade < menor):
            menor = idade

    soma += idade 

'''+= não precisa repetir a variável soma'''            

media = soma / n
print(f"A média das idades é: {media}")
print(f"A maior idade é: {maior}")
print(f"A menor idade é: {menor}")