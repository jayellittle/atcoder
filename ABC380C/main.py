N, K = list(map(int, input().split()))
S = list(map(int, input()))

one_indices = [i for i in range(N) if S[i] == 1]

one_groups = []
temp = [one_indices[0]]
for i in range(len(one_indices)-1):
    if one_indices[i+1] - one_indices[i] == 1:
        temp.append(one_indices[i+1])
        continue
    else:
        one_groups.append(temp)
        temp = [one_indices[i+1]]
one_groups.append(temp)

one_groups_moved = [ones for ones in one_groups]
for i in range(len(one_groups[K-1])):
    one_groups_moved[K-2].append(one_groups_moved[K-2][-1]+1)
one_groups_moved.pop(K-1)
one_indices_moved = [index for ones in one_groups_moved for index in ones]

ans = ["0" for _ in range(N)]
for index in one_indices_moved:
    ans[index] = "1"
print("".join(ans))
