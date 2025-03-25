linha = 0
coluna = 0
mat = [[0]*5, [0]*5, [0]*5, [0]*5, [0]*5]

for linha in range (0,5,1):
    for coluna in range (0,5,1):
        mat[linha][coluna] = int(input(f"Informe o número da linha {linha+1} e da coluna {coluna+1}: "))

for linha in range (0,5,1):
    for coluna in range (0,5,1):
        if(linha==coluna):
            print(f"[{mat[linha][coluna]}]", end=' ')
            print()