i = 0
vet = [""]*5

for i in range(0,5,1):
    vet[i] = input(f"Informe o número para a posição {i}: ")

for i in range(0,5,1):
    print(f"[{vet[i]}]", end=' ')