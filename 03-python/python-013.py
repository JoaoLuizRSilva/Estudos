horario = input('Agora são que horas? ')
if not horario.isnumeric():
    print('[Error]')
else:
    horario = int(horario)
    if horario < 0 or horario > 23:
        print('[Error] horário deve estar entre 0 e 23')
    else:
        if horario <= 5:
            print('Boa Madrugada!')
        elif horario<=11:
            print('Bom dia!')
        elif horario<= 17:
            print('Boa tarde!')
        else:
            print('Boa noite!')