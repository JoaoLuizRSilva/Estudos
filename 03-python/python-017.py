# Quebrar o laço

x = 0
while x<=50:
    if x == 3:
        x+=1
        continue


    print(x)
    x+=1
    if x == 10:
        break

print('\nAcabou')