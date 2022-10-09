n = int(input())

string = "a"
char = ord('b')
for i in range(1,n):
    nx = ""
    for j in string:
        if(j == chr(char-1)):   # char-1 is to check before character
            nx += (chr(char) + j + chr(char))
        else:
            nx += j
    string = nx
    char += 1   # Changing the alphabet
print(string)       