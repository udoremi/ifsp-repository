'''A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e número de filhos.        
Elabore um algoritmo para apresentar:
 a) Média do salário da população;
 b) Média do número de filhos;
 c) Maior salário;
 d) Percentual de pessoas com salário até R$ 100,00.
O sistema deve ficar solicitando novos dados até o usuário mandar parar usando o menu:
- Escolha uma opção:
    1 - para cadastrar
    2 - para sair'''

sal,somasal,mediasal,mediafil,maiorsal,pcem = 0.0,0.0,0.0,0.0,0.0,0.0
nfilhos, filho, i, qntcem = 0,0,0,0
resp = 1

while resp == 1:
    print("Escolha uma opção: ")
    print("1 para cadastrar")
    print("2 para sair")
    resp = int(input())

    if(resp==1):
        filho = int(input("Informe o número de filhos: "))
        sal = float(input("Informe o salário: "))

        somasal += sal
        nfilhos += filho
        i += +1

        if(sal > maiorsal):
            maiorsal = sal
        if(sal <= 100):
            qntcem += +1

mediasal = somasal / i
mediafil = nfilhos / i
pcem = qntcem * 100/ i

print(f"A média de salário é: {mediasal}")
print(f"A média de filhos é: {mediafil}")
print(f"O maior salário é: {maiorsal}")
print(f"{pcem}% Recebem até R$ 100,00")