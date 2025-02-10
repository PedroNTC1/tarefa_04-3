#define LED_COUNT 25

// Padrões para os números de 0 a 9 na matriz de leds
const uint32_t numbers_matrix[10][LED_COUNT] = {
    {0x00FF99, 0x00FF99, 0x00FF99, 0x00FF99, 0x00FF99, 
     0x00FF99, 0x000000, 0x000000, 0x000000, 0x00FF99, 
     0x00FF99, 0x000000, 0x000000, 0x000000, 0x00FF99, 
     0x00FF99, 0x000000, 0x000000, 0x000000, 0x00FF99, 
     0x00FF99, 0x00FF99, 0x00FF99, 0x00FF99, 0x00FF99}, // 0

    {0x000000, 0x000000, 0x00FF99, 0x000000, 0x000000, 
     0x000000, 0x000000, 0x00FF99, 0x000000, 0x000000, 
     0x000000, 0x000000, 0x00FF99, 0x000000, 0x000000, 
     0x000000, 0x000000, 0x00FF99, 0x000000, 0x000000, 
     0x000000, 0x000000, 0x00FF99, 0x000000, 0x000000}, // 1

    {0x00FF99, 0x00FF99, 0x00FF99, 0x00FF99, 0x00FF99, 
     0x00FF99, 0x000000, 0x000000, 0x000000, 0x000000, 
     0x00FF99, 0x00FF99, 0x00FF99, 0x00FF99, 0x00FF99, 
     0x000000, 0x000000, 0x000000, 0x000000, 0x00FF99, 
     0x00FF99, 0x00FF99, 0x00FF99, 0x00FF99, 0x00FF99}, // 2

    {
        0x00FF99, 0x00FF99, 0x00FF99, 0x00FF99, 0x00FF99, 
        0x000000, 0x000000, 0x000000, 0x000000, 0x00FF99, 
        0x00FF99, 0x00FF99, 0x00FF99, 0x00FF99, 0x000000, 
        0x000000, 0x000000, 0x000000, 0x000000, 0x00FF99, 
        0x00FF99, 0x00FF99, 0x00FF99, 0x00FF99, 0x00FF99
     }, // 3

    {
        0x00FF99, 0x000000, 0x000000, 0x000000, 0x00000,
        0x000000, 0x000000, 0x000000, 0x000000, 0x00FF99, 
        0x00FF99, 0x00FF99, 0x00FF99, 0x00FF99, 0x00FF99,   
        0x00FF99, 0x000000, 0x000000, 0x000000, 0x00FF99, 
        0x00FF99, 0x000000, 0x000000, 0x000000, 0x00FF99, 
     }, // 4

    {0x00FF99, 0x00FF99, 0x00FF99, 0x00FF99, 0x00FF99, 
     0x000000, 0x000000, 0x000000, 0x000000, 0x00FF99, 
     0x00FF99, 0x00FF99, 0x00FF99, 0x00FF99, 0x00FF99, 
     0x00FF99, 0x000000, 0x000000, 0x000000, 0x000000, 
     0x00FF99, 0x00FF99, 0x00FF99, 0x00FF99, 0x00FF99}, // 5

    {
        0x00FF99, 0x00FF99, 0x00FF99, 0x00FF99, 0x00FF99, 
        0x00FF99, 0x000000, 0x000000, 0x000000, 0x00FF99, 
        0x00FF99, 0x00FF99, 0x00FF99, 0x00FF99, 0x00FF99, 
        0x00FF99, 0x000000, 0x000000, 0x000000, 0x000000, 
        0x00FF99, 0x00FF99, 0x00FF99, 0x00FF99, 0x00FF99
     }, // 6

    {
    0x000000, 0x000000, 0x000000, 0x000000, 0x00FF99, 
    0x000000, 0x00FF99, 0x000000, 0x000000, 0x000000, 
    0x000000, 0x000000, 0x00FF99, 0x000000, 0x000000, 
    0x000000, 0x000000, 0x000000, 0x00FF99, 0x000000, 
    0x00FF99, 0x00FF99, 0x00FF99, 0x00FF99, 0x00FF99 }, // 7

    {0x00FF99, 0x00FF99, 0x00FF99, 0x00FF99, 0x00FF99, 
     0x00FF99, 0x000000, 0x000000, 0x000000, 0x00FF99, 
     0x00FF99, 0x00FF99, 0x00FF99, 0x00FF99, 0x00FF99, 
     0x00FF99, 0x000000, 0x000000, 0x000000, 0x00FF99, 
     0x00FF99, 0x00FF99, 0x00FF99, 0x00FF99, 0x00FF99}, // 8

    {0x00FF99, 0x00FF99, 0x00FF99, 0x00FF99, 0x00FF99, 
     0x000000, 0x000000, 0x000000, 0x000000, 0x00FF99,
     0x00FF99, 0x00FF99, 0x00FF99, 0x00FF99, 0x00FF99, 
     0x00FF99, 0x000000, 0x000000, 0x000000, 0x00FF99,
     0x00FF99, 0x00FF99, 0x00FF99, 0x00FF99, 0x00FF99}  // 9
};