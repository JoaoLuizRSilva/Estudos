lista_1 = [1,2,3]
lista_2 = [4,5,6]

print(lista_1)
print(lista_2)

lista_1.extend(lista_2)
print(f'Lista 1: {lista_1}')

lista_2.append('Luffy')
print(f'lista 2: {lista_2}')
print(lista_2[-1][1])

lista_1.insert(0, 'Banana')
print(lista_1)
print('#####')
print(lista_2)
lista_2.pop()
print(lista_2)
print('######Lista 03########')
lista_3 = [1,2,3,4,5,6,7,8,9,10]
print(lista_3)
del(lista_3[3:7])
print(lista_3)
lista_3.clear()
print(f'lista 3: {lista_3}')