type Parameter = str | float | int

def main():
    not_packed = ['a', 'a', 'a', 'a', 'b', 'c', 'c', 'a', 'a', 'd', 'e', 'e', 'e', 'e']
    print(pack(not_packed))

def pack(input_list: list[Parameter]) -> list[Parameter]:
    packed = []
    temp = []
    prev_item = input_list[0]

    for item in input_list:
        if item != prev_item:
            packed.append(temp)
            temp = []
            prev_item = item
        temp.append(item)
    packed.append(temp)

    return packed

if __name__ == "__main__":
    main()
