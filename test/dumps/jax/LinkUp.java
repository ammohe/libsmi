/*
 * This Java file has been generated by smidump 0.3.0. Do not edit!
 * It is intended to be used within a Java AgentX sub-agent environment.
 *
 * $Id$
 */

import jax.AgentXOID;
import jax.AgentXVarBind;
import jax.AgentXNotification;
import java.util.Vector;

public class LinkUp extends AgentXNotification
{

    private final static long[] linkUp_OID = {1, 3, 6, 1, 6, 3, 1, 1, 5, 4};
    private static AgentXVarBind snmpTrapOID_VarBind =
        new AgentXVarBind(snmpTrapOID_OID,
                          AgentXVarBind.OBJECTIDENTIFIER,
                          new AgentXOID(linkUp_OID));

    private final static long[] OID1 = {1, 3, 6, 1, 2, 1, 2, 2, 1, 1};
    private final AgentXOID ifIndex_OID = new AgentXOID(OID1);
    private final static long[] OID2 = {1, 3, 6, 1, 2, 1, 2, 2, 1, 7};
    private final AgentXOID ifAdminStatus_OID = new AgentXOID(OID2);
    private final static long[] OID3 = {1, 3, 6, 1, 2, 1, 2, 2, 1, 8};
    private final AgentXOID ifOperStatus_OID = new AgentXOID(OID3);


    public LinkUp(IfEntry ifEntry_1, IfEntry ifEntry_2, IfEntry ifEntry_3) {
        AgentXOID oid;
        AgentXVarBind varBind;

        // add the snmpTrapOID object
        varBindList.addElement(snmpTrapOID_VarBind);

        // add the ifIndex columnar object of ifEntry_1
        oid = ifIndex_OID;
        oid.appendImplied(ifEntry_1.getInstance());
        varBind = new AgentXVarBind(oid,
                                    AgentXVarBind.INTEGER,
                                    ifEntry_1.get_ifIndex());
        varBindList.addElement(varBind);

        // add the ifAdminStatus columnar object of ifEntry_2
        oid = ifAdminStatus_OID;
        oid.appendImplied(ifEntry_2.getInstance());
        varBind = new AgentXVarBind(oid,
                                    AgentXVarBind.INTEGER,
                                    ifEntry_2.get_ifAdminStatus());
        varBindList.addElement(varBind);

        // add the ifOperStatus columnar object of ifEntry_3
        oid = ifOperStatus_OID;
        oid.appendImplied(ifEntry_3.getInstance());
        varBind = new AgentXVarBind(oid,
                                    AgentXVarBind.INTEGER,
                                    ifEntry_3.get_ifOperStatus());
        varBindList.addElement(varBind);
    }

    public Vector getVarBindList() {
        return varBindList;
    }

}

