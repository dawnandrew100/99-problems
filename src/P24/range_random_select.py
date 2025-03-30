import random

def main():
    print(random_select(6, 49))
    print(random_select(6, 49)) #two prints to show that selections are random

def random_select(number_selected: int, list_len: int) -> list[int]:
    if not isinstance(list_len, int) or not isinstance(number_selected, int) or number_selected > list_len:
        return None
    temp = list(range(1, list_len+1))
    selected = []
    for _ in range(number_selected):
        chosen = random.choice(temp)
        temp.remove(chosen)
        selected.append(chosen)
    return selected

if __name__ == "__main__":
    main()
