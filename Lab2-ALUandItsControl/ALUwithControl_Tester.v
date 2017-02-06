`timescale 1ns / 1ps

module ALUwithControl_Tester;

	// Inputs
	reg [1:0] ALUOp;
	reg [10:0] Opcode;
	reg [63:0] A;
	reg [63:0] B;

	// Outputs
	wire Zero;
	wire [63:0] ALU_Result;

	// Instantiate the Unit Under Test (UUT)
	ALUwithControl uut (
		.ALUOp(ALUOp), 
		.Opcode(Opcode), 
		.A(A), 
		.B(B), 
		.Zero(Zero), 
		.ALU_Result(ALU_Result)
	);

	initial begin
		// Initialize Inputs
		A=64'h5555555555555555;
		B=64'haaaaaaaaaaaaaaaa;
       //AND
		ALUOp = 2;
		Opcode = 11'b10001010000;
		#10;
       
		//OR
		ALUOp = 2;
		Opcode = 11'b10101010000;
		#10;
		
		//ADD
		ALUOp = 2;
		Opcode = 11'b10001011000;
		#10;
		
		//SUB
		ALUOp = 2;
		Opcode = 11'b11001011000;
		#10;
		
		//Pass B
		ALUOp = 2;
		Opcode = 11'b11111000010;
		#10;
		
		//NOR
		ALUOp = 2;
		Opcode = 11'b11101010000;
		#10;
		
		//Unknown
		ALUOp = 0;
		Opcode = 0;
		#10;
		$stop;

	end
      
endmodule

