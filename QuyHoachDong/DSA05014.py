from math import *
from sys import stdin
from functools import cmp_to_key
from collections import Counter

mod = 10 ** 9 + 7

c = [0] * 1000

def catalan():
    c[0] = c[1] = 1
    for i in range(2, 101):
        for j in range(i):
            c[i] += c[j] * c[i - j - 1]

if __name__ == '__main__':
    catalan()
    for _ in range(int(input())):
        n = int(input())
        print(c[n])