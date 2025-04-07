def countNegatives(grid: list[list[int]]) -> int:
    count = 0
    for row in grid:
        for item in reversed(row):
            if item < 0:
                count = count + 1
            continue
        
    return count