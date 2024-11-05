A_list = list(map(int, input().split()))

ans = 0
temp = A_list[:]
for num in temp:
    if num in A_list:
        A_list.remove(num)
        if num in A_list:
            ans += 1
            A_list.remove(num)

print(ans)
