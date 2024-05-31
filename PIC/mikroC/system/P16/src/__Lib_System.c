
char __DoICPAddr[2];

char __saveSTATUS, __savePCLATH;

void ____DoICP(){
   

  PCLATH = __DoICPAddr[1];
  PCL = __DoICPAddr[0];

}


void ____DoIFC(){


  PCLATH = __DoICPAddr[1];
  PCL = __DoICPAddr[0];

}


void __FillZeros(){
  while(FSR >= R0)
    *(char*)FSR-- = 0;
}

void __CA2AW(){
    R0 = FSR;
    FSR = R1;
    asm{
     L_loopCA2AWs:
          MOVF       INDF, 0
          MOVWF      R3
          INCF       FSR, 0
          MOVWF      R1
          MOVF       R0, 0
          MOVWF      FSR
          MOVF       R3, 0
          MOVWF      INDF
          INCF       FSR, 0
          MOVWF      R0
          DECF       R2, 1
          BTFSC      STATUS, Z
          GOTO       L_CA2AWend
          MOVF       R1, 0
          MOVWF      FSR
          GOTO       L_loopCA2AWs
      L_CA2AWend:
    }
    FSR = R0;
}

void __CCA2AW(){
    __DoICPAddr[0] = R0;
    __DoICPAddr[1] = R1;
    asm{
      _CCA2AW_Loop1:
    }
    ____DoICP(); // mora da se zove iz pascal koda, nikako iz asemblera
    asm{
          MOVWF       INDF
          INCF        FSR, 1
    }
    __DoICPAddr[0]++;
    asm{
          BTFSC       STATUS, Z
          INCF        ___DoICPAddr+1, 1
    }
    R2--;
    asm{
          BTFSS       STATUS, Z
          GOTO        _CCA2AW_Loop1
    }
}

void __CS2S(){
    R0 = FSR;
    FSR = R1;
    asm{
      L_loopCS2Ss:
          MOVF       INDF, 0
          BTFSC      STATUS, Z
          GOTO       L_CS2Send
          MOVWF      R2
          INCF       FSR, 0
          MOVWF      R1
          MOVF       R0, 0
          MOVWF      FSR
          MOVF       R2, 0
          MOVWF      INDF
          INCF       FSR, 0
          MOVWF      R0
          MOVF       R1, 0
          MOVWF      FSR
          GOTO       L_loopCS2Ss
      L_CS2Send:
    }
    FSR = R0;
}

void __CCS2S(){
    __DoICPAddr[0] = R0;
    __DoICPAddr[1] = R1;
    asm{
      _CCS2S_Loop1:
    }
    ____DoICP(); // mora da se zove iz pascal koda, nikako iz asemblera
    asm{
          IORLW       0
          BTFSC       STATUS, Z
          GOTO        L_CCS2Send
          MOVWF       INDF
          INCF        FSR, 1
    }
    __DoICPAddr[0]++;
    asm{
          BTFSC        STATUS, Z
          INCF        ___DoICPAddr+1, 1
          GOTO        _CCS2S_Loop1
      L_CCS2Send:
    }
}

void __FZinS(){
    asm{
      L_loopFZinSWs:
          MOVF       INDF, 0
          BTFSC      STATUS, Z
          GOTO       L_FZinSend
          INCF        FSR, 1
          GOTO       L_loopFZinSWs
      L_FZinSend:
    }
    // R0 := FSR;
}


void __CC2DW(){
  
   asm{
     _CC2D_Loop1:  
     }
     ____DoICP();
   asm{ 
     MOVWF        INDF
     INCF FSR, 1}
   __DoICPAddr[0]++;
   asm{
     BTFSC        STATUS, Z
     INCF        ___DoICPAddr+1, 1}
   R0--;
   asm{
     BTFSS      STATUS, Z
     GOTO       _CC2D_Loop1 
    }
}

char Swap(char input) {
  R0 = input;
  asm swapf R0, F
  return R0;
}