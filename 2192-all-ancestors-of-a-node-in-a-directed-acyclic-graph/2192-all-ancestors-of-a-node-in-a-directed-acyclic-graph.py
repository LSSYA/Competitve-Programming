class Solution:
    def getAncestors(self, n: int, edges: List[List[int]]) -> List[List[int]]:        
        graph = defaultdict(set)
        result = [0] * n
        
        for p,c in edges:            
            graph[c].add(p)
            
        for i in range(n):
            
            queue = deque([i])
            visited = set()
        
            while(queue):
                for j in range(len(queue)):

                    node = queue.popleft()
                    visited.add(node)

                    for child in graph[node]:
                        if child not in visited:
                            queue.append(child)
            
            visited.remove(i)
            result[i] = sorted(visited)
            
        return result
