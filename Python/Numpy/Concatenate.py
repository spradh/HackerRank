import numpy
n,m,p=tuple(map(int,raw_input().split()))
list1=[]
for i in xrange(n):
    list1.append(map(int,raw_input().split()))

array1=numpy.array(list1)

list1=[]
for i in xrange(m):
    list1.append(map(int,raw_input().split()))

array2=numpy.array(list1)


print numpy.concatenate((array1,array2),axis=0)
