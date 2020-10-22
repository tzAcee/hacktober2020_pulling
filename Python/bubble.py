# Python program for implementation of Bubble Sort

def bubbleSort(arr):
    n = len(arr)
    for i in range(n - 1):
        for j in range(0, n - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]


arr = [5,3,8,12,6,2,25,9]

bubbleSort(arr)

print("Sorted array is:")
for i in range(len(arr)):
    print(arr[i])
