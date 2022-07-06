def fib(val):
    if val<0 :
        print("wrong input")
    elif val == 1:
        return 1
    elif val == 0:
        return 0
    else:
        return (fib(val-1) + fib(val-2))


print(fib(11))