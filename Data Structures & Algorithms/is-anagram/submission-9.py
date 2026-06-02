class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        m = {}
        for c1, c2 in zip(s, t):
            m[c1] = m.get(c1, 0) + 1
            m[c2] = m.get(c2, 0) - 1
        # if the whole map is = 0 we know that the strings are anagrams
        return all(v == 0 for v in m.values())
        
