from typing import Any

def main():
    my_list = ['a', 'b', 'c', 'd']
    print(reverse(my_list))

def reverse(elements: list[Any]) -> Any:
    if not isinstance(elements, list):
        return None
    return elements[::-1]

if __name__ == "__main__":
    main()
