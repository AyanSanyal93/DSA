"""
Merge two sorted lists into one sorted list (two-pointer technique).

This is the "merge" step of merge sort. Both input lists MUST already be
sorted in ascending order; the algorithm relies on that to build the
output in a single pass.

Step 1 - Set up the inputs and the output
    list1 and list2 are the two sorted lists to merge.
    list3 starts empty and will hold the merged result.

Step 2 - Set up three pointers
    i -> index of the next unused element in list1
    j -> index of the next unused element in list2
    k -> index in list3 where the next element will go
    All start at 0. Because list3 grows by exactly one element each time,
    k is always equal to len(list3), so insert(k, x) adds x to the end
    (the same as list3.append(x)).

Step 3 - Main loop: compare and take the smaller element
    while i < len(list1) and j < len(list2):
        Runs only while BOTH lists still have unused elements.
        ('and' must be used here, not '&' - '&' is bitwise AND and is
        evaluated before '<', which makes the condition wrong.)

    if list1[i] < list2[j]:
        list1's current element is smaller, so it goes into list3 next.
        Move i forward (that element is used) and move k forward.
    else:
        list2's current element is smaller OR EQUAL, so it goes next.
        Move j forward and move k forward.
        (On a tie, list2's element is taken first. Using '<=' instead of
        '<' would take list1's first and keep the merge "stable".)

    Each comparison places exactly one element, and since both lists are
    sorted, the smaller of the two current elements is the smallest of
    everything still remaining - so list3 stays sorted.

Step 4 - Copy whatever is left over
    The main loop stops as soon as ONE list runs out. The other list may
    still have elements, and they are all larger than everything already
    in list3, so they can be copied over in order without comparing.
    while i < len(list1): copies the rest of list1 (if any)
    while j < len(list2): copies the rest of list2 (if any)
    Only one of these two loops will actually do any work.

Step 5 - Print the inputs and the merged result

Dry run with list1 = [2, 6, 10, 15, 25] and list2 = [3, 4, 7, 10, 18, 20]
    compare   taken   from    list3 so far
    2 vs 3      2     list1   [2]
    6 vs 3      3     list2   [2, 3]
    6 vs 4      4     list2   [2, 3, 4]
    6 vs 7      6     list1   [2, 3, 4, 6]
    10 vs 7     7     list2   [2, 3, 4, 6, 7]
    10 vs 10    10    list2   [2, 3, 4, 6, 7, 10]          (tie -> else)
    10 vs 18    10    list1   [2, 3, 4, 6, 7, 10, 10]
    15 vs 18    15    list1   [2, 3, 4, 6, 7, 10, 10, 15]
    25 vs 18    18    list2   [..., 15, 18]
    25 vs 20    20    list2   [..., 18, 20]                (list2 used up)
    leftover    25    list1   [2, 3, 4, 6, 7, 10, 10, 15, 18, 20, 25]

Complexity (n = len(list1), m = len(list2))
    Time:  O(n + m) - every element is looked at and copied exactly once.
    Space: O(n + m) - list3 holds all elements from both lists.
"""

list1 = [2, 6, 10, 15, 25]
list2 = [3, 4, 7, 10, 18, 20]
list3 = []

i = 0
j = 0
k = 0

while (i < len(list1) and j < len(list2)):
    if list1[i] < list2[j]:
        list3.insert(k, list1[i])
        i = i + 1
        k = k + 1
    else:
        list3.insert(k, list2[j])
        j = j + 1
        k = k + 1

while (i < len(list1)):
    list3.insert(k, list1[i])
    i = i + 1
    k = k + 1
while (j < len(list2)):
    list3.insert(k, list2[j])
    j = j + 1
    k = k + 1

print(list1)
print(list2)
print(list3)