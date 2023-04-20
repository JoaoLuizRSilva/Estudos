variavel = ['joão', 'Luiz', 'Carlos']

for index in variavel:
    if index.lower().startswith('j'):
        break
else:
    print('Não existe palavra que começa com j.')