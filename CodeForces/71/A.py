n = int(input())

for _ in range(n):
    text = input()
    length = len(text)

    if length > 10:
        print(f"{text[0]}{length-2}{text[-1]}")
    else:
        print(text)

