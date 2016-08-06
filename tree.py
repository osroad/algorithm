
def get_tree_predecessor(node):
	if (node.left):
		return node.left
	else:
		c = node.parent
		while (c and node == c.left):
			node = c
			c = node.parent
		return c

