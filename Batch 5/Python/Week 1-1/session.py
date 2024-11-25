name = "Hello World"
# (0, 'H')(1, 'e')

# for char in name:
#     print(char, end=",")


# for i in range(len(name)):
#     print(name[i])

# for i, char in enumerate(name):
#     print(f"index: {i} value: {char}")

# a, b, c = (10, 20, 30)

# print(a)
# print(b)

# for i, char in enumerate(name):
#     print(i, char)

# i, char = (0, 'H')
# print(i, char)

# nums = [1, 2, 3, 4, 5]

# for num in nums:
#     print(num)

a = 50
b = 0

# if a > b or b != 0:
#     print("A bigger")
# elif a == 0:
#     print('A is zero')
# elif b == 0:
#     print('B is zero')
# else:
#     print('B bigger')

# nums = [10, 20, 30]

# if 40 in nums:
#     print("number is present")
# else:
#     print("number is not present")


# string = "kdfjdawbckd"

# if 'abc' in string:
#     print("ase")
# else:
#     print("nai") a == b a is b

"""Function"""


def square(n):
    print(n * n)


def add(a, b):
    return a + b


""" Arguments Parameter """


def result_calculate(name, *args):
    sum = 0
    for num in args:
        sum += num

    # print(f"Name: {name}, Mark: {sum}")
    return [name, sum]  # name, mark = (name, mark)


name, mark = result_calculate("Mr. X", 10, 20, 80, 10, 34)

# print(f"Name: {name}, Mark: {mark}")
# res = square(10)
# res = add(5, 6)

""" Scope """

x = 10


def fun():
    global x
    x = 20
    print("Inside fun: ", x)


# fun()
# print("Outside fun: ", x)

""" List Comprehension """

nums = [1, 2, 3, 4, 5, 6]

# for i in range(len(nums)):
#     nums[i] = nums[i]**2

''' Read only '''
# for num in nums:
#     num = num**2

# print(nums)

# list comprehension
square_nums = [num**2 for num in nums]
# print(square_nums)

# loop way
odd_list = []
for num in nums:
    if num % 2 == 1:
        odd_list.append(num)

# print(odd_list)


# list comprehension way
odd_nums = [num for num in nums if num % 2 == 1 and num > 1]
# print(odd_nums)


""" input in python """

# n = int(input("Enter a number: "))
# arr = input("Enter array element")

# print(n)
# print(arr)

# num = []
# n = int(input())
# for i in range(n):
#     x = int(input())
#     num.append(x)

# print(n)
# print(num)

''' Way to input array '''

# 5
# 10 20 30 40 50

# n = int(input())
# arr = input().split()
# print(arr)


# way 1
# for i in range(len(arr)):
#     arr[i] = int(arr[i])

# # way 2
# int_arr = [int(x) for x in arr]
# print(int_arr)

# way 3

""" Map """


def square(x):
    return x*x


nums = [1, 2, 3, 4]
square_nums = list(map(square, nums))
# print(square_nums)

""" Array input using map """
# arr = input().split()


# def convert_int(x):
#     return int(x)


# int_array = list(map(int, arr))
# print(int_array)

""" Array input in one line """
arr = list(map(int, input().split()))
print(arr)
