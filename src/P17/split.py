type Parameter = str | float | int

def main():
    pre_split = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'k']
    L1, L2 = split(pre_split, 3)
    print(f"{L1 = }\n{L2 = }")

def split(input_list: list[Parameter], split_num: int) -> list[Parameter]:
    if not isinstance(input_list, list) or len(input_list) == 0 or not isinstance(split_num, int):
        return None 
    if len(input_list) <= split_num:
        return input_list, []
    return input_list[:split_num], input_list[split_num:]

if __name__ == "__main__":
    main()
