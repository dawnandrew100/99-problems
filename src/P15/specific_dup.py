type Parameter = str | float | int

def main():
    unduplicated = ['a', 'b', 'c', 'c', 'd']
    print(specific_duplicate(unduplicated, 3))

def specific_duplicate(input_list: list[Parameter], dup_num: int) -> list[Parameter]:
    if not isinstance(input_list, list) or len(input_list) == 0 or not isinstance(dup_num, int):
        return None
    if len(input_list) == 1:
        return [input_list[0]]*dup_num

    dupli_list = []
    for item in input_list:
        dupli_list.extend([item]*dup_num)
    return dupli_list

if __name__ == "__main__":
    main()
