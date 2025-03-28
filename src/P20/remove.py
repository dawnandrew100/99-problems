type Parameter = str | float | int

def main():
    original = ['a', 'b', 'c', 'd']
    print(remove(original, 2))

def remove(input_list: list[Parameter], element_num: int) -> list[Parameter] | None:
    if not isinstance(input_list, list) or not isinstance(element_num, int):
        return None
    if element_num > len(input_list):
        return None
    temp = input_list
    temp.pop(element_num-1)
    return temp

if __name__ == "__main__":
    main()
