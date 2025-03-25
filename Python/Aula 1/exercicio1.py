'''
Faça um programa que receba o salário base de um funcionário
Calcule e mostre o salário a receber, sabendo que esse funcionário tem
gratificação de 50 reais e paga imposto de 10% sobre o salário base
'''
#var
salbase = 0.0
salfinal = 0.0

#algoritmo
salbase = float(input("Digite o salário base do funcionário: "))

salfinal = (salbase * 0.9) + 50

print("O imposto sobre o salário base é de 10% e a gratificação é de 50 reais")
print(f"O salário final é: {salfinal}")