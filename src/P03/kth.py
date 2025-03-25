from typing import Any

def main():
    my_list = ['a','b','c','d']
    print(pick_list_element(my_list, 0))

def pick_list_element(elements: list[Any], list_index: int) -> Any:
    if list_index > len(elements) or not isinstance(elements, list):
        return None
    return elements[list_index]

if __name__ == "__main__":
    main()
