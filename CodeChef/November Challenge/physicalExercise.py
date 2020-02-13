from math import *
T = int(input())
for t in range(T):
    [x, y] = list(int(i) for i in input().split())
    [N, M, K] = list(int(i) for i in input().split())
    pN = []
    pM = []
    pK = []
    l = list(int(i) for i in input().split())
    for n in range(0, 2*N, 2):
        pN.append((l[n],l[n+1]))
    l = list(int(i) for i in input().split())
    for n in range(0, 2*M, 2):
        pM.append((l[n],l[n+1]))
    l = list(int(i) for i in input().split())
    for n in range(0, 2*K, 2):
        pK.append((l[n],l[n+1]))
    d = 99999999999999999
    
    for n in pN:
        dn = sqrt((x-n[0])**2 + (y-n[1])**2)
        if dn > d:
            continue
        for m in pM:
            dm = sqrt((m[0]-n[0])**2 + (m[1]-n[1])**2)
            if dm+dn > d:
                continue
            for k in pK:
                dk = sqrt((m[0]-k[0])**2 + (m[1]-k[1])**2)
                d = min(d, dn + dm + dk)
                    
    for m in pM:
        dm = sqrt((x-m[0])**2 + (y-m[1])**2)
        if dm > d:
            continue
        for n in pN:
            dn = sqrt((m[0]-n[0])**2 + (m[1]-n[1])**2)
            if dm+dn > d:
                continue
            for k in pK:
                dk = sqrt((n[0]-k[0])**2 + (n[1]-k[1])**2)
                d = min(d, dn + dm + dk)
    print(d)