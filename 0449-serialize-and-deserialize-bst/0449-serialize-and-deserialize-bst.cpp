class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string str = "";
        if(root == NULL) return str;
        str = to_string(root->val) + "(" + serialize(root->left) + ")" + "(" + serialize(root->right) + ")";
        return str;
    }

    // Decodes your encoded data to tree.
    TreeNode* decode(string &data, int &i) {
        if(i < data.size() && data[i] == '(') i++;
        if(i>=data.size() || data[i] == ')') {
            return NULL;
        }
        
        int num = 0;
        while(data[i] <= '9' && data[i] >= '0') {
            num = num * 10 + (data[i] - '0');
            i++;
        }
        TreeNode* root = new TreeNode(num);root->left = decode(data, i);
        i++;root->right = decode(data, i);i++;
        return root;
    }
    TreeNode* deserialize(string data) {int i=0;
        return decode(data, i);       
    }
};