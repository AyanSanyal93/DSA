"""
Intersection of two sorted lists using two pointers.

Builds list3 with only the values that appear in BOTH list1 and list2, once
each, in sorted order. Assumes both lists are sorted and no value repeats
within one list.

i, j : current index in list1 and list2
k    : insert position in list3. It also moves on skips, so it can run past
        the end of list3, but insert() past the end just appends, so the
        result is unaffected.

Step 1 - Main loop (runs while both lists have elements left):
  Compare list1[i] and list2[j]:
    - list1[i] smaller -> skip it, i += 1 (it can't be in list2 any more)
    - list2[j] smaller -> skip it, j += 1 (it can't be in list1 any more)
    - equal            -> add it, i += 1 and j += 1 (it is in both lists)
  Only the equal case adds to list3. Both lists are sorted, so the common
  values are found in ascending order and list3 stays sorted.

Step 2 - No leftovers to copy:
  The main loop stops when either list runs out. Anything left in the other
  list (here, 25 from list1) has nothing left to match against, so it can't
  be in the intersection. Unlike union, no leftover loops are needed.

Walkthrough (list1 = [2, 6, 10, 15, 25], list2 = [3, 6, 7, 15, 20]):

  pass  list1[i]  list2[j]  added  list3 afterwards
  ----  --------  --------  -----  ----------------
    1       2         3        -    []                (skip 2: i moves)
    2       6         3        -    []                (skip 3: j moves)
    3       6         6        6    [6]               (equal: i and j move)
    4      10         7        -    [6]               (skip 7: j moves)
    5      10        15        -    [6]               (skip 10: i moves)
    6      15        15       15    [6, 15]           (equal: i and j move)
    7      25        20        -    [6, 15]           (skip 20: j moves)
  -> list2 is finished (j == 5), so the main loop exits.

  Leftovers: list1 still has 25, but it is ignored (not in list2).

Result: [6, 15]
Time O(n + m), space O(min(n, m)).
"""

list1 = [2, 6, 10, 15, 25]
list2 = [3, 6, 7, 15, 20]
list3 = []

i = 0
j = 0
k = 0

while (i < len(list1) and j < len(list2)):
    if list1[i] < list2[j]:
        i += 1
        k += 1
    elif list2[j] < list1[i]:
        j += 1
        k += 1
    else:
        list3.insert(k, list2[j])
        i += 1
        j += 1
        k += 1

print(list1)
print(list2)
print(list3)
