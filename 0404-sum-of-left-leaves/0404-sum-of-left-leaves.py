# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sumOfLeftLeaves(self, root: Optional[TreeNode]) -> int:
        if root is None:
            return 0

        total = 0

        # Check if left child is a leaf
        if root.left and root.left.left is None and root.left.right is None:
            total += root.left.val

        total += self.sumOfLeftLeaves(root.left)
        total += self.sumOfLeftLeaves(root.right)

        return total
            


        