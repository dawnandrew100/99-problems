type Parameter = str | float | int

def main():
    original = ['a', 'b', 'c', 'd']
    print(insert_at('alfa', original, 2))

def insert_at(insertion: Parameter, input_list: list[Parameter], element_num: int) -> list[Parameter] | None:
    if not isinstance(input_list, list) or not isinstance(element_num, int):
        return None
    if element_num > len(input_list):
        return None
    temp = input_list
    temp.insert(element_num-1, insertion)
    return temp

if __name__ == "__main__":
    main()
