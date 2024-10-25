tc = int(input())

while tc > 0:
	num_legs = int(input())
	if num_legs % 4 == 0:
		print(num_legs // 4)
	else:
		print((num_legs + 2) // 4)
	tc -= 1
