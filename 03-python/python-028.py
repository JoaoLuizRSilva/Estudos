variavel = ['Luffy', 'Zoro', 'Nami', 'Usopp', 'Sanji', 'Chopper', 'Robin', 'Franky', 'brook', 'Jinbei']
letra = input('Digite uma letra: ')
for x in variavel:
    if x.lower().startswith(letra):
        print(f'A palavra {x} inicia com {letra}')
        break
else:
    print(f'Nenhuma palavra começar da lista começa com {letra}')