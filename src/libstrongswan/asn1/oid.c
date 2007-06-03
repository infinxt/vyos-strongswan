/* List of some useful object identifiers (OIDs)
 * Copyright (C) 2003-2004 Andreas Steffen, Zuercher Hochschule Winterthur
 * 
 * This file has been automatically generated by the script oid.pl
 * Do not edit manually!
 */

#include <stdlib.h>

#include "oid.h"

const oid_t oid_names[] = {
  {0x02,                       7, 1, "ITU-T Administration"   },  /*   0 */
  {  0x82,                     0, 1, ""                       },  /*   1 */
  {    0x06,                   0, 1, "Germany ITU-T member"   },  /*   2 */
  {      0x01,                 0, 1, "Deutsche Telekom AG"    },  /*   3 */
  {        0x0A,               0, 1, ""                       },  /*   4 */
  {          0x07,             0, 1, ""                       },  /*   5 */
  {            0x14,           0, 0, "ND"                     },  /*   6 */
  {0x09,                      18, 1, "data"                   },  /*   7 */
  {  0x92,                     0, 1, ""                       },  /*   8 */
  {    0x26,                   0, 1, ""                       },  /*   9 */
  {      0x89,                 0, 1, ""                       },  /*  10 */
  {        0x93,               0, 1, ""                       },  /*  11 */
  {          0xF2,             0, 1, ""                       },  /*  12 */
  {            0x2C,           0, 1, ""                       },  /*  13 */
  {              0x64,         0, 1, "pilot"                  },  /*  14 */
  {                0x01,       0, 1, "pilotAttributeType"     },  /*  15 */
  {                  0x01,    17, 0, "UID"                    },  /*  16 */
  {                  0x19,     0, 0, "DC"                     },  /*  17 */
  {0x55,                      52, 1, "X.500"                  },  /*  18 */
  {  0x04,                    36, 1, "X.509"                  },  /*  19 */
  {    0x03,                  21, 0, "CN"                     },  /*  20 */
  {    0x04,                  22, 0, "S"                      },  /*  21 */
  {    0x05,                  23, 0, "SN"                     },  /*  22 */
  {    0x06,                  24, 0, "C"                      },  /*  23 */
  {    0x07,                  25, 0, "L"                      },  /*  24 */
  {    0x08,                  26, 0, "ST"                     },  /*  25 */
  {    0x0A,                  27, 0, "O"                      },  /*  26 */
  {    0x0B,                  28, 0, "OU"                     },  /*  27 */
  {    0x0C,                  29, 0, "T"                      },  /*  28 */
  {    0x0D,                  30, 0, "D"                      },  /*  29 */
  {    0x24,                  31, 0, "userCertificate"        },  /*  30 */
  {    0x29,                  32, 0, "N"                      },  /*  31 */
  {    0x2A,                  33, 0, "G"                      },  /*  32 */
  {    0x2B,                  34, 0, "I"                      },  /*  33 */
  {    0x2D,                  35, 0, "ID"                     },  /*  34 */
  {    0x48,                   0, 0, "role"                   },  /*  35 */
  {  0x1D,                     0, 1, "id-ce"                  },  /*  36 */
  {    0x09,                  38, 0, "subjectDirectoryAttrs"  },  /*  37 */
  {    0x0E,                  39, 0, "subjectKeyIdentifier"   },  /*  38 */
  {    0x0F,                  40, 0, "keyUsage"               },  /*  39 */
  {    0x10,                  41, 0, "privateKeyUsagePeriod"  },  /*  40 */
  {    0x11,                  42, 0, "subjectAltName"         },  /*  41 */
  {    0x12,                  43, 0, "issuerAltName"          },  /*  42 */
  {    0x13,                  44, 0, "basicConstraints"       },  /*  43 */
  {    0x14,                  45, 0, "crlNumber"              },  /*  44 */
  {    0x15,                  46, 0, "reasonCode"             },  /*  45 */
  {    0x1F,                  47, 0, "crlDistributionPoints"  },  /*  46 */
  {    0x20,                  48, 0, "certificatePolicies"    },  /*  47 */
  {    0x23,                  49, 0, "authorityKeyIdentifier" },  /*  48 */
  {    0x25,                  50, 0, "extendedKeyUsage"       },  /*  49 */
  {    0x37,                  51, 0, "targetInformation"      },  /*  50 */
  {    0x38,                   0, 0, "noRevAvail"             },  /*  51 */
  {0x2A,                      89, 1, ""                       },  /*  52 */
  {  0x86,                     0, 1, ""                       },  /*  53 */
  {    0x48,                   0, 1, ""                       },  /*  54 */
  {      0x86,                 0, 1, ""                       },  /*  55 */
  {        0xF7,               0, 1, ""                       },  /*  56 */
  {          0x0D,             0, 1, "RSADSI"                 },  /*  57 */
  {            0x01,          84, 1, "PKCS"                   },  /*  58 */
  {              0x01,        67, 1, "PKCS-1"                 },  /*  59 */
  {                0x01,      61, 0, "rsaEncryption"          },  /*  60 */
  {                0x02,      62, 0, "md2WithRSAEncryption"   },  /*  61 */
  {                0x04,      63, 0, "md5WithRSAEncryption"   },  /*  62 */
  {                0x05,      64, 0, "sha-1WithRSAEncryption" },  /*  63 */
  {                0x0B,      65, 0, "sha256WithRSAEncryption"},  /*  64 */
  {                0x0C,      66, 0, "sha384WithRSAEncryption"},  /*  65 */
  {                0x0D,       0, 0, "sha512WithRSAEncryption"},  /*  66 */
  {              0x07,        74, 1, "PKCS-7"                 },  /*  67 */
  {                0x01,      69, 0, "data"                   },  /*  68 */
  {                0x02,      70, 0, "signedData"             },  /*  69 */
  {                0x03,      71, 0, "envelopedData"          },  /*  70 */
  {                0x04,      72, 0, "signedAndEnvelopedData" },  /*  71 */
  {                0x05,      73, 0, "digestedData"           },  /*  72 */
  {                0x06,       0, 0, "encryptedData"          },  /*  73 */
  {              0x09,         0, 1, "PKCS-9"                 },  /*  74 */
  {                0x01,      76, 0, "E"                      },  /*  75 */
  {                0x02,      77, 0, "unstructuredName"       },  /*  76 */
  {                0x03,      78, 0, "contentType"            },  /*  77 */
  {                0x04,      79, 0, "messageDigest"          },  /*  78 */
  {                0x05,      80, 0, "signingTime"            },  /*  79 */
  {                0x06,      81, 0, "counterSignature"       },  /*  80 */
  {                0x07,      82, 0, "challengePassword"      },  /*  81 */
  {                0x08,      83, 0, "unstructuredAddress"    },  /*  82 */
  {                0x0E,       0, 0, "extensionRequest"       },  /*  83 */
  {            0x02,          87, 1, "digestAlgorithm"        },  /*  84 */
  {              0x02,        86, 0, "md2"                    },  /*  85 */
  {              0x05,         0, 0, "md5"                    },  /*  86 */
  {            0x03,           0, 1, "encryptionAlgorithm"    },  /*  87 */
  {              0x07,         0, 0, "3des-ede-cbc"           },  /*  88 */
  {0x2B,                     150, 1, ""                       },  /*  89 */
  {  0x06,                   137, 1, "dod"                    },  /*  90 */
  {    0x01,                   0, 1, "internet"               },  /*  91 */
  {      0x04,               106, 1, "private"                },  /*  92 */
  {        0x01,               0, 1, "enterprise"             },  /*  93 */
  {          0x82,            99, 1, ""                       },  /*  94 */
  {            0x37,           0, 1, "Microsoft"              },  /*  95 */
  {              0x0A,         0, 1, ""                       },  /*  96 */
  {                0x03,       0, 1, ""                       },  /*  97 */
  {                  0x03,     0, 0, "msSGC"                  },  /*  98 */
  {          0x89,             0, 1, ""                       },  /*  99 */
  {            0x31,           0, 1, ""                       },  /* 100 */
  {              0x01,         0, 1, ""                       },  /* 101 */
  {                0x01,       0, 1, ""                       },  /* 102 */
  {                  0x02,     0, 1, ""                       },  /* 103 */
  {                    0x02, 105, 0, ""                       },  /* 104 */
  {                    0x4B,   0, 0, "TCGID"                  },  /* 105 */
  {      0x05,                 0, 1, "security"               },  /* 106 */
  {        0x05,               0, 1, "mechanisms"             },  /* 107 */
  {          0x07,             0, 1, "id-pkix"                },  /* 108 */
  {            0x01,         111, 1, "id-pe"                  },  /* 109 */
  {              0x01,         0, 0, "authorityInfoAccess"    },  /* 110 */
  {            0x03,         121, 1, "id-kp"                  },  /* 111 */
  {              0x01,       113, 0, "serverAuth"             },  /* 112 */
  {              0x02,       114, 0, "clientAuth"             },  /* 113 */
  {              0x03,       115, 0, "codeSigning"            },  /* 114 */
  {              0x04,       116, 0, "emailProtection"        },  /* 115 */
  {              0x05,       117, 0, "ipsecEndSystem"         },  /* 116 */
  {              0x06,       118, 0, "ipsecTunnel"            },  /* 117 */
  {              0x07,       119, 0, "ipsecUser"              },  /* 118 */
  {              0x08,       120, 0, "timeStamping"           },  /* 119 */
  {              0x09,         0, 0, "ocspSigning"            },  /* 120 */
  {            0x08,         123, 1, "id-otherNames"          },  /* 121 */
  {              0x05,         0, 0, "xmppAddr"               },  /* 122 */
  {            0x0A,         128, 1, "id-aca"                 },  /* 123 */
  {              0x01,       125, 0, "authenticationInfo"     },  /* 124 */
  {              0x02,       126, 0, "accessIdentity"         },  /* 125 */
  {              0x03,       127, 0, "chargingIdentity"       },  /* 126 */
  {              0x04,         0, 0, "group"                  },  /* 127 */
  {            0x30,           0, 1, "id-ad"                  },  /* 128 */
  {              0x01,         0, 1, "ocsp"                   },  /* 129 */
  {                0x01,     131, 0, "basic"                  },  /* 130 */
  {                0x02,     132, 0, "nonce"                  },  /* 131 */
  {                0x03,     133, 0, "crl"                    },  /* 132 */
  {                0x04,     134, 0, "response"               },  /* 133 */
  {                0x05,     135, 0, "noCheck"                },  /* 134 */
  {                0x06,     136, 0, "archiveCutoff"          },  /* 135 */
  {                0x07,       0, 0, "serviceLocator"         },  /* 136 */
  {  0x0E,                   143, 1, "oiw"                    },  /* 137 */
  {    0x03,                   0, 1, "secsig"                 },  /* 138 */
  {      0x02,                 0, 1, "algorithms"             },  /* 139 */
  {        0x07,             141, 0, "des-cbc"                },  /* 140 */
  {        0x1A,             142, 0, "sha-1"                  },  /* 141 */
  {        0x1D,               0, 0, "sha-1WithRSASignature"  },  /* 142 */
  {  0x24,                     0, 1, "TeleTrusT"              },  /* 143 */
  {    0x03,                   0, 1, "algorithm"              },  /* 144 */
  {      0x03,                 0, 1, "signatureAlgorithm"     },  /* 145 */
  {        0x01,               0, 1, "rsaSignature"           },  /* 146 */
  {          0x02,           148, 0, "rsaSigWithripemd160"    },  /* 147 */
  {          0x03,           149, 0, "rsaSigWithripemd128"    },  /* 148 */
  {          0x04,             0, 0, "rsaSigWithripemd256"    },  /* 149 */
  {0x60,                       0, 1, ""                       },  /* 150 */
  {  0x86,                     0, 1, ""                       },  /* 151 */
  {    0x48,                   0, 1, ""                       },  /* 152 */
  {      0x01,                 0, 1, "organization"           },  /* 153 */
  {        0x65,             161, 1, "gov"                    },  /* 154 */
  {          0x03,             0, 1, "csor"                   },  /* 155 */
  {            0x04,           0, 1, "nistalgorithm"          },  /* 156 */
  {              0x02,         0, 1, "hashalgs"               },  /* 157 */
  {                0x01,     159, 0, "id-SHA-256"             },  /* 158 */
  {                0x02,     160, 0, "id-SHA-384"             },  /* 159 */
  {                0x03,       0, 0, "id-SHA-512"             },  /* 160 */
  {        0x86,               0, 1, ""                       },  /* 161 */
  {          0xf8,             0, 1, ""                       },  /* 162 */
  {            0x42,         175, 1, "netscape"               },  /* 163 */
  {              0x01,       170, 1, ""                       },  /* 164 */
  {                0x01,     166, 0, "nsCertType"             },  /* 165 */
  {                0x03,     167, 0, "nsRevocationUrl"        },  /* 166 */
  {                0x04,     168, 0, "nsCaRevocationUrl"      },  /* 167 */
  {                0x08,     169, 0, "nsCaPolicyUrl"          },  /* 168 */
  {                0x0d,       0, 0, "nsComment"              },  /* 169 */
  {              0x03,       173, 1, "directory"              },  /* 170 */
  {                0x01,       0, 1, ""                       },  /* 171 */
  {                  0x03,     0, 0, "employeeNumber"         },  /* 172 */
  {              0x04,         0, 1, "policy"                 },  /* 173 */
  {                0x01,       0, 0, "nsSGC"                  },  /* 174 */
  {            0x45,           0, 1, "verisign"               },  /* 175 */
  {              0x01,         0, 1, "pki"                    },  /* 176 */
  {                0x09,       0, 1, "attributes"             },  /* 177 */
  {                  0x02,   179, 0, "messageType"            },  /* 178 */
  {                  0x03,   180, 0, "pkiStatus"              },  /* 179 */
  {                  0x04,   181, 0, "failInfo"               },  /* 180 */
  {                  0x05,   182, 0, "senderNonce"            },  /* 181 */
  {                  0x06,   183, 0, "recipientNonce"         },  /* 182 */
  {                  0x07,   184, 0, "transID"                },  /* 183 */
  {                  0x08,     0, 0, "extensionReq"           }   /* 184 */
};
