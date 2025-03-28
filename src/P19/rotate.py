type Parameter = str | float | int

def main():
    pre_rotate = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h']
    print(rotate(pre_rotate, 3))                  # ['d', 'e', 'f', 'g', 'h', 'a', 'b', 'c']
    print(rotate(pre_rotate, len(pre_rotate)+3))  # ['d', 'e', 'f', 'g', 'h', 'a', 'b', 'c']
    print(rotate(pre_rotate, -2))                 # ['g', 'h', 'a', 'b', 'c', 'd', 'e', 'f']
    print(rotate(pre_rotate, -len(pre_rotate)-2)) # ['g', 'h', 'a', 'b', 'c', 'd', 'e', 'f']

def rotate(input_list: list[Parameter], rotation_num: int) -> list[Parameter]:
    if rotation_num == 0:
        return input_list
    front = input_list[rotation_num%len(input_list):]
    back = input_list[:rotation_num%len(input_list)]
    return front + back

if __name__ == "__main__":
    main()
