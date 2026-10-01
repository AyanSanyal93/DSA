"""
Minus (list1 - list2) of two sorted lists using two pointers.

Builds list3 with only the values from list1 that do NOT appear in list2, in
sorted order. Assumes both lists are sorted and no value repeats within one
list.

i, j : current index in list1 and list2
k    : next position in list3 (always the end, so insert(k, x) == append(x))

Step 1 - Main loop (runs while both lists have elements left):
  Compare list1[i] and list2[j]:
    - list1[i] smaller -> add it, i += 1 (list2 has nothing left this small,
                          so it can't be in list2)
    - list2[j] smaller -> skip it, j += 1 (only list1's values are kept)
    - equal            -> skip it, i += 1 and j += 1 (it is in list2, so it
                          is removed)
  Only the "list1[i] smaller" case adds to list3, and k += 1 only there.
  list1 is sorted, so list3 stays sorted.

Step 2 - Copy leftovers from list1 only:
  The main loop stops when either list runs out.
    - Leftovers in list1 (here, 25) must be copied. list2 is finished, so
      nothing can remove them.
    - Leftovers in list2 are ignored. Only list1's values are kept.
  (The code below does not have this loop yet, so it currently prints
  [2, 10] and drops 25.)

Walkthrough (list1 = [2, 6, 10, 15, 25], list2 = [3, 6, 7, 15, 20]):

  pass  list1[i]  list2[j]  added  list3 afterwards
  ----  --------  --------  -----  ----------------
    1       2         3        2    [2]               (list1 smaller: i moves)
    2       6         3        -    [2]               (skip 3: j moves)
    3       6         6        -    [2]               (equal: i and j move)
    4      10         7        -    [2]               (skip 7: j moves)
    5      10        15       10    [2, 10]           (list1 smaller: i moves)
    6      15        15        -    [2, 10]           (equal: i and j move)
    7      25        20        -    [2, 10]           (skip 20: j moves)
  -> list2 is finished (j == 5), so the main loop exits.

  Leftovers: list1 still has 25 -> [2, 10, 25]

Result: [2, 10, 25]
Time O(n + m), space O(n).
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
        j += 1
    else:
        i += 1
        j += 1

print(list1)
print(list2)
print(list3)
