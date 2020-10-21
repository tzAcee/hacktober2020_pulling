m=0
n=1
f = 0
x = int(input("how many no. in series you need: "))
print(m)
print(n)
i = 3
for i in range(2,x):
    f = m + n
    m=n
    n = f
    print(f)
    i += 1
