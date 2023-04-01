while True:
    num_1 = input('N1: ')
    operador = input('operador')
    num_2 = input('N2: ')

    if not num_1.isnumeric() or not num_2.isnumeric():
        print('Valor inválido, tente novamente')
        continue

    num_1 = int(num_1)
    num_2 = int(num_2)

    if operador == '+' :
        print(num_1 + num_2)
    elif operador == '-':
        print(num_1-num_2)
    elif operador == '*':
        print(num_1*num_2)
    elif operador == '/':
        print(num_1/num_2)
    else:
        print('Operador inválido!')
    print('\n')

    sair = input('Deseja sair [s]im ou [n]ão')
    if sair == 's':
        break