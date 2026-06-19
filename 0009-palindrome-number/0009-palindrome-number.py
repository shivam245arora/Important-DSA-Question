class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool

        """
        string_x=str(x)

        rev=string_x[::-1]
        return string_x==rev
        