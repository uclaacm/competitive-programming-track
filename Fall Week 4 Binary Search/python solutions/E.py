# This is only as a reference. You will get TLE if you submit this python code.

MAXN = 200005

prefix_zeroes = [0] * (MAXN + 1)
prefix_ones = [0] * (MAXN + 1)
result = [0] * MAXN

def solve(s):
    n = len(s)

    for i in range(n):
        prefix_zeroes[i + 1] = prefix_zeroes[i] + (s[i] == '0')
        prefix_ones[i + 1] = prefix_ones[i] + (s[i] == '1')

    for k in range(1, n + 1):
        m = 0 
        i = 0 

        while i < n:
            L, R = i, n
            while L < R:
                mid = (L + R) // 2
                cnt0 = prefix_zeroes[mid + 1] - prefix_zeroes[i]
                cnt1 = prefix_ones[mid + 1] - prefix_ones[i]
                if cnt0 <= k or cnt1 <= k:
                    L = mid + 1
                else:
                    R = mid
            i = L
            m += 1
        result[k - 1] = m

if __name__ == "__main__":
    s = input().strip()

    solve(s)

    print(" ".join(map(str, result[:len(s)])))
