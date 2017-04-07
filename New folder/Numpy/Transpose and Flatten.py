import numpy

a=map(int,raw_input().split())

list1=[]
for i in xrange(a[0]):
    list1.append(map(int,raw_input().split()))

myarray=numpy.array(list1)


print numpy.transpose(myarray)
print myarray.flatten()
