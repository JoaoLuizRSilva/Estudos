string = 'O Brasil é o País do Futebool, o Brasil é Penta. luffy luffy luffy luffy'
lista = string.split(' ')
lista_2 = string.split(',')

for x in lista:
    print(f'A palavra {x} apareceu {lista.count(x)}x na frase.')

print('#########################################')
for x in lista_2:
    print(x.strip().capitalize())

print('#########################################')

palavra = ''
contagem = 0
for x in lista:
    qtd_vezes = lista.count(x)
    if qtd_vezes > contagem:
        contagem = qtd_vezes
        palavra = x
print(f'A palavra que apareu mais vezes foi: {palavra}')