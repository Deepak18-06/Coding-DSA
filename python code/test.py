n,k,x,y = map(int,input().split())
def solve(n,k,x,y):
    for j in range(n):
        current = (x+j*k)%n
        if current == y:
            return "Yes"
    return "No"
print(solve(n,k,x,y))