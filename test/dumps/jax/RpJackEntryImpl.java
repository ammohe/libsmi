/*
 * This Java file has been generated by smidump 0.2.11. It
 * is intended to be edited by the application programmer and
 * to be used within a Java AgentX sub-agent environment.
 *
 * $Id$
 */

/**
    This class extends the Java AgentX (JAX) implementation of
    the table row rpJackEntry defined in MAU-MIB.
 */

import jax.AgentXOID;
import jax.AgentXSetPhase;
import jax.AgentXResponsePDU;
import jax.AgentXEntry;

public class RpJackEntryImpl extends RpJackEntry
{

    // constructor
    public RpJackEntryImpl(int rpMauGroupIndex,
                       int rpMauPortIndex,
                       int rpMauIndex,
                       int rpJackIndex)
    {
        super(rpMauGroupIndex,
             rpMauPortIndex,
             rpMauIndex,
             rpJackIndex);
    }

    public int get_rpJackType()
    {
        return rpJackType;
    }

}

