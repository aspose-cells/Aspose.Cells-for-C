#pragma once
#include "System/Object.h"
#include "System/Int16.h"
#include "TextAlignmentType.h"
#include "TextDirectionType.h"
#include "System/Int32.h"
#define STATIC_XLSBBRTXF() 


namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace DataInfo {
	class XlsbBrtXF : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::Int32 Index;
			bool IsCellStyle;
			Aspose::Cells::TextAlignmentType Horizontal;
			Aspose::Cells::TextAlignmentType Vertical;
			Aspose::Cells::System::Int32 TextRotation;
			bool IsWrapText;
			Aspose::Cells::System::Int32 Indent;
			bool IsShrinkToFit;
			bool IsLocked;
			bool IsHidden;
			bool IsSxButton;
			bool Is123Prefix;
			Aspose::Cells::System::Int16 NumFmtId;
			Aspose::Cells::System::Int16 FontId;
			Aspose::Cells::System::Int16 FillId;
			Aspose::Cells::System::Int16 BorderId;
			Aspose::Cells::System::Int16 XfId;
			Aspose::Cells::System::Int16 OriginId;
			Aspose::Cells::TextDirectionType TextDirection;
			bool IsApplyNumberFormat;
			bool IsApplyFont;
			bool IsApplyFill;
			bool IsApplyBorder;
			bool IsApplyAlignment;
			bool IsApplyProtection;
			 XlsbBrtXF();
		public:
			virtual ~XlsbBrtXF();
	};

}

}

}

}
