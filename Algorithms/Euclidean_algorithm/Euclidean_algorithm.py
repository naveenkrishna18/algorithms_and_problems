def gcd(a,b):
    if a%b == 0:
        return b
    else:
       return (gcd(b,a%b))

a = int(input("Enter the first number = "))
b = int(input("Enter the second number = "))
print(f"The GCD of {a} and {b} is {gcd (a,b)}")