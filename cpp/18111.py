import sys
N, M, B = map(int, input().split())
block = []
lev = 0

for _ in range(N):
    block.append([int(x) for x in sys.stdin.readline().rstrip().split()])
# print(block)

ans = sys.maxsize

for i in range(257):
    time = 0
    put_block = 0
    del_block = 0
    for row in range(N):
        for col in range(M):
            # print("for", row, col)
            if block[row][col] > i:
                del_block += block[row][col] - i
            else:
                put_block += i - block[row][col]
            # print(del_block, put_block)
    if put_block > del_block + B:
        continue
    
    if ans >= del_block * 2 + put_block:
        ans = del_block * 2 + put_block
        lev = i

print(ans, lev)