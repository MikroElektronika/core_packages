void HWMul_32x32();
void Mul_32x32();

unsigned long Get_Fosc_kHz(){

  return Clock_kHz();
}

void Delay_1us() {
  Delay_us(1);
}

void Delay_10us() {
  Delay_us(10);
}

void Delay_22us() {
  Delay_us(22);
}

void Delay_50us() {
  Delay_us(50);
}

void Delay_80us() {
  Delay_us(78);
}

void Delay_500us() {
  Delay_us(498);
}

void Delay_5500us() {
  Delay_us(5500);
}

void Delay_1ms() {
  Delay_ms(1);
}

void Delay_5ms() {
  Delay_ms(5);
}

void Delay_8ms() {
  Delay_ms(8);
}

void Delay_100ms() {
  Delay_ms(100);
}

void Delay_10ms() {
  Delay_ms(10);
}


void Delay_1sec() {
  Delay_ms(1000);
}



// Note: ExecutionCyclesCount may vary for different AVR MCUs (exmpl. RCALL instruction)
//       This routine is written for ATmega16. User can adjust execution time
//       by adding/removing NOP instructions inside asm blocks.
void Delay_Cyc(char cycles_div_by_10)  {  // Cycles_div_by_10 parameter range: min=4, max=255

static rx char loc absolute 0x00;
  loc = cycles_div_by_10;
  loc = loc - 4;             // this and NOPs on exit compensate code before loop
  while (loc > 0) {          // this loop should last 10cycles
    loc--;
    asm {
      NOP
      NOP
      NOP
    }
  }

  asm {
    NOP
    NOP
  }
}




// Note: ExecutionCyclesCount may vary for different AVR MCUs (exmpl. RCALL instruction)
//       It also depends on parameter: passing literal, char_var, unsigned_int_var
//       produces different code size. This routine is written for ATmega16 and char parameter.
//       User can adjust execution time by adding/removing NOP instructions inside asm blocks.

void VDelay_ms(unsigned int Time_ms){ // Time_ms parameter range: min=1, max=65535

unsigned long NumberOfCyc;

  NumberOfCyc = Clock_kHz();  // cycles per milisecond
  NumberOfCyc *= Time_ms;     // total number of cycles

  NumberOfCyc >>= 6; // divide with 64 (loop duration is 64 cycles)
  NumberOfCyc -=  4; // this and NOPs on exit compensate code before loop

//  loop:
  while (NumberOfCyc--)                     // 35 cycles (together with jump from "}" to while)
    {
                                  asm nop;  // 36
       asm nop; asm nop; asm nop; asm nop;  // 40
       asm nop; asm nop; asm nop; asm nop;
       asm nop; asm nop; asm nop; asm nop;
       asm nop; asm nop; asm nop; asm nop;
       asm nop; asm nop; asm nop; asm nop;
       asm nop; asm nop; asm nop; asm nop;
       asm nop; asm nop; asm nop; asm nop;  // 64 cycles
    }

   // Exit: 47 nops
   asm nop; asm nop; asm nop; asm nop;
   asm nop; asm nop; asm nop; asm nop;
   asm nop; asm nop; asm nop; asm nop;
   asm nop; asm nop; asm nop; asm nop;

   asm nop; asm nop; asm nop; asm nop;
   asm nop; asm nop; asm nop; asm nop;
   asm nop; asm nop; asm nop; asm nop;
   asm nop; asm nop; asm nop; asm nop;

   asm nop; asm nop; asm nop;
}


// Note: ExecutionCyclesCount may vary for different AVR MCUs (exmpl. RCALL instruction)
//       It also depends on parameter: passing literal, char_var, unsigned_int_var
//       produces different code size. This routine is written for ATmega16 and char parameter.
//       User can adjust execution time by adding/removing NOP instructions inside asm blocks.

void VDelay_Advanced_ms(unsigned int Time_ms, unsigned int Current_Fosc_kHz){ // Time_ms parameter range: min=1, max=65535

unsigned long NumberOfCyc;

  NumberOfCyc = Current_Fosc_kHz;  // cycles per milisecond
  NumberOfCyc *= Time_ms;          // total number of cycles

  NumberOfCyc >>= 6; // divide with 64 (loop duration is 64 cycles)
  NumberOfCyc -=  4; // this and NOPs on exit compensate code before loop

//  loop:
  while (NumberOfCyc--)                     // 35 cycles (together with jump from "}" to while)
    {
                                  asm nop;  // 36
       asm nop; asm nop; asm nop; asm nop;  // 40
       asm nop; asm nop; asm nop; asm nop;
       asm nop; asm nop; asm nop; asm nop;
       asm nop; asm nop; asm nop; asm nop;
       asm nop; asm nop; asm nop; asm nop;
       asm nop; asm nop; asm nop; asm nop;
       asm nop; asm nop; asm nop; asm nop;  // 64 cycles
    }

   // Exit: 47 nops
   asm nop; asm nop; asm nop; asm nop;
   asm nop; asm nop; asm nop; asm nop;
   asm nop; asm nop; asm nop; asm nop;
   asm nop; asm nop; asm nop; asm nop;

   asm nop; asm nop; asm nop; asm nop;
   asm nop; asm nop; asm nop; asm nop;
   asm nop; asm nop; asm nop; asm nop;
   asm nop; asm nop; asm nop; asm nop;

   asm nop; asm nop; asm nop;
}
