num1 = input('N1: ')
num2 = input('N2: ')

# isnumeric isdigit isdecimal isnumeric

if num1.isnumeric() and num2.isnumeric():
    num1 = int(num1)
    num2 = int(num2)
    soma = num1 + num2
    print(soma)
else:
    print('[Erro] valor inválido')