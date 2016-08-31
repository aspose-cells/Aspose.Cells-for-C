#pragma once
//#include "System/UInt16.h"
#include "System/Object.h"
//#include "System/Boxing.h"
//#include "System/Collections/Hashtable.h"
#include "System/Int16.h"
//#include "System/Math.h"
//#include "System/BitConverter.h"
#include "System/Double.h"
#include "System/Byte.h"
#include "System/Array1D.h"
#include "System/Int32.h"
#define STATIC_COLUMN() 

namespace Aspose {
namespace Cells {
class Worksheet;
class CopyOptions;
class StyleFlag;
class Style;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API Column : public Aspose::Cells::System::Object
#else	class Column : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			Aspose::Cells::Worksheet* m_Sheet;
			Aspose::Cells::System::Int16 m_Index;
			Aspose::Cells::System::Int32 m_XFIndex;
			Aspose::Cells::System::Byte m_Options;
	public:

			 Column(Aspose::Cells::System::Int32 columnIndex , intrusive_ptr<Aspose::Cells::Worksheet> sheet , Aspose::Cells::System::Double defaultWidth);
			 Column(Aspose::Cells::System::Int32 columnIndex , intrusive_ptr<Aspose::Cells::Worksheet> sheet , Aspose::Cells::System::Double defaultWidth , intrusive_ptr<Aspose::Cells::Column> defaultColumn);
			Aspose::Cells::System::Int32 GetIndex();
			void SetIndex(Aspose::Cells::System::Int32 columnIndex);
			Aspose::Cells::System::Double width;
			Aspose::Cells::System::Double GetWidth();
			void SetWidth(Aspose::Cells::System::Double value);
			Aspose::Cells::System::Int32 GetWidthPixel(bool display);
			Aspose::Cells::System::Int32 GetWidthPixel();
			void SetWidthPixel(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Byte GetOutlineLevel();
			void SetOutlineLevel(Aspose::Cells::System::Byte value);
			Aspose::Cells::System::Byte GetGroupLevel();
			Aspose::Cells::System::Int32 GetXFIndex();
			void SetXFIndex(Aspose::Cells::System::Int32 value);
			bool IsHidden();
			void SetIsHidden(bool value);
			bool IsInternalHidden();
			void SetIsInternalHidden(bool value);
			void CopyData(intrusive_ptr<Aspose::Cells::Column> source);
			void Copy(intrusive_ptr<Aspose::Cells::Column> source , intrusive_ptr<Aspose::Cells::CopyOptions> copyOption);
			bool IsSameInfo(intrusive_ptr<Aspose::Cells::Column> info);
			bool HasStyle();
			bool IsSameStyle(intrusive_ptr<Aspose::Cells::Column> column);
			void SetData(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data);
			void ApplyStyle(intrusive_ptr<Aspose::Cells::Style> style , intrusive_ptr<Aspose::Cells::StyleFlag> flag);
			intrusive_ptr<Aspose::Cells::Style> GetStyle();
			void SetStyle(intrusive_ptr<Aspose::Cells::Style> style);
			intrusive_ptr<Aspose::Cells::Style> GetRefStyle();
			bool IsCollapsed();
			void SetIsCollapsed(bool value);
			bool IsBestFit();
			void SetIsBestFit(bool value);
			bool IsAutoWidth();
			void SetIsAutoWidth(bool value);
			bool IsExported();
			 Column();
		public:
			virtual ~Column();
	};

}

}
