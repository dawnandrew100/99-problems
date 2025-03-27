type Parameter = str | float | int

def main():
    not_encoded = ['a', 'a', 'a', 'a', 'b', 'c', 'c', 'a', 'a', 'd', 'e', 'e', 'e', 'e']
    print(encode(not_encoded))

def encode(input_list: list[Parameter]) -> list[Parameter]:
    encoded = []
    temp = []
    prev_item = input_list[0]

    for item in input_list:
        if item != prev_item:
            encoded.append([len(temp), temp[0]])
            temp = []
            prev_item = item
        temp.append(item)
    encoded.append([len(temp), temp[0]])

    return encoded

if __name__ == "__main__":
    main()
