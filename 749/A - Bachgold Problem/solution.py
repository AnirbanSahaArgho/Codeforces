n = int(input())
 
if (n%2 != 0):
    m = int(n/2)
    print(m)
    for i in range(1,m):
        print("2",end=" ")
    print("3")
 
else:
    m = int(n/2)
    print(m)
    for i in range(1,m):
        print("2",end=" ")
    print("2")