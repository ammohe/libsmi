/*
 * This Java file has been generated by smidump 0.3.0. Do not edit!
 * It is intended to be used within a Java AgentX sub-agent environment.
 *
 * $Id$
 */

/**
    This class represents a Java AgentX (JAX) implementation of
    the table row addressMapControlEntry defined in RMON2-MIB.

    @version 1
    @author  smidump 0.3.0
    @see     AgentXTable, AgentXEntry
 */

import jax.AgentXOID;
import jax.AgentXSetPhase;
import jax.AgentXResponsePDU;
import jax.AgentXEntry;

public class AddressMapControlEntry extends AgentXEntry
{

    protected int addressMapControlIndex = 0;
    protected AgentXOID addressMapControlDataSource = new AgentXOID();
    protected AgentXOID undo_addressMapControlDataSource = new AgentXOID();
    protected long addressMapControlDroppedFrames = 0;
    protected byte[] addressMapControlOwner = new byte[0];
    protected byte[] undo_addressMapControlOwner = new byte[0];
    protected int addressMapControlStatus = 0;
    protected int undo_addressMapControlStatus = 0;

    public AddressMapControlEntry(int addressMapControlIndex)
    {
        this.addressMapControlIndex = addressMapControlIndex;

        instance.append(addressMapControlIndex);
    }

    public int get_addressMapControlIndex()
    {
        return addressMapControlIndex;
    }

    public AgentXOID get_addressMapControlDataSource()
    {
        return addressMapControlDataSource;
    }

    public int set_addressMapControlDataSource(AgentXSetPhase phase, AgentXOID value)
    {
        switch (phase.getPhase()) {
        case AgentXSetPhase.TEST_SET:
            break;
        case AgentXSetPhase.COMMIT:
            undo_addressMapControlDataSource = addressMapControlDataSource;
            addressMapControlDataSource = value;
            break;
        case AgentXSetPhase.UNDO:
            addressMapControlDataSource = undo_addressMapControlDataSource;
            break;
        case AgentXSetPhase.CLEANUP:
            break;
        default:
            return AgentXResponsePDU.PROCESSING_ERROR;
        }
        return AgentXResponsePDU.NO_ERROR;
    }
    public long get_addressMapControlDroppedFrames()
    {
        return addressMapControlDroppedFrames;
    }

    public byte[] get_addressMapControlOwner()
    {
        return addressMapControlOwner;
    }

    public int set_addressMapControlOwner(AgentXSetPhase phase, byte[] value)
    {
        switch (phase.getPhase()) {
        case AgentXSetPhase.TEST_SET:
            break;
        case AgentXSetPhase.COMMIT:
            undo_addressMapControlOwner = addressMapControlOwner;
            addressMapControlOwner = new byte[value.length];
            for(int i = 0; i < value.length; i++)
                addressMapControlOwner[i] = value[i];
            break;
        case AgentXSetPhase.UNDO:
            addressMapControlOwner = undo_addressMapControlOwner;
            break;
        case AgentXSetPhase.CLEANUP:
            undo_addressMapControlOwner = null;
            break;
        default:
            return AgentXResponsePDU.PROCESSING_ERROR;
        }
        return AgentXResponsePDU.NO_ERROR;
    }
    public int get_addressMapControlStatus()
    {
        return addressMapControlStatus;
    }

    public int set_addressMapControlStatus(AgentXSetPhase phase, int value)
    {
        switch (phase.getPhase()) {
        case AgentXSetPhase.TEST_SET:
            break;
        case AgentXSetPhase.COMMIT:
            undo_addressMapControlStatus = addressMapControlStatus;
            addressMapControlStatus = value;
            break;
        case AgentXSetPhase.UNDO:
            addressMapControlStatus = undo_addressMapControlStatus;
            break;
        case AgentXSetPhase.CLEANUP:
            break;
        default:
            return AgentXResponsePDU.PROCESSING_ERROR;
        }
        return AgentXResponsePDU.NO_ERROR;
    }
}

