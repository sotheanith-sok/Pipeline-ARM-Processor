`timescale 1ns / 1ps

module RFandALUwithRTypeSupport_Tester;

	// Inputs
	reg [4:0] Read1;
	reg [4:0] Read2;
	reg [4:0] WriteReg;
	reg [63:0] WriteData;
	reg RegWrite;
	reg clock;
	reg [1:0] ALUOp;
	reg [10:0] Opcode;

	// Outputs
	wire Zero;
	wire [63:0] ALU_Result;

	// Instantiate the Unit Under Test (UUT)
	RFandALUwithRTypeSupport uut (
		.Read1(Read1), 
		.Read2(Read2), 
		.WriteReg(WriteReg), 
		.WriteData(WriteData), 
		.RegWrite(RegWrite), 
		.clock(clock), 
		.ALUOp(ALUOp), 
		.Opcode(Opcode), 
		.Zero(Zero), 
		.ALU_Result(ALU_Result)
	);

	initial begin
		// Initialize Inputs
		Read1 = 5;
		Read2 = 10;
		WriteReg = 0;
		WriteData = 0;
		RegWrite = 0;
		clock = 0;
		ALUOp = 0;
		Opcode = 0;

		#5;
		WriteReg=5;
		WriteData=64'h5555555555555555;
		RegWrite=1;
		#5;
		clock=1;
		#10;
		clock=0;
		RegWrite=0;
		
		#5;
		WriteReg=10;
		WriteData=64'haaaaaaaaaaaaaaaa;
		RegWrite=1;
		#5;
		clock=1;
		#10;
		clock=0;
		RegWrite=0;
		
		#5;
		Read2=5;
		{ALUOp, Opcode}=13'b10_11111000010;
		#15;
		
		
		$stop;
        

	end
      
endmodule

