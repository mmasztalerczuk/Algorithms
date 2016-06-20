import sys

class graph:

    def __init__(self):
        self.vertexs = []
        self.edges = []
        self.edges_secondary = []
        self.edges_minimal = []

    def append(self, a):
        self.vertexs.append(a)

    def dfs(self, start=0):
        visited, stack, edges = [], [start], [(1,1)]
        while stack:
            vertex = stack.pop()
            el = edges.pop()
            self.edges.append(el)
            if vertex not in visited:
                visited.append(vertex)
                self.edges_minimal.append(el)
                tmp = []
                edges_tmp = []
                for i in self.vertexs[vertex].edges:
                    tmp.append(i.id)
                    edges_tmp.append((vertex, i.id))
                stack = stack + tmp
                edges = edges + edges_tmp
        self.visited = visited
        self.edges_minimal = self.edges_minimal[1:]
        self.edges = self.edges[1:]
        self.edges_secondary = list(self.edges)
        for item in self.edges_minimal:
            self.edges_secondary.remove(item)
            self.edges_secondary.remove((item[1], item[0]))

    def arti_point(self):
        ans = set()
        g.edges_minimal.sort()
        if len(g.edges_minimal) > 1:
            if g.edges_minimal[0][0] == 0 and g.edges_minimal[1][0] == 0:
                ans.add(0)

        for i in g.edges_minimal:
            if i[0] == 0:
                continue
            if g.low_list[i[1]] >= g.visited.index(i[0]):
                ans.add(i[0])
        return ans


    def low(self):
        self.low_list = [-1 for x in range(len(self.vertexs))]
        tmp = len(self.vertexs)

        for i in list(reversed(self.visited)):
            min_low = len(self.vertexs) + 1
            min_edg_sec = len(self.vertexs) + 1
            for item in self.vertexs[i].edges:
                if self.low_list[item.id] != -1:
                    min_low = min(self.low_list[item.id], min_low)

                if (i, item.id) in self.edges_secondary:
                    min_edg_sec = min(self.visited.index(item.id), min_edg_sec)


            self.low_list[i] = min(tmp, min_low, min_edg_sec)
            tmp -= 1

class vertex:
    def __init__(self, id):
        self.id = id
        self.edges = []

    def add_edge(self, p):
        self.edges.append(p)




while True:
    n = int(input())
    if n == 0:
        break
    g = graph()
    for i in range(n):
        g.append(vertex(i))
    while True:
        tmp = input()
        if tmp == "0":
            break
        tmp = list(map(int, tmp.split()))
        p = tmp[0]
        for j in range(1, len(tmp)):
            g.vertexs[p-1].add_edge(g.vertexs[tmp[j]-1])
            g.vertexs[tmp[j] - 1].add_edge(g.vertexs[p-1])

    g.dfs()
    g.low()
    print(len(g.arti_point()))










