//
// Created by hloi on 3/5/2024.
//

#include "Names.h"

ostream& operator<<(ostream& out, Names& other) {
    out << other.first << ", " << other.last << endl;
    return out;
}

istream &operator>>(istream &in, Names &line) {
    getline(in, line.first, ',');
    getline(in, line.last, ',');
    return in;
}
