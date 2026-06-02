class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        m = defaultdict(list)       # no need to initialize manually
        for words in strs:
            temp = "".join(sorted(words))
            m[temp].append(words)
        return list(m.values())