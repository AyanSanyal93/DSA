"""
Union of two sorted lists using two pointers.

Builds list3 with every value from list1 and list2, once each, in sorted
order. Assumes both lists are sorted and no value repeats within one list.

i, j : current index in list1 and list2
k    : next position in list3 (always the end, so insert(k, x) == append(x))

Step 1 - Main loop (runs while both lists have elements left):
  Compare list1[i] and list2[j]:
    - list1[i] smaller -> add it, i += 1
    - list2[j] smaller -> add it, j += 1
    - equal            -> add it once, i += 1 and j += 1 (avoids a duplicate)
  k += 1 after every add. Taking the smaller value each time keeps list3
  sorted.

Step 2 - Copy leftovers:
  The main loop stops when either list runs out, so the other list may still
  have elements (here, 25 from list1). Both leftover loops are written, but
  only the one for the unfinished list runs. It continues from its current
  index, so no element is visited twice.

Walkthrough (list1 = [2, 6, 10, 15, 25], list2 = [3, 6, 7, 15, 20]):

  pass  list1[i]  list2[j]  added  list3 afterwards
  ----  --------  --------  -----  --------------------------
    1       2         3        2    [2]
    2       6         3        3    [2, 3]
    3       6         6        6    [2, 3, 6]               (equal: i and j move)
    4      10         7        7    [2, 3, 6, 7]
    5      10        15       10    [2, 3, 6, 7, 10]
    6      15        15       15    [2, 3, 6, 7, 10, 15]    (equal: i and j move)
    7      25        20       20    [2, 3, 6, 7, 10, 15, 20]
  -> list2 is finished (j == 5), so the main loop exits.

  Leftovers: list1 still has 25 -> [2, 3, 6, 7, 10, 15, 20, 25]

Result: [2, 3, 6, 7, 10, 15, 20, 25]
Time O(n + m), space O(n + m).
"""

list1 = [2, 6, 10, 15, 25]
list2 = [3, 6, 7, 15, 20]
list3 = []

i = 0
j = 0
k = 0

while (i < len(list1) and j < len(list2)):
    if list1[i] < list2[j]:
        list3.insert(k, list1[i])
        i += 1
        k += 1
    elif list2[j] < list1[i]:
        list3.insert(k, list2[j])
        j += 1
        k += 1
    else:
        list3.insert(k, list2[j])
        i += 1
        j += 1
        k += 1

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
