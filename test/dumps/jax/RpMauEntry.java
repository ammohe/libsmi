/*
 * This Java file has been generated by smidump 0.3.0. Do not edit!
 * It is intended to be used within a Java AgentX sub-agent environment.
 *
 * $Id$
 */

/**
    This class represents a Java AgentX (JAX) implementation of
    the table row rpMauEntry defined in MAU-MIB.

    @version 1
    @author  smidump 0.3.0
    @see     AgentXTable, AgentXEntry
 */

import jax.AgentXOID;
import jax.AgentXSetPhase;
import jax.AgentXResponsePDU;
import jax.AgentXEntry;

public class RpMauEntry extends AgentXEntry
{

    protected int rpMauGroupIndex = 0;
    protected int rpMauPortIndex = 0;
    protected int rpMauIndex = 0;
    protected AgentXOID rpMauType = new AgentXOID();
    protected int rpMauStatus = 0;
    protected int undo_rpMauStatus = 0;
    protected int rpMauMediaAvailable = 0;
    protected long rpMauMediaAvailableStateExits = 0;
    protected int rpMauJabberState = 0;
    protected long rpMauJabberingStateEnters = 0;
    protected long rpMauFalseCarriers = 0;

    public RpMauEntry(int rpMauGroupIndex,
                      int rpMauPortIndex,
                      int rpMauIndex)
    {
        this.rpMauGroupIndex = rpMauGroupIndex;
        this.rpMauPortIndex = rpMauPortIndex;
        this.rpMauIndex = rpMauIndex;

        instance.append(rpMauGroupIndex);
        instance.append(rpMauPortIndex);
        instance.append(rpMauIndex);
    }

    public int get_rpMauGroupIndex()
    {
        return rpMauGroupIndex;
    }

    public int get_rpMauPortIndex()
    {
        return rpMauPortIndex;
    }

    public int get_rpMauIndex()
    {
        return rpMauIndex;
    }

    public AgentXOID get_rpMauType()
    {
        return rpMauType;
    }

    public int get_rpMauStatus()
    {
        return rpMauStatus;
    }

    public int set_rpMauStatus(AgentXSetPhase phase, int value)
    {
        switch (phase.getPhase()) {
        case AgentXSetPhase.TEST_SET:
            break;
        case AgentXSetPhase.COMMIT:
            undo_rpMauStatus = rpMauStatus;
            rpMauStatus = value;
            break;
        case AgentXSetPhase.UNDO:
            rpMauStatus = undo_rpMauStatus;
            break;
        case AgentXSetPhase.CLEANUP:
            break;
        default:
            return AgentXResponsePDU.PROCESSING_ERROR;
        }
        return AgentXResponsePDU.NO_ERROR;
    }
    public int get_rpMauMediaAvailable()
    {
        return rpMauMediaAvailable;
    }

    public long get_rpMauMediaAvailableStateExits()
    {
        return rpMauMediaAvailableStateExits;
    }

    public int get_rpMauJabberState()
    {
        return rpMauJabberState;
    }

    public long get_rpMauJabberingStateEnters()
    {
        return rpMauJabberingStateEnters;
    }

    public long get_rpMauFalseCarriers()
    {
        return rpMauFalseCarriers;
    }

}

