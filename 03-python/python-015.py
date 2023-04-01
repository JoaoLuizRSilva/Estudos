# Duas formas diferentes de formatar

num_1 = 100000
num_2 = 3
divisao =  num_1/num_2
print('{:.2f}'.format(divisao))
print(f'{divisao:.2f}')
print(f'{num_2:0>10}')
print(f'{num_1:0>10}')
print(f'{num_2:0^9}')
print(f'{num_2:0>5.2f}')

nome = 'João'
sobrenome = 'LuIz'

print(f'{nome:#^50}')
print('{1:#^25} - {0:|^10}'.format(nome, sobrenome))

nome = nome.ljust(20, '$')

print(nome)
print(sobrenome.upper())
print(sobrenome.lower())
print(sobrenome.title()) # Primeiras letras em maiusculo