/*
 * This Java file has been generated by smidump 0.2.12. It
 * is intended to be edited by the application programmer and
 * to be used within a Java AgentX sub-agent environment.
 *
 * $Id$
 */

/**
    This class extends the Java AgentX (JAX) implementation of
    the table row tokenRingMLStats2Entry defined in RMON2-MIB.
 */

import jax.AgentXOID;
import jax.AgentXSetPhase;
import jax.AgentXResponsePDU;
import jax.AgentXEntry;

public class TokenRingMLStats2EntryImpl extends TokenRingMLStats2Entry
{

    // constructor
    public TokenRingMLStats2EntryImpl()
    {
        super();
    }

    public long get_tokenRingMLStatsDroppedFrames()
    {
        return tokenRingMLStatsDroppedFrames;
    }

    public long get_tokenRingMLStatsCreateTime()
    {
        return tokenRingMLStatsCreateTime;
    }

}

