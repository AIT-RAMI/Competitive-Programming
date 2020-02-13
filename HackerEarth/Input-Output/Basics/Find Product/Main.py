n = int(input())
ns = input()
numbers = ns.split()
numbers = [ int(x) for x in numbers ]

result = 1
for i in range(n):
    result = ((result % 1000000007) * (numbers[i] % 1000000007)) % 1000000007

print(result)
