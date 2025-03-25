#var
pontoag = 0.0

#algoritmo
pontoag = int(input("Digite o número de pontos de água: "))

if (pontoag<=10):
    print("A amostra é Rochosa.")
else:
    if(pontoag>10) and (pontoag<=40):
        print("A amostra é Firme.")

    if(pontoag>40) and (pontoag<=80):
        print("A amostra é Pantanosa.")
    else:
        print("Amostra de quantidade inválida.")