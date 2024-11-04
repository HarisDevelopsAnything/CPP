class HashTbADT

{
    int capacity:
    int size;
    int *data;

public:

    HashTblADT ();
    ~HashTblADT ();
    void insert(int);
    void deletion(int);
    void search(int);
    void getData();
    int hash(int); // hash function
    bool searchElement(int);
    void display();
}