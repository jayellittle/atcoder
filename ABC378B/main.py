n = int(input())
garbages = [tuple(map(int, input().split())) for _ in range(n)]

q = int(input())
queries = [tuple(map(int, input().split())) for _ in range(q)]

for garbage_num, query_date in queries:
    garbage_num -= 1

    interval, start_date = garbages[garbage_num]
    if query_date <= start_date:
        next_date = start_date
    else:
        periods = (query_date - start_date + interval - 1) // interval
        next_date = start_date + (periods * interval)

    print(next_date)
