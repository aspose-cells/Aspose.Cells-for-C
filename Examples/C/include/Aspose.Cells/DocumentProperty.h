#pragma once
//#include "System/StringHelperPal.h"
//#include "System/Boxing.h"
#include "System/Object.h"
#include "System/String.h"
//#include "System/UInt32.h"
#include "PropertyType.h"
#include "PropertyGroup.h"
//#include "System/Byte.h"
#include "System/DateTime.h"
#include "System/Double.h"
//#include "System/ArgumentNullException.h"
#include "System/Int32.h"
#include "System/Int64.h"
//#include "System/Exception.h"
//#include "System/Array1D.h"
#define STATIC_DOCUMENTPROPERTY() 

namespace Aspose {
namespace Cells {
namespace Properties {
class DocumentPropertyCollection;
}
}
}

namespace Aspose {
namespace Cells {
namespace Properties {
#ifdef WIN32

	class ASPOSE_CELLS_API DocumentProperty : public Aspose::Cells::System::Object
#else	class DocumentProperty : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			Aspose::Cells::Properties::DocumentPropertyCollection* properties;
			Aspose::Cells::Properties::PropertyGroup mGroup;
			Aspose::Cells::System::Int32 mId;
			intrusive_ptr<Aspose::Cells::System::String> mName;
			intrusive_ptr<Aspose::Cells::System::Object> mValue;
			bool mIsGeneratedName;
	public:

			 DocumentProperty(intrusive_ptr<Aspose::Cells::Properties::DocumentPropertyCollection> properties , Aspose::Cells::Properties::PropertyGroup group , Aspose::Cells::System::Int32 id , intrusive_ptr<Aspose::Cells::System::String> name , intrusive_ptr<Aspose::Cells::System::Object> value , bool isGeneratedName);
			intrusive_ptr<Aspose::Cells::System::String> GetName();
			intrusive_ptr<Aspose::Cells::System::Object> GetValue();
			void SetValue(intrusive_ptr<Aspose::Cells::System::Object> value);
			bool IsLinkedToContent();
			intrusive_ptr<Aspose::Cells::System::String> GetSource();
			Aspose::Cells::Properties::PropertyType GetType();
			bool IsGeneratedName();
			Aspose::Cells::System::Int32 GetId();
			Aspose::Cells::System::Int32 GetIdWithoutLinkFlag();
			bool IsLink();
			Aspose::Cells::Properties::PropertyGroup GetGroup();
			 virtual intrusive_ptr<Aspose::Cells::System::String> ToString();
			Aspose::Cells::System::Int32 ToInt();
			Aspose::Cells::System::Int64 ToLong();
			Aspose::Cells::System::Double ToDouble();
			intrusive_ptr<Aspose::Cells::System::DateTime> ToDateTime();
			bool ToBool();
			intrusive_ptr<Aspose::Cells::Properties::DocumentProperty> Clone();
			 DocumentProperty();
		public:
			virtual ~DocumentProperty();
	};

}

}

}
