nome = input('Digite seu primeiro nome: ')
if nome.isnumeric():
    print('[Error]')
else:
    if nome.__len__() <= 4:
        print('Seu nome é muito curto')
    elif nome.__len__() <= 6:
        print('Seu nome é normal')
    else:
        print('Seu nome é muito grande')