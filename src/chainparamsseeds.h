#ifndef BITCOIN_CHAINPARAMSSEEDS_H
#define BITCOIN_CHAINPARAMSSEEDS_H
/**
 * List of fixed seed nodes for the bitcoin network
 * AUTOGENERATED by share/seeds/generate-seeds.py
 *
 * Each line contains a 16-byte IPv6 address and a port.
 * IPv4 as well as onion addresses are wrapped inside a IPv6 address accordingly.
 */
 // ***TODO*** fix generate-seeds.py and REGENERATE
static SeedSpec6 pnSeed6_main[] = {
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x7f,0x00,0x00,0x01}, 1993},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xA7,0x63,0xAB,0xDD}, 1993},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x8A,0x44,0x16,0x67}, 1993},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x9D,0xE6,0x8A,0x79}, 1993},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x9F,0x59,0x81,0xC3}, 1993},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x44,0xB7,0xA2,0xFD}, 1993},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x9D,0xE6,0x8F,0x51}, 1993},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x8E,0x5D,0x5E,0x24}, 1993},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x9D,0xE6,0x88,0xDE}, 1993},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x9D,0xE6,0x88,0x7E}, 1993},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x8A,0xC5,0xC3,0x64}, 1993},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xB2,0x80,0x83,0x95}, 1993},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xB2,0x80,0x80,0x36}, 1993},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x9F,0x59,0xDD,0x41}, 1993},
    {{0x26,0x04,0xA8,0x80,0x00,0x02,0x00,0xD0,0x00,0x00,0x00,0x00,0x22,0x4B,0xB0,0x01}, 1993},
    {{0x26,0x04,0xA8,0x80,0x00,0x02,0x00,0xD0,0x00,0x00,0x00,0x00,0x23,0x60,0xA0,0x01}, 1993},
    {{0x26,0x04,0xA8,0x80,0x00,0x02,0x00,0xD0,0x00,0x00,0x00,0x00,0x23,0x60,0x60,0x01}, 1993},
    {{0x26,0x04,0xA8,0x80,0x00,0x02,0x00,0xD0,0x00,0x00,0x00,0x00,0x18,0x80,0x10,0x01}, 1993},
    {{0x26,0x04,0xA8,0x80,0x00,0x02,0x00,0xD0,0x00,0x00,0x00,0x00,0x23,0x61,0x60,0x01}, 1993},
    {{0x26,0x04,0xA8,0x80,0x00,0x02,0x00,0xD0,0x00,0x00,0x00,0x00,0x23,0x1C,0xB0,0x01}, 1993},
    {{0x26,0x04,0xA8,0x80,0x00,0x02,0x00,0xD0,0x00,0x00,0x00,0x00,0x23,0x5E,0x60,0x01}, 1993},
    {{0x26,0x04,0xA8,0x80,0x00,0x02,0x00,0xD0,0x00,0x00,0x00,0x00,0x23,0x5E,0x70,0x01}, 1993},
    {{0x26,0x04,0xA8,0x80,0x00,0x02,0x00,0xD0,0x00,0x00,0x00,0x00,0x23,0x1D,0x90,0x01}, 1993},
    {{0x26,0x04,0xA8,0x80,0x00,0x02,0x00,0xD0,0x00,0x00,0x00,0x00,0x23,0x62,0xF0,0x01}, 1993}
};

static SeedSpec6 pnSeed6_test[] = {
//    {{0xfd,0x87,0xd8,0x7e,0xeb,0x43,0x99,0xcb,0x26,0x31,0xba,0x48,0x51,0x31,0x39,0x0d}, 18333},
//    {{0xfd,0x87,0xd8,0x7e,0xeb,0x43,0x44,0xf4,0xf4,0xf0,0xbf,0xf7,0x7e,0x6d,0xc4,0xe8}, 18333}
};
#endif // BITCOIN_CHAINPARAMSSEEDS_H
