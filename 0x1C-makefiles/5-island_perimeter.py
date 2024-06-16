#!/usr/bin/python3
"""Island perimeter calculator"""


def border_checker(grid, x, y, i=0, j=0):
    """Checks if there is water or not"""
    try:
        if grid[y + j][x + i] == 0:
            return 1
        else:
            return 0
    except IndexError:
        return 1


def island_perimeter(grid):
    """Island perimeter calculator"""
    if not grid:
        return 0

    width = len(grid[0])
    hight = len(grid)
    perimeter = 0

    for y in range(hight):
        for x in range(width):
            if grid[y][x] == 1:
                perimeter += border_checker(grid, x, y, i=1)
                perimeter += border_checker(grid, x, y, i=-1)
                perimeter += border_checker(grid, x, y, j=1)
                perimeter += border_checker(grid, x, y, j=-1)
    return perimeter


if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))
