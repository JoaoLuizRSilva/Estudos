usuario = input('Digite seu nome de usuário: ')
qtd_caracteres = len(usuario)
print(f'{usuario} tem {qtd_caracteres} caracteres')
print(f'{usuario} tem {usuario.__len__()} caracteres')