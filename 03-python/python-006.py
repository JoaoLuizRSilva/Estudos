idade = int(input('Idade: '))
if idade<16:
    print('Aina não vota')
elif idade<18 or idade>=65:
    print('Voto opcional')
else:
    print('Voto obrigatório')