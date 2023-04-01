nome = 'João Luiz'
idade = 20
altura = 1.81
peso = 65
anoAtual = 2023
anoNascimento = anoAtual - idade
imc = peso / altura**2
print(f'{nome} tem {idade} anos, {altura} de altura e pesa {peso}kg.')
print(f'O IMC de {nome} é {imc:.2f}')
print(f'{nome} nasceu em {anoNascimento}')