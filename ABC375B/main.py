import math

N = int(input())
points = [(0, 0)] + [tuple(map(int, input().split())) for _ in range(N)] + [(0, 0)]

total = sum(math.dist(points[i], points[i+1]) for i in range(N+1))

print(total)
