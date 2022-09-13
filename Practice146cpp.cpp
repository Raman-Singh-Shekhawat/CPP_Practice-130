// 147. Code : Find height: Given a generic tree, find and return the height of given tree.

/************************************************************

    Following is the structure for the TreeNode class

    template <typename T>
    class TreeNode {
     public:
        T data;
        vector<TreeNode<T>*> children;

        TreeNode(T data) {
            this->data = data;
        }

        ~TreeNode() {
            for (int i = 0; i < children.size(); i++) {
                delete children[i];
            }
        }
    };

************************************************************/

int getHeight(TreeNode<int> *root)
{

    if (!root)
    {

        return NULL;
    }

    int height1 = 0;

    for (int i = 0; i < root->children.size(); i++)
    {

        int height2 = getHeight(root->children[i]);

        if (height2 > height1)
        {

            height1 = height2;
        }
    }

    return height1 + 1;
}