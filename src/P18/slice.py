type Parameter = str | float | int

def main():
    pre_slice = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'k']
    print(slice(pre_slice, 3, 7))

def slice(input_list: list[Parameter], slice_start: int, slice_end: int) -> list[Parameter]:
    if not isinstance(input_list, list) or len(input_list) == 0 or not isinstance(slice_start, int) or not isinstance(slice_end, int):
        return None 
    return input_list[slice_start-1:slice_end]

if __name__ == "__main__":
    main()
