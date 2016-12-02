import sys

sentence = input("Enter a sentence: ")
list1 = sentence.split(" ")
newList = []

def pyReverse():
    for i in range(1, len(list1) +1):
        newList.append(list1[len(list1) -i])
    return " ".join(newList)

print(pyReverse())

