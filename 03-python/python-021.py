frase = 'O rato roeu a roupa do rei de roma'
tamanho_frase = len(frase)
x = 0
nova_string = ''

letra_maiuscula = input('Qual letra deseja passar para maiúsculo? ')
while x < tamanho_frase:
    letra = frase[x]
    if letra.lower() == letra_maiuscula.lower():
        nova_string += letra_maiuscula.upper()
    else:
        nova_string += letra

    print(nova_string)

    x+=1