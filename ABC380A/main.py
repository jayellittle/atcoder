N = list(map(int, input()))

counter = [0 for _ in range(10)]
for num in N:
    counter[num] += 1

if counter[1] == 1 and counter[2] == 2 and counter[3] == 3:
    print("Yes")
else:
    print("No")
