type Parameter = str | float | int

def main():
    palindrome = ['x', 'a', 'm', 'a', 'x']
    not_a_palindrome = ['b', 'a', 'm', 'a', 'a']
    num_palindrome = [1, 5, 6, 5, 1]

    print(find_palindrome(palindrome))
    #True
    print(find_palindrome(not_a_palindrome))
    #False
    print(find_palindrome(num_palindrome))
    #True

def find_palindrome(test: list[Parameter]) -> bool:
    for i in range(len(test)//2):
        if test[i] != test[-i -1]:
            return False
    return True

if __name__ == "__main__":
    main()


