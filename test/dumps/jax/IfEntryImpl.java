/*
 * This Java file has been generated by smidump 0.2.17. It
 * is intended to be edited by the application programmer and
 * to be used within a Java AgentX sub-agent environment.
 *
 * $Id$
 */

/**
    This class extends the Java AgentX (JAX) implementation of
    the table row ifEntry defined in IF-MIB.
 */

import jax.AgentXOID;
import jax.AgentXSetPhase;
import jax.AgentXResponsePDU;
import jax.AgentXEntry;

public class IfEntryImpl extends IfEntry
{

    // constructor
    public IfEntryImpl(int ifIndex)
    {
        super(ifIndex);
    }

    public int get_ifIndex()
    {
        return ifIndex;
    }

    public byte[] get_ifDescr()
    {
        return ifDescr;
    }

    public int get_ifType()
    {
        return ifType;
    }

    public int get_ifMtu()
    {
        return ifMtu;
    }

    public long get_ifSpeed()
    {
        return ifSpeed;
    }

    public byte[] get_ifPhysAddress()
    {
        return ifPhysAddress;
    }

    public int get_ifAdminStatus()
    {
        return ifAdminStatus;
    }

    public int set_ifAdminStatus(AgentXSetPhase phase, int value)
    {
        switch (phase.getPhase()) {
        case AgentXSetPhase.TEST_SET:
            break;
        case AgentXSetPhase.COMMIT:
            undo_ifAdminStatus = ifAdminStatus;
            ifAdminStatus = value;
            break;
        case AgentXSetPhase.UNDO:
            ifAdminStatus = undo_ifAdminStatus;
            break;
        case AgentXSetPhase.CLEANUP:
            break;
        default:
            return AgentXResponsePDU.PROCESSING_ERROR;
        }
        return AgentXResponsePDU.NO_ERROR;
    }
    public int get_ifOperStatus()
    {
        return ifOperStatus;
    }

    public long get_ifLastChange()
    {
        return ifLastChange;
    }

    public long get_ifInOctets()
    {
        return ifInOctets;
    }

    public long get_ifInUcastPkts()
    {
        return ifInUcastPkts;
    }

    public long get_ifInNUcastPkts()
    {
        return ifInNUcastPkts;
    }

    public long get_ifInDiscards()
    {
        return ifInDiscards;
    }

    public long get_ifInErrors()
    {
        return ifInErrors;
    }

    public long get_ifInUnknownProtos()
    {
        return ifInUnknownProtos;
    }

    public long get_ifOutOctets()
    {
        return ifOutOctets;
    }

    public long get_ifOutUcastPkts()
    {
        return ifOutUcastPkts;
    }

    public long get_ifOutNUcastPkts()
    {
        return ifOutNUcastPkts;
    }

    public long get_ifOutDiscards()
    {
        return ifOutDiscards;
    }

    public long get_ifOutErrors()
    {
        return ifOutErrors;
    }

    public long get_ifOutQLen()
    {
        return ifOutQLen;
    }

    public AgentXOID get_ifSpecific()
    {
        return ifSpecific;
    }

}

