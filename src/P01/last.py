from typing import Any

def main():
    my_list = ['a','b','c','d']
    print(last(my_list))

def last(elements: list[Any]) -> Any:
    if not isinstance(elements, list):
        return None
    return elements[-1]

if __name__ == "__main__":
    main()
