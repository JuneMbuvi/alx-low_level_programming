#!/usr/bin/python3
"""module that calculates the perimter of an island defined by grid"""


def island_perimeter(grid):
    """function that calculates the perimeter of an island
    Args
    grid - list of integers where 0 is water and  1 land"""
    width = len(grid[0])
    height = len(grid)
    side = 0
    size = 0
    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    side += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    side += 1
    return size * 4 - side * 2
