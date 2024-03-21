#!/usr/bin/python3
"""Defines a function measuring an island perimeter"""


def island_perimeter(grid):
    """Calculates the perimeter of the island in grid.

    Args:
        grid (list): A list of list of integers.
            0 represents water
            1 represents land

    Returns:
        The perimeter of the island in grid.
    """
    height = len(grid)
    width = len(grid[0])

    perimeter = 0
    for i in range(height):
        for j in range(width):
            if j == 0 or grid[1][j - 1] == 0:
                perimeter += 1
            if j == width - 1 or grid[i][j + 1] == 0:
                perimeter += 1
            if i == 0 or grid[i - 1][j] == 0:
                perimeter += 1
            if i == height - 1 or grid[i + 1][j] == 0:
                perimeter += 1

    return perimeter
