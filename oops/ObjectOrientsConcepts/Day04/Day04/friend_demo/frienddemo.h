class FriendDemo
{
    private:
        int a;
        int b;
    public:
    // decl of member functions
        FriendDemo();
        FriendDemo(int a, int b);
        void print();
        ~FriendDemo();
       friend void sum();

}; // end of class