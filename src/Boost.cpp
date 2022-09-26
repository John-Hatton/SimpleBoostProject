
#include "Boost.h"



int main() {
    using namespace boost::lambda;
    typedef std::istream_iterator<int> in;
    std::for_each(
            in(std::cin), in(), std::cout << (_1 * 3) << " ");

    std::cout << Boost::fooBar() << std::endl;


}


std::string Boost::fooBar() {
    return "Foo Bar!";
}
