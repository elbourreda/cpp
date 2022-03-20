import sys
import math

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.

n = int(input())
# x, y = [int(i) for i in input().split()]

# Write an answer using print
# To debug: print("Debug messages...", file=sys.stderr, flush=True)

for i in range(n):
	for j in range(n):
		if (i == 0 and j == 0):
			print("|", end="")
		elif (i == n-1 and j == n-1):
			print("|", end="")
		elif (i == 0 and j == 1):
			print("-", end="")
		elif (i == n-1 and j == 1):
			print("-", end="")
		elif (i == n-1 and j == n-2):
			print("-", end="")
		elif (i == n-1 and j == 0):
			print("|", end="")
		
		elif (j == n-1 and i == 0):
			print("|", end="")
		elif (j == n-2 and i == 0):
			print("-", end="")
		else:
			print(" ", end="")
	print("")
