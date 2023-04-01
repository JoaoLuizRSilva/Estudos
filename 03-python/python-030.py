lista = ['O', 'Brail', 'é', 'penta', ',', 'o', 'brail', 'tem', '5', 'copas', 'do', 'mundo']

frase = ' '.join(lista)

print(lista)
print(frase)

for indice, valor in enumerate(lista):
    print(f'{indice}:{valor}|{lista[indice]}')