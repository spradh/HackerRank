# Enter your code here. Read input from STDIN. Print output to STDOUT
import string
N = int(input())
alphabet = string.ascii_lowercase

for i in range(N-1, -N, -1):
    row = ["-"]*(4*N-3)
    for j in range(0, N - abs(i)):
        row[2*(N-1+j)] = alphabet[abs(i)+j]
        row[2*(N-1-j)] = alphabet[abs(i)+j]
    print("".join(row))
