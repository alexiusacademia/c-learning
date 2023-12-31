import sys

lst = [1, 2, 3, 4, 5, 6, 7,8, 9, 10]

list_size = sys.getsizeof(lst)

items_size = 0
for item in lst:
    items_size += sys.getsizeof(item)

print(f'Total size of the array is: { list_size + items_size }')
