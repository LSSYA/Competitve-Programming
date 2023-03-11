class NumMatrix:

    def __init__(self, matrix: List[List[int]]):
        rows, cols = len(matrix), len(matrix[0])
        self.newMat = [[0] * (cols + 1) for _ in range(rows + 1)]
        
        for r in range(rows):
            for c in range(cols):
                self.newMat[r + 1][c + 1] = matrix[r][c] + self.newMat[r][c + 1] + self.newMat[r + 1][c] - self.newMat[r][c]
        

    def sumRegion(self, row1: int, col1: int, row2: int, col2: int) -> int:
        r1, r2, c1, c2 = row1 + 1, row2 + 1, col1 + 1, col2 + 1
        
        br = self.newMat[r2][c2]
        ab = self.newMat[r1 - 1][c2]
        lf = self.newMat[r2][c1 - 1]
        tl = self.newMat[r1 - 1][c1 - 1]
        
        
        return br - ab - lf + tl
        


# Your NumMatrix object will be instantiated and called as such:
# obj = NumMatrix(matrix)
# param_1 = obj.sumRegion(row1,col1,row2,col2)