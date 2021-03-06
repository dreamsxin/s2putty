/*
 * Linking module for PSCP: list the available backends, but
 * without accompanying function suites. Used only for name
 * lookups.
 */

#include <stdio.h>
#include "putty.h"

const struct backend_list backends[] = {
    {PROT_SSH, "ssh", NULL},
    {PROT_TELNET, "telnet", NULL},
    {PROT_RLOGIN, "rlogin", NULL},
    {PROT_RAW, "raw", NULL},
    {0, NULL}
};
