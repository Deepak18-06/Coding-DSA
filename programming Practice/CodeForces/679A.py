def solve():
    for i in range(int(input())):
        n = int(input())
        arr = list(map(int,input().split()))
        for j in range(0,len(arr),2):
            arr[j],arr[j+1] = -arr[j+1],arr[j]
        print(*arr)
solve()