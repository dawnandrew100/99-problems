type Parameter = str | float | int

def main():
    my_list = ['a','b','c','d']
    print(penultimate(my_list))

def penultimate(elements: list[Parameter]) -> Parameter:
    if len(elements) < 2 or not isinstance(elements, list):
        return None
    return elements[-2]

if __name__ == "__main__":
    main()
