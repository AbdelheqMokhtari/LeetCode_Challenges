# Time Complexity is O(N log(N)).
# Space Complexity is O(Log(N)).
# I used Hashmaps 

def countLargestGroup(n: int) -> int:
    map_count = {}
    for i in range(1, n+1):
        key = sum(int(digit) for digit in str(i))
        if key in map_count:
            map_count[key] += 1
        else:
            map_count[key] = 1
    results_list = list(map_count.values())
    return results_list.count(max(results_list))

if __name__ == "__main__":
    n1 = 13
    n2 = 2
    print(f'for the 1 test case the results : {countLargestGroup(n1)}')
    print(f'for the 2 test case the results : {countLargestGroup(n2)}')