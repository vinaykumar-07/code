class Solution
{
public:
    Node *connect(Node *root)
    {
        if (!root)
            return NULL;

        queue<Node *> q;
        q.push(root);

        while (!q.empty())
        {
            int levelSize = q.size();
            auto dummy = new Node(0);
            auto cur = dummy;

            for (int i = 0; i < levelSize; i++)
            {
                auto node = q.front();
                q.pop();

                cur->next = node;
                cur = cur->next;

                if (node->left)
                    q.push(node->left);
                if (node->right)
                    q.push(node->right);
            }

            // Dummy node is not part of tree
            dummy->next = NULL;
            delete dummy;

            cur->next = NULL;
        }
        return root;
    }
};