/*
 * This Java file has been generated by smidump 0.2.7. Do not edit!
 * It is intended to be used within a Java AgentX sub-agent environment.
 *
 * $Id$
 */

/**
    This class represents a Java AgentX (JAX) implementation of
    the table usrHistoryControlTable defined in RMON2-MIB.

    @version 1
    @author  smidump 0.2.7
    @see     AgentXTable
 */

import java.util.Vector;

import jax.AgentXOID;
import jax.AgentXVarBind;
import jax.AgentXResponsePDU;
import jax.AgentXSetPhase;
import jax.AgentXTable;
import jax.AgentXEntry;

public class UsrHistoryControlTable extends AgentXTable
{

    // entry OID
    private final static long[] OID = {1, 3, 6, 1, 2, 1, 16, 18, 1, 1};

    // constructor
    public UsrHistoryControlTable()
    {
        oid = new AgentXOID(OID);

        // register implemented columns
        columns.addElement(new Long(2));
        columns.addElement(new Long(3));
        columns.addElement(new Long(4));
        columns.addElement(new Long(5));
        columns.addElement(new Long(6));
        columns.addElement(new Long(7));
    }

    public AgentXVarBind getVarBind(AgentXEntry entry, long column)
    {
        AgentXOID oid = new AgentXOID(getOID(), column, entry.getInstance());

        switch ((int)column) {
        case 2: // usrHistoryControlObjects
        {
            int value = ((UsrHistoryControlEntry)entry).get_usrHistoryControlObjects();
            return new AgentXVarBind(oid, AgentXVarBind.INTEGER, value);
        }
        case 3: // usrHistoryControlBucketsRequested
        {
            int value = ((UsrHistoryControlEntry)entry).get_usrHistoryControlBucketsRequested();
            return new AgentXVarBind(oid, AgentXVarBind.INTEGER, value);
        }
        case 4: // usrHistoryControlBucketsGranted
        {
            int value = ((UsrHistoryControlEntry)entry).get_usrHistoryControlBucketsGranted();
            return new AgentXVarBind(oid, AgentXVarBind.INTEGER, value);
        }
        case 5: // usrHistoryControlInterval
        {
            int value = ((UsrHistoryControlEntry)entry).get_usrHistoryControlInterval();
            return new AgentXVarBind(oid, AgentXVarBind.INTEGER, value);
        }
        case 6: // usrHistoryControlOwner
        {
            byte[] value = ((UsrHistoryControlEntry)entry).get_usrHistoryControlOwner();
            return new AgentXVarBind(oid, AgentXVarBind.OCTETSTRING, value);
        }
        case 7: // usrHistoryControlStatus
        {
            int value = ((UsrHistoryControlEntry)entry).get_usrHistoryControlStatus();
            return new AgentXVarBind(oid, AgentXVarBind.INTEGER, value);
        }
        }

        return null;
    }

    public int setEntry(AgentXSetPhase phase,
                        AgentXEntry entry,
                        long column,
                        AgentXVarBind vb)
    {

        switch ((int)column) {
        case 2: // usrHistoryControlObjects
        {
            if (vb.getType() != AgentXVarBind.INTEGER)
                return AgentXResponsePDU.WRONG_TYPE;
            else
                return ((UsrHistoryControlEntry)entry).set_usrHistoryControlObjects(phase, vb.intValue());
        }
        case 3: // usrHistoryControlBucketsRequested
        {
            if (vb.getType() != AgentXVarBind.INTEGER)
                return AgentXResponsePDU.WRONG_TYPE;
            else
                return ((UsrHistoryControlEntry)entry).set_usrHistoryControlBucketsRequested(phase, vb.intValue());
        }
        case 5: // usrHistoryControlInterval
        {
            if (vb.getType() != AgentXVarBind.INTEGER)
                return AgentXResponsePDU.WRONG_TYPE;
            else
                return ((UsrHistoryControlEntry)entry).set_usrHistoryControlInterval(phase, vb.intValue());
        }
        case 6: // usrHistoryControlOwner
        {
            if (vb.getType() != AgentXVarBind.OCTETSTRING)
                return AgentXResponsePDU.WRONG_TYPE;
            else
                return ((UsrHistoryControlEntry)entry).set_usrHistoryControlOwner(phase, vb.bytesValue());
        }
        case 7: // usrHistoryControlStatus
        {
            if (vb.getType() != AgentXVarBind.INTEGER)
                return AgentXResponsePDU.WRONG_TYPE;
            else
                return ((UsrHistoryControlEntry)entry).set_usrHistoryControlStatus(phase, vb.intValue());
        }
        }

        return AgentXResponsePDU.NOT_WRITABLE;
    }

}

