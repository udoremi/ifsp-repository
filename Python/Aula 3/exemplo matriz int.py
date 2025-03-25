linha = 0
coluna = 0
mat = [[0]*3, [0]*3, [0]*3]

for linha in range(0,3,1):
    for coluna in range(0,3,1):
        mat[linha][coluna] = int(input(f"Informe o número para a linha {linha+1} e coluna {coluna+1}: "))

for linha in range(0,3,1):
    for coluna in range(0,3,1):
        print(f"[{mat[linha][coluna]}]", end=' ')
    print()