#include "sum-nbo.h"

using namespace std;

uint32_t readValue(const char* filename) {
    FILE* file = fopen(filename, "rb"); //open to binary read mode
    uint32_t value;

    if (!file) {
        cerr << "Failed open file " << filename << endl;
        return 1;
    }

    uint32_t readBytes = fread(&value,sizeof(uint32_t),1,file); //read
    fclose(file);

    if (readBytes != 1) {
        cerr << "Failed read file " << filename <<endl;
        return 1;
    }
    return ntohl(value);
}
