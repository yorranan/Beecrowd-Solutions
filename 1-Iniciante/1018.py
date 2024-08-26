def calc(cedulas, N):
    c = N//cedulas
    m = N%cedulas
    return c, m

N = int(input())

cedulas = [100, 50, 20, 10, 5, 2, 1]
print("%i" %N)
for cedula in cedulas:
    c, N = calc(cedula, N)
    print("%i nota(s) de R$ %i,00" %(c, cedula))
