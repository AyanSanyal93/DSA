"""Utilities for working with arrays."""
a = [2, 1, 3, 5, 6, 4, 8, 9, 15, 7]

def get_index(index):
    """Return the value at ``index``, or ``None`` for an invalid index."""
    if 0 <= index < len(a):
        return a[index]
    return None

print("get element at index 5 : ",get_index(5))

def replace_index_element(index,replcement):
    """Replace the value at ``index`` with ``replcement`` if the index is valid."""
    if 0 <= index < len(a):
        a[index] = replcement
    return None

replace_index_element(5,100)
print("get element at index 5 : ",a)