i = 0
vet = [0.0]*10

for i in range(0, 10, 1):
    vet[i] = int(input(f"Informe um número da posição {i+1}: "))

for i in range(9, -1,-1):
    print(f"[{vet[i]}]", end=' ')