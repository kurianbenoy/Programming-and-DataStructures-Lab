# 1

# Given an unsorted array A of size N that contains only non-negative integers,
# find a continuous sub-array which adds to a given number S.


class Solution:
    def subArraySum(self, arr, n, s):
        """My Naive way of solving this problem."""
        # for x, a in enumerate(arr):
        #     for y, b in enumerate(arr[x + 1 :]):
        #         if sum(arr[x : x + y + 1]) == s:
        #             return [x + 1, x + y + 1]

        """After looking at hints noticed there is a technique called
        sliding window technique
        We need to use Sliding window Method to solve this Problem.

        Add the elements, to current sum till it is less than S. If it becomes more than S, start deleting elements from start in the current sum. if the current sum again becomes less than S, again start adding elements to it. In between also check, if the current sum becomes equal to S.
        If yes, then output start and end index, else after traversing array no such solution is found, output -1.

        The complete solution is in next hint.
        """
        sum = 0
        start, end = (0, 0)
        for x, a in enumerate(arr):
            print(sum)
            print("pos", start, end)
            if sum == s:
                end = x
                return start + 1, end
            sum += a
            if sum < s:
                continue
            elif sum > s:
                sum -= arr[start]
                start = start + 1


import math


def main():
    T = int(input())
    while T > 0:
        NS = input().strip().split()
        N = int(NS[0])
        S = int(NS[1])

        A = list(map(int, input().split()))
        ob = Solution()
        ans = ob.subArraySum(A, N, S)

        for i in ans:
            print(i, end=" ")

        print()
        T -= 1


if __name__ == "__main__":
    main()
