/*
 * This C header file has been generated by smidump 0.2.12.
 * It is intended to be used with the NET SNMP agent.
 *
 * This header is derived from the SNMPv2-MIB module.
 *
 * $Id$
 */

#ifndef _SNMPV2_MIB_H_
#define _SNMPV2_MIB_H_

#include <stdlib.h>

#ifdef HAVE_STDINT_H
#include <stdint.h>
#endif

/*
 * Initialization function:
 */

void init_snmpv2_mib(void);

/*
 * Structures for groups of scalars and table entries:
 */

typedef struct system {
    u_char    sysDescr[255];
    size_t    _sysDescrLength;
    uint32_t  sysObjectID[128];
    size_t    _sysObjectIDLength;
    uint32_t  sysUpTime;
    u_char    sysContact[255];
    size_t    _sysContactLength;
    u_char    sysName[255];
    size_t    _sysNameLength;
    u_char    sysLocation[255];
    size_t    _sysLocationLength;
    int32_t   sysServices;
    uint32_t  sysORLastChange;
    void      *_clientData;		/* pointer to client data structure */
} system_t;

extern int
read_system(system_t *system);

extern int
register_system();

typedef struct sysOREntry {
    int32_t   sysORIndex;
    uint32_t  sysORID[128];
    size_t    _sysORIDLength;
    u_char    sysORDescr[255];
    size_t    _sysORDescrLength;
    uint32_t  sysORUpTime;
    void      *_clientData;		/* pointer to client data structure */
    struct sysOREntry *_nextPtr;	/* pointer to next table entry */
} sysOREntry_t;

extern int
read_sysOREntry(sysOREntry_t *sysOREntry);

extern int
register_sysOREntry();

typedef struct snmp {
    uint32_t  snmpInPkts;
    uint32_t  snmpOutPkts;
    uint32_t  snmpInBadVersions;
    uint32_t  snmpInBadCommunityNames;
    uint32_t  snmpInBadCommunityUses;
    uint32_t  snmpInASNParseErrs;
    uint32_t  snmpInTooBigs;
    uint32_t  snmpInNoSuchNames;
    uint32_t  snmpInBadValues;
    uint32_t  snmpInReadOnlys;
    uint32_t  snmpInGenErrs;
    uint32_t  snmpInTotalReqVars;
    uint32_t  snmpInTotalSetVars;
    uint32_t  snmpInGetRequests;
    uint32_t  snmpInGetNexts;
    uint32_t  snmpInSetRequests;
    uint32_t  snmpInGetResponses;
    uint32_t  snmpInTraps;
    uint32_t  snmpOutTooBigs;
    uint32_t  snmpOutNoSuchNames;
    uint32_t  snmpOutBadValues;
    uint32_t  snmpOutGenErrs;
    uint32_t  snmpOutGetRequests;
    uint32_t  snmpOutGetNexts;
    uint32_t  snmpOutSetRequests;
    uint32_t  snmpOutGetResponses;
    uint32_t  snmpOutTraps;
    int32_t   snmpEnableAuthenTraps;
    uint32_t  snmpSilentDrops;
    uint32_t  snmpProxyDrops;
    void      *_clientData;		/* pointer to client data structure */
} snmp_t;

extern int
read_snmp(snmp_t *snmp);

extern int
register_snmp();

typedef struct snmpSet {
    int32_t   snmpSetSerialNo;
    void      *_clientData;		/* pointer to client data structure */
} snmpSet_t;

extern int
read_snmpSet(snmpSet_t *snmpSet);

extern int
register_snmpSet();


typedef struct snmpv2_mib {
    system_t	system;
    sysOREntry_t	*sysOREntry;
    snmp_t	snmp;
    snmpSet_t	snmpSet;
} snmpv2_mib_t;

#endif /* _SNMPV2_MIB_H_ */
