def p(n):
    c = 0
    i = 1
    while i * i <= n:
        if n % i == 0:
            if i * i == n:
                c += 1
            else:
                c += 2
        i += 1
    return c

def ans():
    t = int(input())
    
    for _ in range(t):
        N = int(input())
        if N == 1:
            print(1, 0)
            continue
        k = 0
        q = N
        while q % 2 == 0:
            q //= 2
            k += 1
        o = q
        od = p(o)
        
        if k == 0:
            e = 0
        else:
            e = k * od
        
        print(od, e)

ans()