#pragma once
#include "XFExtension.h"
#include "System/Object.h"
#include "XFExtensionType.h"
//#include "System/Boxing.h"
//#include "System/Drawing/Color.h"
#include "System/Int32.h"
//#include "System/Int16.h"
#include "System/Collections/CollectionBase.h"
//#include "System/Collections/ArrayList.h"
#define STATIC_XFEXTERNSIONPROPERTYCOLLECTION() 

namespace Aspose {
namespace Cells {
class InternalColor;
class Style;
class WorksheetCollection;
}
}

namespace Aspose {
namespace Cells {
	class XFExternsionPropertyCollection : public Aspose::Cells::System::Collections::CollectionBase
	{
	private:

			void Init_Vars();
	public:

			void Add(intrusive_ptr<Aspose::Cells::XFExternsionPropertyCollection> properties);
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::XFExtension> xfExtension);
			Aspose::Cells::System::Int32 Add(Aspose::Cells::XFExtensionType type , intrusive_ptr<Aspose::Cells::System::Object> value);
			intrusive_ptr<Aspose::Cells::XFExtension> GetIndexObject(Aspose::Cells::System::Int32 index);
			intrusive_ptr<Aspose::Cells::XFExtension> getByXFExtensionTypeIndexObject(Aspose::Cells::XFExtensionType type);
			bool IsExColor(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::InternalColor> color);
			void FromDxf(intrusive_ptr<Aspose::Cells::Style> style);
			bool ToStyle(intrusive_ptr<Aspose::Cells::Style> style);
			 XFExternsionPropertyCollection();
		public:
			virtual ~XFExternsionPropertyCollection();
	};

}

}
