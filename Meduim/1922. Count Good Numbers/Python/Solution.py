def countGoodNumbers(n: int) -> int:
    MOD = 10**9 + 7

    def pow(x, n):
        res = 1
        while n > 0:
            if n % 2:
                res = (res * x) % MOD
            n = n // 2
            x = (x * x) % MOD

        return res 
            

    odds = (n//2)
    even = n - (n//2)

    return (pow(5,even) * pow(4, odds)) % MOD 


if __name__ == "__main__":

    n1 = 1
    print(f'The results for the test case 1 : {countGoodNumbers(n1)}')

    n2 = 4
    print(f'The results for the test case 2 : {countGoodNumbers(n2)}')

    n3 = 50
    print(f'The results for the test case 3 : {countGoodNumbers(n3)}')
