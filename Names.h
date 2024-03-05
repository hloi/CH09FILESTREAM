//
// Created by hloi on 3/5/2024.
//

#ifndef CH09FILESTREAM_NAMES_H
#define CH09FILESTREAM_NAMES_H

#include <string>
#include <sstream>

using std::string;
using std::ostream;
using std::istream;
using std::endl;

class Names {
private:
    string first, last;
public:
    Names() {}
    Names(string& firstname, string& lastname) : first(firstname), last(lastname) {}

    friend ostream& operator<<(ostream& out, Names& other);

    friend  istream& operator>>(istream& in, Names& line);


};


#endif //CH09FILESTREAM_NAMES_H
