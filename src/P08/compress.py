type Parameter = str | float | int

def main():
    not_compressed = ['a', 'a', 'a', 'a', 'b', 'c', 'c', 'a', 'a', 'd', 'e', 'e', 'e', 'e']
    print(compress(not_compressed))

def compress(input_list: list[Parameter]) -> list[Parameter]:
    compressed = []
    prev_item = ''

    for item in input_list:
        if item != prev_item:
            compressed.append(item)
            prev_item = item

    return compressed

if __name__ == "__main__":
    main()
