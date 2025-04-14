def countGoodTriplets(arr, a, b, c) -> int:
    count = 0
    for i in range(0, len(arr) - 2):
        for j in range(i+1, len(arr) - 1):
            if abs(arr[i] - arr[j]) > a :
                continue
            for k in range(j+1, len(arr)):
                if abs(arr[i] - arr[j]) <= a and abs(arr[j] - arr[k]) <= b and abs(arr[i] - arr[k]) <= c:
                    count += 1
        
    return count

if __name__ == "__main__":
    arr1 = [3, 0, 1, 1, 9, 7]
    a1 = 7; b1 = 2; c1 = 3
    print(f'The results of the test case 1 : {countGoodTriplets(arr1,a1,b1,c1)}') 

    arr2 = [1, 1, 2, 2, 3]
    a2 = 0; b2 = 0; c2 = 1
    print(f'The results of the test case 1 : {countGoodTriplets(arr2,a2,b2,c2)}') 