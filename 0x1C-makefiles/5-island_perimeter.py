#!/usr/bin/python3
"""
returns the perimeter of the island described in grid
"""


def island_perimeter(grid):
    """
    returns the perimeter of the island described in grid
    """
    height = len(grid)
    edg = 0

    for h in range(height):
        width = len(grid[h])
        for w in range(width):
            if grid[h][w] == 1:
                size = size + 1
                if w > 0 and grid[h][w - 1] == 1:
                    edg += 1
                id h > 0 and grid[h - 1][w] == 1:
                    edg += 1
    ans = size * 4 - (edg * 2)
    return ans
