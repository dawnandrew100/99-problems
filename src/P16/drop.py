type Parameter = str | float | int

def main():
    pre_drop = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'k']
    print(drop(pre_drop, 3))

def drop(input_list: list[Parameter], drop_num: int) -> list[Parameter] | None:
    if not isinstance(input_list, list) or len(input_list) == 0 or not isinstance(drop_num, int):
        return None 
    if len(input_list) < drop_num:
        return input_list
    if len(input_list) == drop_num:
        return input_list[:drop_num-1]

    for i in range(drop_num-1, len(input_list), drop_num):
        input_list[i] = ''
    return_list = [x for x in input_list if x != '']
    return return_list

if __name__ == "__main__":
    main()
