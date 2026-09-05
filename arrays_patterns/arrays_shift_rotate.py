"""
Original array to be left-shifted by one position.
"""
a = [2, 1, 3, 5, 6, 4, 8, 9, 15, 7]
print("Original array : ",a)
# Store the first element so it can be placed at the end after shifting.
first_value = a[0]

# Traverse through the array and shift each element one position to the left.
for i in range(0, len(a), 1):
    if i == len(a) - 1:
        # When we reach the last index, place the original first element at the end.
        a[i] = first_value
    else:
        # Move each element to the previous index.
        a[i] = a[i + 1]

# Print the final shifted array.
print("Left shifted array : ", a)

"""
Original array to be right-shifted by one position.
"""

b = [2, 1, 3, 5, 6, 4, 8, 9, 15, 7]
print("Original array : ",b)

last_value = b[len(b) - 1]

# Traverse through the array and shift each element one position to the right.
# range(start, stop, step) never includes stop, it stops before reaching it.
for i in range(len(b) - 1, -1, -1):
    if i == 0:
        # When we reach the first index, place the original last element at the beginning.
        b[0] = last_value
    else:
        # Move each element to the previous index from right.
        b[i]= b[i - 1]

print("Right shifted array : ", b)
