#!/usr/bin/python3
def island_perimeter(grid):
    length = len(grid[0])
    gridlen = len(grid)
    arr = []
    for i in range(gridlen):
        for j in range(length):
            if grid[i][j] == 1:
                arr.append((i, j))
    newarr = []
    newerarr = []
    for k in arr:
        for j in range(1):
            newarr.append(k[j])
    for l in arr:
        for j in range(1, 2):
            newerarr.append(l[j])
    highest = max(newarr) - min(newarr) + 1
    ranges = max(newerarr) - min(newerarr) + 1
    perimeter = highest * 2 + ranges * 2
    return perimeter
