/*
 * This Java file has been generated by smidump 0.2.7. Do not edit!
 * It is intended to be used within a Java AgentX sub-agent environment.
 *
 * $Id$
 */

/**
    This class represents a Java AgentX (JAX) implementation of
    the table ifMauTable defined in MAU-MIB.

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

public class IfMauTable extends AgentXTable
{

    // entry OID
    private final static long[] OID = {1, 3, 6, 1, 2, 1, 26, 2, 1, 1};

    // constructor
    public IfMauTable()
    {
        oid = new AgentXOID(OID);

        // register implemented columns
        columns.addElement(new Long(1));
        columns.addElement(new Long(2));
        columns.addElement(new Long(3));
        columns.addElement(new Long(4));
        columns.addElement(new Long(5));
        columns.addElement(new Long(6));
        columns.addElement(new Long(7));
        columns.addElement(new Long(8));
        columns.addElement(new Long(9));
        columns.addElement(new Long(10));
        columns.addElement(new Long(11));
        columns.addElement(new Long(12));
        columns.addElement(new Long(13));
    }

    public AgentXVarBind getVarBind(AgentXEntry entry, long column)
    {
        AgentXOID oid = new AgentXOID(getOID(), column, entry.getInstance());

        switch ((int)column) {
        case 1: // ifMauIfIndex
        {
            int value = ((IfMauEntry)entry).get_ifMauIfIndex();
            return new AgentXVarBind(oid, AgentXVarBind.INTEGER, value);
        }
        case 2: // ifMauIndex
        {
            int value = ((IfMauEntry)entry).get_ifMauIndex();
            return new AgentXVarBind(oid, AgentXVarBind.INTEGER, value);
        }
        case 3: // ifMauType
        {
            AgentXOID value = ((IfMauEntry)entry).get_ifMauType();
            return new AgentXVarBind(oid, AgentXVarBind.OBJECTIDENTIFIER, value);
        }
        case 4: // ifMauStatus
        {
            int value = ((IfMauEntry)entry).get_ifMauStatus();
            return new AgentXVarBind(oid, AgentXVarBind.INTEGER, value);
        }
        case 5: // ifMauMediaAvailable
        {
            int value = ((IfMauEntry)entry).get_ifMauMediaAvailable();
            return new AgentXVarBind(oid, AgentXVarBind.INTEGER, value);
        }
        case 6: // ifMauMediaAvailableStateExits
        {
            long value = ((IfMauEntry)entry).get_ifMauMediaAvailableStateExits();
            return new AgentXVarBind(oid, AgentXVarBind.COUNTER32, value);
        }
        case 7: // ifMauJabberState
        {
            int value = ((IfMauEntry)entry).get_ifMauJabberState();
            return new AgentXVarBind(oid, AgentXVarBind.INTEGER, value);
        }
        case 8: // ifMauJabberingStateEnters
        {
            long value = ((IfMauEntry)entry).get_ifMauJabberingStateEnters();
            return new AgentXVarBind(oid, AgentXVarBind.COUNTER32, value);
        }
        case 9: // ifMauFalseCarriers
        {
            long value = ((IfMauEntry)entry).get_ifMauFalseCarriers();
            return new AgentXVarBind(oid, AgentXVarBind.COUNTER32, value);
        }
        case 10: // ifMauTypeList
        {
            int value = ((IfMauEntry)entry).get_ifMauTypeList();
            return new AgentXVarBind(oid, AgentXVarBind.INTEGER, value);
        }
        case 11: // ifMauDefaultType
        {
            AgentXOID value = ((IfMauEntry)entry).get_ifMauDefaultType();
            return new AgentXVarBind(oid, AgentXVarBind.OBJECTIDENTIFIER, value);
        }
        case 12: // ifMauAutoNegSupported
        {
            int value = ((IfMauEntry)entry).get_ifMauAutoNegSupported();
            return new AgentXVarBind(oid, AgentXVarBind.INTEGER, value);
        }
        case 13: // ifMauTypeListBits
        {
            byte[] value = ((IfMauEntry)entry).get_ifMauTypeListBits();
            return new AgentXVarBind(oid, AgentXVarBind.OCTETSTRING, value);
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
        case 4: // ifMauStatus
        {
            if (vb.getType() != AgentXVarBind.INTEGER)
                return AgentXResponsePDU.WRONG_TYPE;
            else
                return ((IfMauEntry)entry).set_ifMauStatus(phase, vb.intValue());
        }
        case 11: // ifMauDefaultType
        {
            if (vb.getType() != AgentXVarBind.OBJECTIDENTIFIER)
                return AgentXResponsePDU.WRONG_TYPE;
            else
                return ((IfMauEntry)entry).set_ifMauDefaultType(phase, vb.AgentXOIDValue());
        }
        }

        return AgentXResponsePDU.NOT_WRITABLE;
    }

}

