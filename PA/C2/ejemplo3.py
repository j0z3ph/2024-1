Y = 7
cont = 1
for x in range(1, 11):
    if x == 6:
        continue
    print(f"{Y} x {x} = {Y*x}")

while cont <= 10:
    print(f"{Y} x {cont} = {Y*cont}")
    cont += 1
    
while cont < 100:
    pass
