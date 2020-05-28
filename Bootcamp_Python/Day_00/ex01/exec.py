import sys


def reverse_slicing(s):
    return s[::-1]


if len(sys.argv) > 1:
    print((reverse_slicing(" ".join(sys.argv[1:]))).swapcase())
