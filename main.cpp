#include "sum-nbo.h"

using namespace std;

int main(int argc, char* argv[])
{
    uint32_t sum = 0;
    vector<uint32_t> values;

    if (argc < 2) {
        cerr << "Argument Error" << endl;
        return 1;
    }

    for (int i=1; i < argc; ++i) {
        values.push_back(readValue(argv[i]));
    }

    for (int i = 0; i < values.size(); ++i) {
        sum += values[i];
        printf("%d(0x%08x)", values[i], values[i]);

        if (i < values.size() - 1)
            printf(" + ");
    }

    printf(" = %u(0x%08x)", sum, sum);
    printf("\n");
    return 0;

}
