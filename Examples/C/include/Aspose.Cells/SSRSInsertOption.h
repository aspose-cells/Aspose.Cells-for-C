#pragma once
#include "System/Object.h"
#include "System/Double.h"
#define STATIC_SSRSINSERTOPTION() 


namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API SSRSInsertOption : public Aspose::Cells::System::Object
#else	class SSRSInsertOption : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
	public:

			bool CopyStyle;
			bool UpdateFormula;
			bool MoveShape;
			Aspose::Cells::System::Double RowHeightPixel;
			bool CopyRowHeight;
			bool MovePivotTable;
			bool MoveValidation;
			bool MoveCondtionalFormatting;
			bool MoveHyperlink;
			bool MoveMergedCells;
			bool MoveNames;
			 SSRSInsertOption();
		public:
			virtual ~SSRSInsertOption();
	};

}

}
