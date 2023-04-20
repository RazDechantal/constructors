#include <iostream>

using namespace std;

/* Class Pair has already been declared
 * as shown in the following comments:
 *
 * Implement its member functions below.
 */
class Pair
{
public:
    int *pa, *pb;

    Pair(int a, int b)
    {
        pa = new int(a);
        pb = new int(b);
        cout << "A new pair is formed!" << endl;
    }

    Pair(const Pair &p)
    {
        pa = new int(*p.pa);
        pb = new int(*p.pb);
        cout << "Copy constructor formed!" << endl;
    }
    ~Pair()
    {
        delete pa;
        delete pb;
        pa = nullptr;
        pb = nullptr;
        cout << "The memory address was deleted successfully!" << endl;
    }

    void show_data()
    {
        cout << "pa holds value: " << *pa << " in address: " << pa << endl;
        cout << "pb holds value: " << *pb << " in address: " << pb << endl;
        cout << "================================" << endl;
    }
};

/* Here is a main() function you can use
 * to check your implementation of the
 * class Pair member functions.
 */

int main()
{
    Pair p(15, 16);
    p.show_data();
    Pair q(p);
    q.show_data();

    Pair *hp = new Pair(23, 42);
    hp->show_data();
    delete hp;

    /*
        if ((hp->pa != nullptr) && (hp->pb != nullptr))
        {
            cout << "Not proparely destructed!";
        }

    */

    std::cout << "If this message is printed,"
              << " at least the program hasn't crashed yet!\n"
              << "But you may want to print other diagnostic messages too." << std::endl;
    return 0;
}