import itertools

from math import *

n = int(input())


 

def words(S, L):

    return [ ''.join(w) for w in itertools.product(S, repeat=L) ]

 



for i in range(n):

    [b,x] = list(int(i) for i in input().split())

    Alphabet = ''

    for i in range(b):

        Alphabet += chr(i+ord('a'))


    R = itertools.chain.from_iterable(words(Alphabet,i) for i in range(1, floor(log(x,b))+2))

    string = ''.join(R)

    print(string[x])
