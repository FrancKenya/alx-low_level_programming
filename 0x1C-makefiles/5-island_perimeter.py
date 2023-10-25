#!/usr/bin/python3
""" Finds perimeter of a grid """


def island_perimeter(grid):
    """
    A fuction that returns perimeter of a grid
    Args:
    grid: 0 rep water and 1 land
    Returns:
    int: The perimeter of the grid
    """
    size = 0  # Initialize variable to count cells
    n_cells = 0  # Initialize variable to count cells with neighbor
    height = len(grid)   # height of the grid
    width = len(grid[1])  # Width of the grid

    for h in range(height):
        for w in range(width):
            if grid[h][w] == 1:
                size += 1  # Increment cell count
                if (w > 0 and grid[h][w - 1] == 1):
                    n_cells += 1  # Increment cell with neighbours count
                if (h > 0 and grid[h - 1][w] == 1):
                    n_cells += 1  # Increment cell with neighbours count
    i = size * 4 - n_cells * 2  # calculate perimeter
    return (i)  # Return perimeter
