#whileElse

x = 1
soma = x

while x <=10:
    print(f'({x}, {soma})')

    if x>5:
        break

    x += 1
    soma += x
else:
    print('Chegeui no else')