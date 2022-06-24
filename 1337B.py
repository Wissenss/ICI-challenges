t = int(input())

for i in range(t):
    x, n, m = [int(x) for x in input().split(" ")]
    while True:
        if x<=0: break

        if x>20 and n>0:
            x = int(x/2) + 10
            n-=1
        elif m>0:
            x -= 10
            m-=1
        else: 
            break

    if x<=0: 
        print("YES")
    else: 
        print("NO")