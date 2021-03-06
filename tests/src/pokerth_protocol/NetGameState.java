
package pokerth_protocol;
//
// This file was generated by the BinaryNotes compiler.
// See http://bnotes.sourceforge.net 
// Any modifications to this file will be lost upon recompilation of the source ASN.1. 
//

import org.bn.*;
import org.bn.annotations.*;
import org.bn.annotations.constraints.*;
import org.bn.coders.*;
import org.bn.types.*;




    @ASN1PreparedElement
    @ASN1Enum (
        name = "NetGameState"
    )
    public class NetGameState implements IASN1PreparedElement {        
        public enum EnumType {
            
            @ASN1EnumItem ( name = "statePreflop", hasTag = true , tag = 0 )
            statePreflop , 
            @ASN1EnumItem ( name = "stateFlop", hasTag = true , tag = 1 )
            stateFlop , 
            @ASN1EnumItem ( name = "stateTurn", hasTag = true , tag = 2 )
            stateTurn , 
            @ASN1EnumItem ( name = "stateRiver", hasTag = true , tag = 3 )
            stateRiver , 
            @ASN1EnumItem ( name = "statePreflopSmallBlind", hasTag = true , tag = 4 )
            statePreflopSmallBlind , 
            @ASN1EnumItem ( name = "statePreflopBigBlind", hasTag = true , tag = 5 )
            statePreflopBigBlind , 
        }
        
        private EnumType value;
        private Integer integerForm;
        
        public EnumType getValue() {
            return this.value;
        }
        
        public void setValue(EnumType value) {
            this.value = value;
        }
        
        public Integer getIntegerForm() {
            return integerForm;
        }
        
        public void setIntegerForm(Integer value) {
            integerForm = value;
        }

	    public void initWithDefaults() {
	    }

        private static IASN1PreparedElementData preparedData = CoderFactory.getInstance().newPreparedElementData(NetGameState.class);
        public IASN1PreparedElementData getPreparedData() {
            return preparedData;
        }


    }
            