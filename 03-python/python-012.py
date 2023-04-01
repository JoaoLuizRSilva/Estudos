numero = input('Digite um número: ')
if not numero.isnumeric():
    print('[Error]')
else:
    numero = int(numero)
    if(numero%2==0):
        print(f'{numero} é um par')
    else:
        print(f'{numero} é um ímpar')