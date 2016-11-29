from random import randrange

x = [5, 3, 8, 6, 1, 9, 2, 7]

def pyShuffle(x):
    for i in range(len(x)):
        j = randrange(i+1)
        x[i], x[j] = x[j], x[i]
pyShuffle(x)
print(x)