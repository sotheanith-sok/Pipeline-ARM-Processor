`timescale 1ns / 1ps
module SignedExtender(SEin, SEout);

	input [31:0] SEin;
	output [63:0] SEout;
	
	if (SEIn[31:26]==180)
		assign SEout= {{55{SEin[23]}},SEin};
	else
		assign SEout= {{55{SEin[8]}},SEin};

endmodule
