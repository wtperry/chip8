#include <cstdint>

class Chip8CPU {
    public:
        void step();

    private:
        uint8_t V[16];
        uint16_t I;

        uint8_t DT;
        uint8_t ST;

        uint16_t PC;
        uint8_t SP;
};