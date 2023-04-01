num1 = input('N1: ')
num2 = input('N2: ')
try:
    num1 = float(num1)
    num2 = float(num2)
    print(f'{num1} + {num2} = {num1+num2}')
except:
    print('ERROR')