# Define the list to check for ascending order.
a = [1, 2, 3, 4, 8, 7, 9, 10]
# Initialize a counter to track adjacent elements that are out of order.
counter = 0
# Compare each element with the element immediately following it.
for i in range(0, len(a) - 1, 1):
    # Leave the counter unchanged when the current pair is in ascending order.
    if a[i] < a[i+1]:
        pass
    else:
        # Count the pair when the current element is not smaller than the next one.
        counter = counter + 1

# Print that the list is not sorted when exactly one out-of-order pair is found.
if counter == 1:
    print("Not sorted")
else:
    # Otherwise, print that the list is sorted.
    print("Sorted")
