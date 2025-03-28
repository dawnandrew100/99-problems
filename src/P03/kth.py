type Parameter = str | float | int

def main():
    my_list = ['a','b','c','d']
    print(pick_list_element(my_list, 0))

def pick_list_element(elements: list[Parameter], list_index: int) -> Parameter | None:
    if list_index > len(elements) or not isinstance(elements, list):
        return None
    return elements[list_index]

if __name__ == "__main__":
    main()
