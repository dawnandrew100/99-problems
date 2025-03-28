type Parameter = str | float | int

def main():
    unduplicated = ['a', 'b', 'c', 'c', 'd']
    print(duplicate(unduplicated))

def duplicate(input_list: list[Parameter]) -> list[Parameter]:
    if not isinstance(input_list, list) or len(input_list) == 0:
        return None 
    if len(input_list) == 1:
        return [input_list[0]]*2

    dupli_list = []
    for item in input_list:
        dupli_list.extend([item, item])
    return dupli_list

if __name__ == "__main__":
    main()
