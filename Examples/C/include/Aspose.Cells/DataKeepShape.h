#pragma once
#include "System/Int32.h"
#include "System/Object.h"
#include "System/String.h"
#define STATIC_DATAKEEPSHAPE() 

namespace Aspose {
namespace Cells {
class CopyOptions;
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataKeepDrSp;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataKeepShape : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			 DataKeepShape();
			 DataKeepShape(bool isDrawingShape);
			intrusive_ptr<Aspose::Cells::System::String> VmlShape_Id;
			intrusive_ptr<Aspose::Cells::System::String> VmlShape_Spid;
			intrusive_ptr<Aspose::Cells::System::String> OldVmlShape_Spid;
			Aspose::Cells::System::Int32 VmlShape_ZIndex;
			Aspose::Cells::System::Int32 Origin_DrawingOrder;
			intrusive_ptr<Aspose::Cells::System::String> anchorType;
			intrusive_ptr<Aspose::Cells::System::String> Origin_ElmOuterXML;
			intrusive_ptr<Aspose::Cells::System::String> FPublishedString;
			bool IsGroupShape;
			bool IsShapeForReadOnly;
			intrusive_ptr<Aspose::Cells::OpenXML::DataKeepDrSp> _OriginDrawingData;
			intrusive_ptr<Aspose::Cells::System::String> ImageDataGain;
			intrusive_ptr<Aspose::Cells::System::String> ImageBlacklevel;
			bool AlternateContent;
			void CopyPart(intrusive_ptr<Aspose::Cells::OpenXML::DataKeepShape> source , intrusive_ptr<Aspose::Cells::CopyOptions> copyOption , bool same);
		public:
			virtual ~DataKeepShape();
	};

}

}

}
