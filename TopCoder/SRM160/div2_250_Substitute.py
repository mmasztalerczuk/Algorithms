class Substitute:
    def getValue(self, key, code):
        ans = ""
        for c in code:
            if key.find(c) != -1:
                ans += str((key.find(c)+1)%10)
        return ans

