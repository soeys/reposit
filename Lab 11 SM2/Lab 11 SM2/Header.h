#ifndef D
#define D

class church {
    string name;
    char school;
    int count;
    int square;
public:
    void set(string a, char b, int c, int d);
    void get(string a, char& b, int& c, int& d);
    void show(void);
};

#endif // !D

