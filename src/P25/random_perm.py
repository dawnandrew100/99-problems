import random

type Parameters = str | float | int

def main():
    options = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h']
    print(random_perm(options))
    print(random_perm(options)) #two prints to show that selections are random

def random_perm(input_list: list[Parameters]) -> list[Parameters]:
    number_selected = len(input_list)
    if not isinstance(input_list, list) or number_selected > len(input_list):
        return None
    temp = input_list[:]
    selected = []
    for _ in range(number_selected):
        chosen = random.choice(temp)
        temp.remove(chosen)
        selected.append(chosen)
    return selected

if __name__ == "__main__":
    main()
