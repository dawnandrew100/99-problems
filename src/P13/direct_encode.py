type Parameter = str | float | int

def main():
    unencoded = ['a', 'a', 'a', 'a', 'b', 'c', 'c', 'a', 'a', 'd', 'e', 'e', 'e', 'e']
    print(direct_encode(unencoded))

def direct_encode(input_list: list[Parameter]) -> list[list[Parameter]] | None:
    if not isinstance(input_list, list):
        return None

    list_length = len(input_list)

    if list_length <= 1:
        value = input_list[0] if list_length == 1 else input_list
        return [[list_length, value]]

    start = 0
    end = start + 1
    last_item = input_list[0]
    current_count = 0
    encoded = []
    for item in input_list:
        if item != last_item:
            if current_count == 1:
                encoded.append(last_item)
            elif current_count > 1:
                encoded.append([current_count, last_item])
            last_item = item
            current_count = 0
        current_count += 1
    if current_count == 1:
        encoded.append(last_item)
    elif current_count > 1:
        encoded.append([current_count, last_item])
    return encoded

if __name__ == "__main__":
    main()
