# include <iostream>

// long = long int
// long long = long long int
// long <= long long
// short = short int
// unsigned -> (char, short, int, long, long long) 
// float, double, long double 
// bool
// sizeof operator
// pointers, references

int main(){
    unsigned int var1 = 2500000000;
    int var2 = 2500000000; // exceeds the limit 2,147,483,647

    std::cout << var1 << " " << var2 << " " << sizeof(int) << " " << sizeof(long)  << std::endl;

    short x = 65; 
    char y = 65;

    std::cout << "x: " << x << " y: " << y << std::endl;     // type of variable is important in cout.

    float t = 4.4f; // if you indicate 'f' at the end, auto type conversion won't take place.
    float p = 3.5; // (double)3.5
    double v = 3.3;

    std::cout << "t: " << sizeof t << " p: " << sizeof p << " v: " << sizeof v << std::endl;

    bool truth1 = true; // 1
    bool truth2 = false; // 0

    std::cout << truth1 << " " << truth2 << std::endl;




}