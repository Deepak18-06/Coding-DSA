def sorting(self,arr):
    if len(arr) == 1:
        return
    temp = arr[-1]
    arr.pop()
    self.sorting(arr)
    self.inserting(temp,arr)
def inserting(self,temp,arr):
    if len(arr) == 0 or arr[-1]<=temp:
        arr.append(temp)
        return
    val = arr[-1]
    arr.pop()
    self.inserting(arr,temp)
    arr.append(val)
    return
arr = [2,0,1,3,5,4]
sorting(arr)
print(arr)