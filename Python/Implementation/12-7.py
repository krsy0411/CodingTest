# 문자열 입력받음
n = input()
length = len(n)
sum = 0

# 항상 짝수 자릿수만 입력받음
for i in range(length // 2):
  sum += int(n[i])
for i in range(length//2, length):
  sum -= int(n[i])

if sum == 0:
  print('LUCKY')
else:
  print('READY')