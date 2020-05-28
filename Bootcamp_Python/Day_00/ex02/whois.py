import sys

if len(sys.argv) != 2:
    print("ERROR")
try:
    tmp = int(sys.argv[1])
    if tmp == 0:
        print("I'm Zero.")
    elif tmp % 2 == 0:
        print("I'm Even")
    else:
        print("I'm Odd")
except ValueError:
    print("ERROR")
