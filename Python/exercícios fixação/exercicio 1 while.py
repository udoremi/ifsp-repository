'''Foi feita uma pesquisa de audiência de canal de TV em várias casas de uma certa cidade, num determinado dia.
Para cada casa visitada, é fornecido o número do canal (9, 12, 23 ou 40).
    Fazer um algoritmo que:
       - leia um número indeterminado de dados, até que seja digitado o canal 0(zero);
       - Calcule e mostre a porcentagem de audiência de cada emissora;
       - Caso seja digitado algum canal fora dos apresentado acima, informar como outros canais;
       - O número 0(zero) não pode ser considerado um canal.'''

canal,i,c9,c12,c23,c40,outroc = 0,0,0,0,0,0,0
pc9,pc12,pc23,pc40,pcoutro = 0.0,0.0,0.0,0.0,0.0

canal = 1
while canal !=0:
    canal = int(input("Informe o canal escolhido (9 | 12 | 23 | 40): "))
    
    if(canal==9):
        c9 += +1
        i += +1
    else:
        if(canal==12):
            c12 += +1
            i += +1
        else:
            if(canal==23):
                c23 += +1
                i += +1
            else:
                if(canal==40):
                    c40 += +1
                    i += +1
                else:
                    if(canal!=0):
                        outroc += +1
                        i += +1


pc9 = (c9 * 100) / i
pc12 = (c12 * 100) / i
pc23 = (c23 * 100) / i
pc40 = (c40 * 100) / i
pcoutro = (outroc * 100) / i

print(f"A audiência do canal 09 é de: {pc9:,.2f}%")
print(f"A audiência do canal 12 é de: {pc12:,.2f}%")
print(f"A audiência do canal 23 é de: {pc23:,.2f}%")
print(f"A audiência do canal 40 é de: {pc40:,.2f}%")
print(f"A audiência de outros canais é de: {pcoutro:,.2f}%")