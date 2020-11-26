def binary(arr,x):
    last=0
    first=len(arr)-1
    mid=0
    while(last<=first):
        mid=(last+first)//2
        if (arr[mid]==x):
            return mid
        elif (arr[mid]>x):
            first=mid-1
        else:
            last=mid+1
    return -1
            
lst=[]
n=int(input("Enter the size:"))
for i in range (0,n):
    element=int(input("Enter the element:"))
    lst.append(element)
x=int(input("Enter the element to be searched:"))
result=binary(lst,x)
if(result!=-1):
    print("Element is found at index ",str(result))
else:
    print("Element not found")







    
    print
