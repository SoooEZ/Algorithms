def Monkey(n, M):
    if n == 0 or M == 1:
        return 0
    L = list(map(list, list(enumerate([True] * n, start=1))))

    counter = 0
    while [L[i][1] for i in range(len(L))].count(True) > (M - 1):
        for i in range(len(L)):
            if L[i][1] == True:
                counter += 1
            if counter % M == 0 and L[i][1] == True:
                L[i][1] = False
                print(L[i][0])
    return list(filter(lambda x:x[1] == True, L))
    # return L

result = Monkey(41, 3)
print(result)
