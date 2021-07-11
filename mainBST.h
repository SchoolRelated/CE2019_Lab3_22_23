

class tree{
    public:
        virtual bool isEmpty() = 0;
        virtual bool add(int key, int value) = 0;
        virtual void max(int &output) = 0;
        virtual void min(int &output) = 0;
        virtual bool exists(int targetKey) = 0;
        virtual bool inorder() = 0;
};