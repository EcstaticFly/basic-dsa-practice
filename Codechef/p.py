import sys
input = sys.stdin.readline

class DSU:
    def __init__(self, n):
        self.p = list(range(n))
    def find(self, x):
        if self.p[x] != x:
            self.p[x] = self.find(self.p[x])
        return self.p[x]
    def union(self, a, b):
        ra, rb = self.find(a), self.find(b)
        if ra == rb:
            return False
        self.p[rb] = ra
        return True

def min_flips_to_forest(n, edges):
    """
    edges: list of (u, v, w) with w in {0,1}.
    Return minimum flips on the w's so that
    the subgraph of w==1 is acyclic.
    """
    dsu = DSU(n)
    flips = 0
    for u, v, w in edges:
        if w == 1:
            if not dsu.union(u, v):
                flips += 1
    return flips

def main():
    T = int(input())
    out = []
    for _ in range(T):
        n, m = map(int, input().split())
        edges = []
        for _ in range(m):
            u, v, w = map(int, input().split())
            edges.append((u-1, v-1, w))
        out.append(str(min_flips_to_forest(n, edges)))
    print("\n".join(out))

if __name__ == "__main__":
    main()
