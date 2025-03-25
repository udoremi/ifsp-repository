i = 0
vet = [0.0]*30

for i in range(0,30,1):
    vet[i] = int(input(f"Informe um número para a posição {i+1}: "))

for i in range(0,30,1):   
    if (i % 2!=0):
        print(f"[{vet[i]}]", end=' ')