#!/usr/bin/python3

def island_perimeter(grid = [[]]):
	"""Return the perimeter of the island described in grid

	Args:
		grid: a list of integers
	Return:
		The perimeter of the island
	"""

	total = 0
	x = len(grid)
	y = len(grid[0])

	if (not (x > 100 or y > 100)):

		for iIndex, i in enumerate(grid):
			for jIndex, j in enumerate(i):
				# print("grid({}, {}):".format(iIndex, jIndex))
				val = 0
				if j == 1:
					val = 4
					if jIndex > 0:
						if grid[iIndex][jIndex-1] == 1:
							val = val - 1
							# print("\tLeft: {}[{}], ".format(j, val))

					if iIndex > 0:
						if grid[iIndex-1][jIndex] == 1:
							val = val - 1
							# print("\tTop: {}[{}], ".format(j, val))

					if jIndex+1<y:
						if grid[iIndex][jIndex+1]==1:
							val = val - 1
							# print("\tRight: {}[{}], ".format(j, val))

					if iIndex+1<x:
						if grid[iIndex+1][jIndex]==1:
							val = val - 1
							# print("\tBottom: {}[{}], ".format(j, val))

					# print("\tgrid({},{}).value => [{}], ".format(iIndex, jIndex, val))

				total += val
			# print("------------")

		# print("\nPerimeter of island: {}".format(total))
		return total


if __name__ == "__main__":
	island_perimeter([
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ])
