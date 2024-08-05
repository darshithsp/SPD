#define set_bit(value, n) (value |= (1<<n))
#define clear_bit(value, n) (value &= (~(1<<n)))
#define toggle_bit(value, n) (value ^= (1<<n))
#define mask(n) ((1<<n)-1)