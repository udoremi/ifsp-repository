'''
O custo ao consumidor de um carro novo é a soma do preço de fábrica com o percentual de lucro do distribuidor e dos impostos
ao preço de fábrica. Faça um programa que receba o preço de fabrica de um veículo, o percentual de lucro do distribuidor e o percentual
de impostos. Calcule e mostre:
a) o valor correspondente ao lucro do distribuidor
b) o valor correspondente ao imposto
c) o preço final do veículo
'''

#var
precofab = 0.0
lucrodist = 0.0
imposto = 0.0
precof = 0.0

#algoritmo
precofab = float(input("Informe o preço de fábrica do veículo: "))
lucrodist = float(input("Informe o percentual de lucro do distribuidor: "))
imposto = float(input("Informe o percentual de impostos: "))

lucrodist = precofab * (lucrodist/100)
imposto = precofab * (imposto/100)
precof = precofab + lucrodist + imposto

print(f"O valor de lucro do distribuidor é: {lucrodist}")
print(f"O valor do imposto é: {imposto}")
print(f"O preço final do veículo é: {precof:,.2f}")