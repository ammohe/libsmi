/*
 * This C file has been generated by smidump 0.2.17.
 * It is intended to be used with the NET-SNMP agent library.
 *
 * This C file is derived from the IF-MIB module.
 *
 * $Id$
 */

#include <stdio.h>
#include <string.h>
#include <malloc.h>

#include "if-mib.h"

#include <ucd-snmp/asn1.h>
#include <ucd-snmp/snmp.h>
#include <ucd-snmp/snmp_api.h>
#include <ucd-snmp/snmp_impl.h>
#include <ucd-snmp/snmp_vars.h>

/*
 * Forward declaration of read methods for groups of scalars and tables:
 */

static unsigned char *
read_interfaces_stub(struct variable *, oid *, size_t *, int, size_t *, WriteMethod **);
static unsigned char *
read_ifEntry_stub(struct variable *, oid *, size_t *, int, size_t *, WriteMethod **);
static unsigned char *
read_ifMIBObjects_stub(struct variable *, oid *, size_t *, int, size_t *, WriteMethod **);
static unsigned char *
read_ifXEntry_stub(struct variable *, oid *, size_t *, int, size_t *, WriteMethod **);
static unsigned char *
read_ifStackEntry_stub(struct variable *, oid *, size_t *, int, size_t *, WriteMethod **);
static unsigned char *
read_ifTestEntry_stub(struct variable *, oid *, size_t *, int, size_t *, WriteMethod **);
static unsigned char *
read_ifRcvAddressEntry_stub(struct variable *, oid *, size_t *, int, size_t *, WriteMethod **);

/*
 * Forward declaration of write methods for writable objects:
 */

static int
write_ifAdminStatus_stub(int, u_char *, u_char, int, u_char *, oid *, int);
static int
write_ifLinkUpDownTrapEnable_stub(int, u_char *, u_char, int, u_char *, oid *, int);
static int
write_ifPromiscuousMode_stub(int, u_char *, u_char, int, u_char *, oid *, int);
static int
write_ifAlias_stub(int, u_char *, u_char, int, u_char *, oid *, int);
static int
write_ifStackStatus_stub(int, u_char *, u_char, int, u_char *, oid *, int);
static int
write_ifTestId_stub(int, u_char *, u_char, int, u_char *, oid *, int);
static int
write_ifTestStatus_stub(int, u_char *, u_char, int, u_char *, oid *, int);
static int
write_ifTestType_stub(int, u_char *, u_char, int, u_char *, oid *, int);
static int
write_ifTestOwner_stub(int, u_char *, u_char, int, u_char *, oid *, int);
static int
write_ifRcvAddressStatus_stub(int, u_char *, u_char, int, u_char *, oid *, int);
static int
write_ifRcvAddressType_stub(int, u_char *, u_char, int, u_char *, oid *, int);

/*
 * Definitions of tags that are used internally to read/write
 * the selected object type. These tags should be unique.
 */

#define IFNUMBER                         1

static oid interfaces_base[] = {1, 3, 6, 1, 2, 1, 2};

struct variable interfaces_variables[] = {
    { IFNUMBER, ASN_INTEGER, RONLY, read_interfaces_stub, 1, {1} },
};

#define IFINDEX                          1
#define IFDESCR                          2
#define IFTYPE                           3
#define IFMTU                            4
#define IFSPEED                          5
#define IFPHYSADDRESS                    6
#define IFADMINSTATUS                    7
#define IFOPERSTATUS                     8
#define IFLASTCHANGE                     9
#define IFINOCTETS                       10
#define IFINUCASTPKTS                    11
#define IFINNUCASTPKTS                   12
#define IFINDISCARDS                     13
#define IFINERRORS                       14
#define IFINUNKNOWNPROTOS                15
#define IFOUTOCTETS                      16
#define IFOUTUCASTPKTS                   17
#define IFOUTNUCASTPKTS                  18
#define IFOUTDISCARDS                    19
#define IFOUTERRORS                      20
#define IFOUTQLEN                        21
#define IFSPECIFIC                       22

static oid ifEntry_base[] = {1, 3, 6, 1, 2, 1, 2, 2, 1};

struct variable ifEntry_variables[] = {
    { IFINDEX, ASN_INTEGER, RONLY, read_ifEntry_stub, 1, {1} },
    { IFDESCR, ASN_OCTET_STR, RONLY, read_ifEntry_stub, 1, {2} },
    { IFTYPE, ASN_INTEGER, RONLY, read_ifEntry_stub, 1, {3} },
    { IFMTU, ASN_INTEGER, RONLY, read_ifEntry_stub, 1, {4} },
    { IFSPEED, ASN_INTEGER, RONLY, read_ifEntry_stub, 1, {5} },
    { IFPHYSADDRESS, ASN_OCTET_STR, RONLY, read_ifEntry_stub, 1, {6} },
    { IFADMINSTATUS, ASN_INTEGER, RWRITE, read_ifEntry_stub, 1, {7} },
    { IFOPERSTATUS, ASN_INTEGER, RONLY, read_ifEntry_stub, 1, {8} },
    { IFLASTCHANGE, ASN_INTEGER, RONLY, read_ifEntry_stub, 1, {9} },
    { IFINOCTETS, ASN_INTEGER, RONLY, read_ifEntry_stub, 1, {10} },
    { IFINUCASTPKTS, ASN_INTEGER, RONLY, read_ifEntry_stub, 1, {11} },
    { IFINNUCASTPKTS, ASN_INTEGER, RONLY, read_ifEntry_stub, 1, {12} },
    { IFINDISCARDS, ASN_INTEGER, RONLY, read_ifEntry_stub, 1, {13} },
    { IFINERRORS, ASN_INTEGER, RONLY, read_ifEntry_stub, 1, {14} },
    { IFINUNKNOWNPROTOS, ASN_INTEGER, RONLY, read_ifEntry_stub, 1, {15} },
    { IFOUTOCTETS, ASN_INTEGER, RONLY, read_ifEntry_stub, 1, {16} },
    { IFOUTUCASTPKTS, ASN_INTEGER, RONLY, read_ifEntry_stub, 1, {17} },
    { IFOUTNUCASTPKTS, ASN_INTEGER, RONLY, read_ifEntry_stub, 1, {18} },
    { IFOUTDISCARDS, ASN_INTEGER, RONLY, read_ifEntry_stub, 1, {19} },
    { IFOUTERRORS, ASN_INTEGER, RONLY, read_ifEntry_stub, 1, {20} },
    { IFOUTQLEN, ASN_INTEGER, RONLY, read_ifEntry_stub, 1, {21} },
    { IFSPECIFIC, ASN_OBJECT_ID, RONLY, read_ifEntry_stub, 1, {22} },
};

#define IFTABLELASTCHANGE                5
#define IFSTACKLASTCHANGE                6

static oid ifMIBObjects_base[] = {1, 3, 6, 1, 2, 1, 31, 1};

struct variable ifMIBObjects_variables[] = {
    { IFTABLELASTCHANGE, ASN_INTEGER, RONLY, read_ifMIBObjects_stub, 1, {5} },
    { IFSTACKLASTCHANGE, ASN_INTEGER, RONLY, read_ifMIBObjects_stub, 1, {6} },
};

#define IFNAME                           1
#define IFINMULTICASTPKTS                2
#define IFINBROADCASTPKTS                3
#define IFOUTMULTICASTPKTS               4
#define IFOUTBROADCASTPKTS               5
#define IFHCINOCTETS                     6
#define IFHCINUCASTPKTS                  7
#define IFHCINMULTICASTPKTS              8
#define IFHCINBROADCASTPKTS              9
#define IFHCOUTOCTETS                    10
#define IFHCOUTUCASTPKTS                 11
#define IFHCOUTMULTICASTPKTS             12
#define IFHCOUTBROADCASTPKTS             13
#define IFLINKUPDOWNTRAPENABLE           14
#define IFHIGHSPEED                      15
#define IFPROMISCUOUSMODE                16
#define IFCONNECTORPRESENT               17
#define IFALIAS                          18
#define IFCOUNTERDISCONTINUITYTIME       19

static oid ifXEntry_base[] = {1, 3, 6, 1, 2, 1, 31, 1, 1, 1};

struct variable ifXEntry_variables[] = {
    { IFNAME, ASN_OCTET_STR, RONLY, read_ifXEntry_stub, 1, {1} },
    { IFINMULTICASTPKTS, ASN_INTEGER, RONLY, read_ifXEntry_stub, 1, {2} },
    { IFINBROADCASTPKTS, ASN_INTEGER, RONLY, read_ifXEntry_stub, 1, {3} },
    { IFOUTMULTICASTPKTS, ASN_INTEGER, RONLY, read_ifXEntry_stub, 1, {4} },
    { IFOUTBROADCASTPKTS, ASN_INTEGER, RONLY, read_ifXEntry_stub, 1, {5} },
    { IFHCINOCTETS, ASN_INTEGER, RONLY, read_ifXEntry_stub, 1, {6} },
    { IFHCINUCASTPKTS, ASN_INTEGER, RONLY, read_ifXEntry_stub, 1, {7} },
    { IFHCINMULTICASTPKTS, ASN_INTEGER, RONLY, read_ifXEntry_stub, 1, {8} },
    { IFHCINBROADCASTPKTS, ASN_INTEGER, RONLY, read_ifXEntry_stub, 1, {9} },
    { IFHCOUTOCTETS, ASN_INTEGER, RONLY, read_ifXEntry_stub, 1, {10} },
    { IFHCOUTUCASTPKTS, ASN_INTEGER, RONLY, read_ifXEntry_stub, 1, {11} },
    { IFHCOUTMULTICASTPKTS, ASN_INTEGER, RONLY, read_ifXEntry_stub, 1, {12} },
    { IFHCOUTBROADCASTPKTS, ASN_INTEGER, RONLY, read_ifXEntry_stub, 1, {13} },
    { IFLINKUPDOWNTRAPENABLE, ASN_INTEGER, RWRITE, read_ifXEntry_stub, 1, {14} },
    { IFHIGHSPEED, ASN_INTEGER, RONLY, read_ifXEntry_stub, 1, {15} },
    { IFPROMISCUOUSMODE, ASN_INTEGER, RWRITE, read_ifXEntry_stub, 1, {16} },
    { IFCONNECTORPRESENT, ASN_INTEGER, RONLY, read_ifXEntry_stub, 1, {17} },
    { IFALIAS, ASN_OCTET_STR, RWRITE, read_ifXEntry_stub, 1, {18} },
    { IFCOUNTERDISCONTINUITYTIME, ASN_INTEGER, RONLY, read_ifXEntry_stub, 1, {19} },
};

#define IFSTACKSTATUS                    3

static oid ifStackEntry_base[] = {1, 3, 6, 1, 2, 1, 31, 1, 2, 1};

struct variable ifStackEntry_variables[] = {
    { IFSTACKSTATUS, ASN_INTEGER, RWRITE, read_ifStackEntry_stub, 1, {3} },
};

#define IFTESTID                         1
#define IFTESTSTATUS                     2
#define IFTESTTYPE                       3
#define IFTESTRESULT                     4
#define IFTESTCODE                       5
#define IFTESTOWNER                      6

static oid ifTestEntry_base[] = {1, 3, 6, 1, 2, 1, 31, 1, 3, 1};

struct variable ifTestEntry_variables[] = {
    { IFTESTID, ASN_INTEGER, RWRITE, read_ifTestEntry_stub, 1, {1} },
    { IFTESTSTATUS, ASN_INTEGER, RWRITE, read_ifTestEntry_stub, 1, {2} },
    { IFTESTTYPE, ASN_OBJECT_ID, RWRITE, read_ifTestEntry_stub, 1, {3} },
    { IFTESTRESULT, ASN_INTEGER, RONLY, read_ifTestEntry_stub, 1, {4} },
    { IFTESTCODE, ASN_OBJECT_ID, RONLY, read_ifTestEntry_stub, 1, {5} },
    { IFTESTOWNER, ASN_OCTET_STR, RWRITE, read_ifTestEntry_stub, 1, {6} },
};

#define IFRCVADDRESSSTATUS               2
#define IFRCVADDRESSTYPE                 3

static oid ifRcvAddressEntry_base[] = {1, 3, 6, 1, 2, 1, 31, 1, 4, 1};

struct variable ifRcvAddressEntry_variables[] = {
    { IFRCVADDRESSSTATUS, ASN_INTEGER, RWRITE, read_ifRcvAddressEntry_stub, 1, {2} },
    { IFRCVADDRESSTYPE, ASN_INTEGER, RWRITE, read_ifRcvAddressEntry_stub, 1, {3} },
};



/*
 * Registration functions for the various MIB groups.
 */

int register_interfaces()
{
    return register_mib("interfaces",
         interfaces_variables,
         sizeof(struct variable),
         sizeof(interfaces_variables)/sizeof(struct variable),
         interfaces_base,
         sizeof(interfaces_base)/sizeof(oid));
};


int register_ifEntry()
{
    return register_mib("ifEntry",
         ifEntry_variables,
         sizeof(struct variable),
         sizeof(ifEntry_variables)/sizeof(struct variable),
         ifEntry_base,
         sizeof(ifEntry_base)/sizeof(oid));
};


int register_ifMIBObjects()
{
    return register_mib("ifMIBObjects",
         ifMIBObjects_variables,
         sizeof(struct variable),
         sizeof(ifMIBObjects_variables)/sizeof(struct variable),
         ifMIBObjects_base,
         sizeof(ifMIBObjects_base)/sizeof(oid));
};


int register_ifXEntry()
{
    return register_mib("ifXEntry",
         ifXEntry_variables,
         sizeof(struct variable),
         sizeof(ifXEntry_variables)/sizeof(struct variable),
         ifXEntry_base,
         sizeof(ifXEntry_base)/sizeof(oid));
};


int register_ifStackEntry()
{
    return register_mib("ifStackEntry",
         ifStackEntry_variables,
         sizeof(struct variable),
         sizeof(ifStackEntry_variables)/sizeof(struct variable),
         ifStackEntry_base,
         sizeof(ifStackEntry_base)/sizeof(oid));
};


int register_ifTestEntry()
{
    return register_mib("ifTestEntry",
         ifTestEntry_variables,
         sizeof(struct variable),
         sizeof(ifTestEntry_variables)/sizeof(struct variable),
         ifTestEntry_base,
         sizeof(ifTestEntry_base)/sizeof(oid));
};


int register_ifRcvAddressEntry()
{
    return register_mib("ifRcvAddressEntry",
         ifRcvAddressEntry_variables,
         sizeof(struct variable),
         sizeof(ifRcvAddressEntry_variables)/sizeof(struct variable),
         ifRcvAddressEntry_base,
         sizeof(ifRcvAddressEntry_base)/sizeof(oid));
};


/*
 * Read methods for groups of scalars and tables:
 */

static unsigned char *
read_interfaces_stub(struct variable *vp,
    oid     *name,
    size_t  *length,
    int     exact,
    size_t  *var_len,
    WriteMethod **write_method)
{
    static interfaces_t interfaces;

    /* check whether the instance identifier is valid */

    if (header_generic(vp, name, length, exact, var_len,
                       write_method) == MATCH_FAILED) {
        return NULL;
    }

    /* call the user supplied function to retrieve values */

    read_interfaces(&interfaces);

    /* return the current value of the variable */

    switch (vp->magic) {

    case IFNUMBER:
        return (unsigned char *) &interfaces.ifNumber;

    default:
         ERROR_MSG("");
    }

    return NULL;
}

static unsigned char *
read_ifEntry_stub(struct variable *vp,
    oid     *name,
    size_t  *length,
    int     exact,
    size_t  *var_len,
    WriteMethod **write_method)
{
    static ifEntry_t ifEntry;

    /* call the user supplied function to retrieve values */

    read_ifEntry(&ifEntry);

    /* return the current value of the variable */

    switch (vp->magic) {

    case IFINDEX:
        return (unsigned char *) &ifEntry.ifIndex;

    case IFDESCR:
        *var_len = ifEntry._ifDescrLength;
        return (unsigned char *) ifEntry.ifDescr;

    case IFTYPE:
        return (unsigned char *) &ifEntry.ifType;

    case IFMTU:
        return (unsigned char *) &ifEntry.ifMtu;

    case IFSPEED:
        return (unsigned char *) &ifEntry.ifSpeed;

    case IFPHYSADDRESS:
        *var_len = ifEntry._ifPhysAddressLength;
        return (unsigned char *) ifEntry.ifPhysAddress;

    case IFADMINSTATUS:
        return (unsigned char *) &ifEntry.ifAdminStatus;

    case IFOPERSTATUS:
        return (unsigned char *) &ifEntry.ifOperStatus;

    case IFLASTCHANGE:
        return (unsigned char *) &ifEntry.ifLastChange;

    case IFINOCTETS:
        return (unsigned char *) &ifEntry.ifInOctets;

    case IFINUCASTPKTS:
        return (unsigned char *) &ifEntry.ifInUcastPkts;

    case IFINNUCASTPKTS:
        return (unsigned char *) &ifEntry.ifInNUcastPkts;

    case IFINDISCARDS:
        return (unsigned char *) &ifEntry.ifInDiscards;

    case IFINERRORS:
        return (unsigned char *) &ifEntry.ifInErrors;

    case IFINUNKNOWNPROTOS:
        return (unsigned char *) &ifEntry.ifInUnknownProtos;

    case IFOUTOCTETS:
        return (unsigned char *) &ifEntry.ifOutOctets;

    case IFOUTUCASTPKTS:
        return (unsigned char *) &ifEntry.ifOutUcastPkts;

    case IFOUTNUCASTPKTS:
        return (unsigned char *) &ifEntry.ifOutNUcastPkts;

    case IFOUTDISCARDS:
        return (unsigned char *) &ifEntry.ifOutDiscards;

    case IFOUTERRORS:
        return (unsigned char *) &ifEntry.ifOutErrors;

    case IFOUTQLEN:
        return (unsigned char *) &ifEntry.ifOutQLen;

    case IFSPECIFIC:
        *var_len = ifEntry._ifSpecificLength;
        return (unsigned char *) ifEntry.ifSpecific;

    default:
         ERROR_MSG("");
    }

    return NULL;
}

static unsigned char *
read_ifMIBObjects_stub(struct variable *vp,
    oid     *name,
    size_t  *length,
    int     exact,
    size_t  *var_len,
    WriteMethod **write_method)
{
    static ifMIBObjects_t ifMIBObjects;

    /* call the user supplied function to retrieve values */

    read_ifMIBObjects(&ifMIBObjects);

    /* return the current value of the variable */

    switch (vp->magic) {

    case IFTABLELASTCHANGE:
        return (unsigned char *) &ifMIBObjects.ifTableLastChange;

    case IFSTACKLASTCHANGE:
        return (unsigned char *) &ifMIBObjects.ifStackLastChange;

    default:
         ERROR_MSG("");
    }

    return NULL;
}

static unsigned char *
read_ifXEntry_stub(struct variable *vp,
    oid     *name,
    size_t  *length,
    int     exact,
    size_t  *var_len,
    WriteMethod **write_method)
{
    static ifXEntry_t ifXEntry;

    /* call the user supplied function to retrieve values */

    read_ifXEntry(&ifXEntry);

    /* return the current value of the variable */

    switch (vp->magic) {

    case IFNAME:
        *var_len = ifXEntry._ifNameLength;
        return (unsigned char *) ifXEntry.ifName;

    case IFINMULTICASTPKTS:
        return (unsigned char *) &ifXEntry.ifInMulticastPkts;

    case IFINBROADCASTPKTS:
        return (unsigned char *) &ifXEntry.ifInBroadcastPkts;

    case IFOUTMULTICASTPKTS:
        return (unsigned char *) &ifXEntry.ifOutMulticastPkts;

    case IFOUTBROADCASTPKTS:
        return (unsigned char *) &ifXEntry.ifOutBroadcastPkts;

    case IFHCINOCTETS:
        /* add code to return the value here */

    case IFHCINUCASTPKTS:
        /* add code to return the value here */

    case IFHCINMULTICASTPKTS:
        /* add code to return the value here */

    case IFHCINBROADCASTPKTS:
        /* add code to return the value here */

    case IFHCOUTOCTETS:
        /* add code to return the value here */

    case IFHCOUTUCASTPKTS:
        /* add code to return the value here */

    case IFHCOUTMULTICASTPKTS:
        /* add code to return the value here */

    case IFHCOUTBROADCASTPKTS:
        /* add code to return the value here */

    case IFLINKUPDOWNTRAPENABLE:
        return (unsigned char *) &ifXEntry.ifLinkUpDownTrapEnable;

    case IFHIGHSPEED:
        return (unsigned char *) &ifXEntry.ifHighSpeed;

    case IFPROMISCUOUSMODE:
        return (unsigned char *) &ifXEntry.ifPromiscuousMode;

    case IFCONNECTORPRESENT:
        return (unsigned char *) &ifXEntry.ifConnectorPresent;

    case IFALIAS:
        *var_len = ifXEntry._ifAliasLength;
        return (unsigned char *) ifXEntry.ifAlias;

    case IFCOUNTERDISCONTINUITYTIME:
        return (unsigned char *) &ifXEntry.ifCounterDiscontinuityTime;

    default:
         ERROR_MSG("");
    }

    return NULL;
}

static unsigned char *
read_ifStackEntry_stub(struct variable *vp,
    oid     *name,
    size_t  *length,
    int     exact,
    size_t  *var_len,
    WriteMethod **write_method)
{
    static ifStackEntry_t ifStackEntry;

    /* call the user supplied function to retrieve values */

    read_ifStackEntry(&ifStackEntry);

    /* return the current value of the variable */

    switch (vp->magic) {

    case IFSTACKSTATUS:
        return (unsigned char *) &ifStackEntry.ifStackStatus;

    default:
         ERROR_MSG("");
    }

    return NULL;
}

static unsigned char *
read_ifTestEntry_stub(struct variable *vp,
    oid     *name,
    size_t  *length,
    int     exact,
    size_t  *var_len,
    WriteMethod **write_method)
{
    static ifTestEntry_t ifTestEntry;

    /* call the user supplied function to retrieve values */

    read_ifTestEntry(&ifTestEntry);

    /* return the current value of the variable */

    switch (vp->magic) {

    case IFTESTID:
        return (unsigned char *) &ifTestEntry.ifTestId;

    case IFTESTSTATUS:
        return (unsigned char *) &ifTestEntry.ifTestStatus;

    case IFTESTTYPE:
        *var_len = ifTestEntry._ifTestTypeLength;
        return (unsigned char *) ifTestEntry.ifTestType;

    case IFTESTRESULT:
        return (unsigned char *) &ifTestEntry.ifTestResult;

    case IFTESTCODE:
        *var_len = ifTestEntry._ifTestCodeLength;
        return (unsigned char *) ifTestEntry.ifTestCode;

    case IFTESTOWNER:
        *var_len = ifTestEntry._ifTestOwnerLength;
        return (unsigned char *) ifTestEntry.ifTestOwner;

    default:
         ERROR_MSG("");
    }

    return NULL;
}

static unsigned char *
read_ifRcvAddressEntry_stub(struct variable *vp,
    oid     *name,
    size_t  *length,
    int     exact,
    size_t  *var_len,
    WriteMethod **write_method)
{
    static ifRcvAddressEntry_t ifRcvAddressEntry;

    /* call the user supplied function to retrieve values */

    read_ifRcvAddressEntry(&ifRcvAddressEntry);

    /* return the current value of the variable */

    switch (vp->magic) {

    case IFRCVADDRESSSTATUS:
        return (unsigned char *) &ifRcvAddressEntry.ifRcvAddressStatus;

    case IFRCVADDRESSTYPE:
        return (unsigned char *) &ifRcvAddressEntry.ifRcvAddressType;

    default:
         ERROR_MSG("");
    }

    return NULL;
}


/*
 * Forward declaration of write methods for writable objects:
 */

static int
write_ifAdminStatus_stub(int action,
    u_char   *var_val,
    u_char   var_val_type,
    int      var_val_len,
    u_char   *statP,
    oid      *name,
    int      name_len)
{
    return SNMP_ERR_NOERROR;
}

static int
write_ifLinkUpDownTrapEnable_stub(int action,
    u_char   *var_val,
    u_char   var_val_type,
    int      var_val_len,
    u_char   *statP,
    oid      *name,
    int      name_len)
{
    return SNMP_ERR_NOERROR;
}

static int
write_ifPromiscuousMode_stub(int action,
    u_char   *var_val,
    u_char   var_val_type,
    int      var_val_len,
    u_char   *statP,
    oid      *name,
    int      name_len)
{
    return SNMP_ERR_NOERROR;
}

static int
write_ifAlias_stub(int action,
    u_char   *var_val,
    u_char   var_val_type,
    int      var_val_len,
    u_char   *statP,
    oid      *name,
    int      name_len)
{
    return SNMP_ERR_NOERROR;
}

static int
write_ifStackStatus_stub(int action,
    u_char   *var_val,
    u_char   var_val_type,
    int      var_val_len,
    u_char   *statP,
    oid      *name,
    int      name_len)
{
    return SNMP_ERR_NOERROR;
}

static int
write_ifTestId_stub(int action,
    u_char   *var_val,
    u_char   var_val_type,
    int      var_val_len,
    u_char   *statP,
    oid      *name,
    int      name_len)
{
    return SNMP_ERR_NOERROR;
}

static int
write_ifTestStatus_stub(int action,
    u_char   *var_val,
    u_char   var_val_type,
    int      var_val_len,
    u_char   *statP,
    oid      *name,
    int      name_len)
{
    return SNMP_ERR_NOERROR;
}

static int
write_ifTestType_stub(int action,
    u_char   *var_val,
    u_char   var_val_type,
    int      var_val_len,
    u_char   *statP,
    oid      *name,
    int      name_len)
{
    return SNMP_ERR_NOERROR;
}

static int
write_ifTestOwner_stub(int action,
    u_char   *var_val,
    u_char   var_val_type,
    int      var_val_len,
    u_char   *statP,
    oid      *name,
    int      name_len)
{
    return SNMP_ERR_NOERROR;
}

static int
write_ifRcvAddressStatus_stub(int action,
    u_char   *var_val,
    u_char   var_val_type,
    int      var_val_len,
    u_char   *statP,
    oid      *name,
    int      name_len)
{
    return SNMP_ERR_NOERROR;
}

static int
write_ifRcvAddressType_stub(int action,
    u_char   *var_val,
    u_char   var_val_type,
    int      var_val_len,
    u_char   *statP,
    oid      *name,
    int      name_len)
{
    return SNMP_ERR_NOERROR;
}


