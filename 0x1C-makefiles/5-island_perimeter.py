#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculate perimeter island
    """

    rows = len(grid)
    cols = len(grid[0])
    perimeter = 0

    for p in range(1, rows - 1):
        for m in range(1, cols - 1):
            if grid[p][m] == 1:
                if grid[p - 1][m] == 0:
                    perimeter += 1
                if grid[p + 1][m] == 0:
                    perimeter += 1
                if grid[p][m - 1] == 0:
                    perimeter += 1
                if grid[p][m + 1] == 0:
                    perimeter += 1
    return perimeter
