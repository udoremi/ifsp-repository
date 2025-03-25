'''Faça um algoritmo que solicite a resposta de X pessoas sobre a preferencia de um produto.
Esta pessoa devera responder 1 se gostou do primeiro produto; 2 se gostou do segundo produto e 3 se gostou do terceiro produto
Ao final deve ser impresso na tela a quantidade de pessoas que gostaram do produto 1, do 2 e do 3. Para finalizar digitar zero'''

resp = 1
prod1,prod2,prod3 = 0,0,0

while resp != 0:
    resp = int(input("Informe o Produto que você gostou (1 | 2 | 3): "))
    if(resp==1):
        prod1 += +1
    else:
        if(resp==2):
            prod2 += +1
        else:
            if(resp==3):
                prod3 += +1

print(f"{prod1} gostaram do primeiro produto")
print(f"{prod2} gostaram do segundo produto")
print(f"{prod3} gostaram do terceiro produto")