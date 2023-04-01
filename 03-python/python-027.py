secreto = 'perfume'
digitadas = []
chances = 3
while chances > 0:
    letra = input('Digite uma letra: ')

    if len(letra) != 1 or letra.isnumeric():
        print('Ahhh isso não vale, digite apenas uma letra')
        continue

    digitadas.append(letra)

    if letra in secreto:
        print(f'UHUUUL, a letra {letra} existe na palavra secreta.')
    else:
        print(f'AFFFzzz, a letra {letra} não existe na palvra secreta.')
        digitadas.pop()

    secreto_temporario = ''
    for letra_secreta in secreto:
        if letra_secreta in digitadas:
            secreto_temporario += letra_secreta
        else:
            secreto_temporario += '*'
    print(secreto_temporario)

    if secreto_temporario == secreto:
        print('Que legal, VOCÊ GANHOU!!!')
        break

    if letra not in secreto:
        chances -= 1

    print(f'Você tem {chances} chances\n')
else:
    print('Você perdeu!!!')