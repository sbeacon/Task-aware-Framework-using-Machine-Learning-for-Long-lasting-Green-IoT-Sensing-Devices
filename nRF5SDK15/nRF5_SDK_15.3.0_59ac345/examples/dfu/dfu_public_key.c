
/* This file was automatically generated by nrfutil on 2019-02-14 (YY-MM-DD) at 14:06:19 */

#include "sdk_config.h"
#include "stdint.h"
#include "compiler_abstraction.h"

#if NRF_CRYPTO_BACKEND_OBERON_ENABLED
/* Oberon backend is changing endianness thus public key must be kept in RAM. */
#define _PK_CONST
#else
#define _PK_CONST const
#endif


/* This file was generated with a throwaway private key, that is only inteded for a debug version of the DFU project.
  Please see https://github.com/NordicSemiconductor/pc-nrfutil/blob/master/README.md to generate a valid public key. */

#ifdef NRF_DFU_DEBUG_VERSION 

/** @brief Public key used to verify DFU images */
__ALIGN(4) _PK_CONST uint8_t pk[64] =
{
    0x0e, 0xdf, 0x9f, 0xc8, 0xe6, 0x7b, 0x4e, 0x1a, 0xce, 0xe8, 0x6f, 0x86, 0xe2, 0x91, 0xc2, 0x98, 0x42, 0xc0, 0x23, 0x72, 0xfc, 0x76, 0xe6, 0xd2, 0xf7, 0x74, 0xfc, 0x09, 0x9f, 0xbf, 0x88, 0x5a, 
    0x79, 0x78, 0xd4, 0x2f, 0xcb, 0x27, 0x84, 0xb1, 0xd1, 0x82, 0x70, 0xf9, 0xe0, 0x14, 0xf9, 0x49, 0xa4, 0x47, 0xe9, 0x33, 0xaf, 0x7d, 0x07, 0x1d, 0xd0, 0x93, 0x4b, 0xd2, 0x93, 0x8b, 0xe6, 0x20
};

#else
__ALIGN(4) const uint8_t pk[64] =
{
    0x70, 0xc8, 0xf8, 0xab, 0x77, 0xb3, 0xd2, 0x48, 0x32, 0x5d, 0xac, 0x85, 0x99, 0x35, 0x12, 0x81, 0xea, 0x4f, 0x1b, 0x14, 0xf1, 0x92, 0x37, 0x47, 0x3d, 0x2b, 0xd4, 0x72, 0xe5, 0x25, 0x5c, 0x90,
    0x40, 0xf7, 0x78, 0xf5, 0x67, 0x6e, 0x75, 0x6f, 0x6b, 0xa7, 0x78, 0x46, 0xf3, 0xfe, 0xff, 0x59, 0x45, 0xc0, 0x1c, 0x8d, 0xf8, 0xb1, 0xb1, 0xca, 0x73, 0xf6, 0xb2, 0x6c, 0x41, 0xdc, 0xaf, 0x77
};
#endif
