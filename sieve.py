n = 10**5+1
sieve = [True]*(n+1)
p = 2
sieve[0]=sieve[1]=False
while p*p <= n:
    if sieve[p]:
        for i in range(p*p, n+1, p):
            sieve[i] = False
    p += 1

for i in range(101):
    if sieve[i]:
        print(i)
