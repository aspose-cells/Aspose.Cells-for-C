#pragma once
namespace Aspose {
namespace Cells {
	enum ErrorCheckType 

	{

			ErrorCheckType_Calc = 0x00000001 ,
			ErrorCheckType_EmptyCellRef = 0x00000002 ,
			ErrorCheckType_TextNumber = 0x00000004 ,
			ErrorCheckType_InconsistRange = 0x00000008 ,
			ErrorCheckType_InconsistFormula = 0x00000010 ,
			ErrorCheckType_TextDate = 0x00000020 ,
			ErrorCheckType_UnproctedFormula = 0x00000040 ,
			ErrorCheckType_Validation = 0x00000080 ,
			ErrorCheckType_CalculatedColumn ,
	};


}

}
