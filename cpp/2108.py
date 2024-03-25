import sys

n = int(input)
listlist = [int(sys.stdin.readlin()) for _ in range(n)]

#print sum
sum = 0
for num in listlist:
    sum += num
print(round(sum/n))

#print mid
sorted_list = sorted(listlist)
print(sorted_list[sum // 2]) #remember, first is 0


#print rng