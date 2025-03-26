from typing import Any


def main():
    nested = ['a', ['b', ['c', 'd'], 'e']]
    print(flatten(nested))

def flatten(input_list: list[Any]) -> list[Any]:
    flattened = []

    for item in input_list:
        if not isinstance(item, list):
            flattened.append(item)
        while isinstance(item, list):
            if not item:
                break
            component = item[0]
            if not isinstance(component, list):
                flattened.append(component)
                item = item[1:]
                continue
            flattened.extend(component)
            item = item[1:]

    return flattened

if __name__ == "__main__":
    main()
