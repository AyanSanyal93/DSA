"""Utilities for working with arrays."""
a = [2, 1, 3, 5, 6, 4, 8, 9, 15, 7]

left = 0
right = len(a) - 1

while left < right :
    a[left],a[right] = a[right],a[left]
    left = left + 1
    right = right -1
print("reversed list : ", a)
