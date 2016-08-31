#pragma once
#include "System/Byte.h"
//#include "System/StringHelperPal.h"
#include "TextAlignmentType.h"
#include "System/Object.h"
#include "System/String.h"
#include "StyleModifyFlag.h"
#include "TextDirectionType.h"
#include "System/Int32.h"
#define STATIC_DATAALIGNMENT() 

namespace Aspose {
namespace Cells {
class Style;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataAlignment : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 m_TextRotation;
			bool m_IsWrapText;
			Aspose::Cells::System::Int32 m_Indent;
			bool m_IsShrinkToFit;
			Aspose::Cells::TextDirectionType m_TextDirection;
			Aspose::Cells::System::Byte Option;
			bool IsModified(Aspose::Cells::StyleModifyFlag flag);
			void SetModifiedFlag(Aspose::Cells::StyleModifyFlag flag);
	public:

			intrusive_ptr<Aspose::Cells::System::String> Horizontal;
			bool JustifyLastLine;
			intrusive_ptr<Aspose::Cells::System::String> Vertical;
			Aspose::Cells::System::Int32 GetTextRotation();
			void SetTextRotation(Aspose::Cells::System::Int32 value);
			bool IsWrapText();
			void SetIsWrapText(bool value);
			Aspose::Cells::System::Int32 GetIndent();
			void SetIndent(Aspose::Cells::System::Int32 value);
			bool IsShrinkToFit();
			void SetIsShrinkToFit(bool value);
			Aspose::Cells::TextDirectionType GetTextDirection();
			void SetTextDirection(Aspose::Cells::TextDirectionType value);
			Aspose::Cells::TextAlignmentType HAlign;
			Aspose::Cells::TextAlignmentType VAlign;
			 DataAlignment();
			bool IsEqual(intrusive_ptr<Aspose::Cells::OpenXML::DataAlignment> align);
			void SetDataToStyle(intrusive_ptr<Aspose::Cells::Style> style , bool isDxf);
			static intrusive_ptr<Aspose::Cells::OpenXML::DataAlignment> GetDataAlignment(intrusive_ptr<Aspose::Cells::Style> style);
		public:
			virtual ~DataAlignment();
	};

}

}

}
