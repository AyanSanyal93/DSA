# Create a sorted list of numbers.
a = [4, 8, 13, 16, 20, 25, 28, 33]
# Start at the index of the last existing element.
i = len(a) - 1
# Store the value that will be inserted into the sorted list.
insertable = 18
# Save the last element before shifting larger elements.
lastelement = a[len(a) - 1]
# Continue shifting elements while they are larger than the value to insert.
while a[i] > insertable:
    # Move the current larger element one position to the right.
    a[i] = a[i - 1]
    # Move to the preceding index.
    i = i - 1
# Place the new value in the position created by the shifts.
a[i + 1] = insertable
# Append the saved last element to restore the list's final position.
a.append(lastelement)
# Display the resulting sorted list.
print(a)
