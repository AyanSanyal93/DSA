# Store the array containing both negative and positive values.
a = [-2,1,-3,-4,6,7,8,-10,-9,20,58,-38,-24]

# Start the left pointer at the beginning of the array.
i = 0
# Start the right pointer at the end of the array.
j = len(a) - 1

# Continue checking elements while the pointers have not crossed.
while i < j :
    # Move the left pointer when its current value is already negative.
    if a[i] < 0 :
        i = i + 1
    # Move the right pointer when its current value is already positive.
    elif a[j] > 0 :
        j = j - 1
    else :
        # Swap values when a positive value is on the left and a negative value is on the right.
        a[i],a[j] = a[j],a[i]
        # Move both pointers inward after the swap.
        i = i + 1
        j = j - 1

# Display the array after consolidating negative and positive values.
print(a)
