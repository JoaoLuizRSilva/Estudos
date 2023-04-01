num = list(range(0, 100, 8))
print(num)

soma = 0
for x in num:
    soma += x
    print(f'O tipo de x é {type(x)} e seu valor é {x}')
print(f'Soma: {soma}')