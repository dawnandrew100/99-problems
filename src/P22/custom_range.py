def main():
    start_value = 4
    end_value = 9
    print(list(range(start_value, end_value+1))) # actual answer
    print(custom_range(start_value, end_value))  # answer without range or for loops

def custom_range(start: int, end: int) -> list[int] | None:
    if not isinstance(start, int) or not isinstance(end, int) or end < start:
        return None
    range_list = []
    i = start
    while i <= end:
        range_list.append(i)
        i += 1
    return range_list

if __name__ == "__main__":
    main()
