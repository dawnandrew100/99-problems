type Parameter = str | float | int

def main():
    encoded = [[4, 'a'], 'b', [2, 'c'], [2, 'a'], 'd', [4, 'e']]
    print(unencode(encoded))

def unencode(input_list: list[Parameter]) -> list[Parameter]:
    unencoded = []
    for item in input_list:
        if isinstance(item, list):
            unencoded.extend([item[1]]*item[0])
            continue
        unencoded.append(item)

    return unencoded

if __name__ == "__main__":
    main()
