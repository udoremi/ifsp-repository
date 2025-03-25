'''Uma escola está realizando matriculas para um curso aberto à comunidade, com limite de 20 vagas. Assumindo que os alunos
são cadastrados por computador, escreva um algoritmo que leia a idade e o sexo do aluno; informe que a turma está lotada, quando
o numero de inscritos atingir a quantidade de vagas; mostre a idade média dos candidatos; mostre a quantidade de mulheres inscritas;
mostre os candidatos (homens e mulheres) maiores de idade'''

i, idade, somamulher, somat, maioridade = 0,0,0,0,0
sexo = ""
idademedia = 0.0

for i in range (0,20,1):
    idade = int(input(f"Digite a idade do {i+1}º candidato: "))
    sexo = input(f"Usando F para mulher e M para homem, Digite o sexo do {i+1}º candidato: ")

    somat += idade
    if(i>=20):
        print("Turma lotada!!!")
    if(sexo=="F"):
        somamulher += +1
    if(idade>=18):
        maioridade += idade

idademedia = somat / i
print(f"A idade média dos candidatos é: {idademedia:,.2f}")
print(f"A quantidade de mulheres inscritas é: {somamulher}")
print(f"A quantidade de candidatos maiores de idade é: {maioridade}")