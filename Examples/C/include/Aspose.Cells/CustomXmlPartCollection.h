#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
#include "CustomXmlPart.h"
#include "System/Byte.h"
//#include "System/Collections/ArrayList.h"
#include "System/Collections/CollectionBase.h"
#include "System/Int32.h"
#define STATIC_CUSTOMXMLPARTCOLLECTION() 


namespace Aspose {
namespace Cells {
namespace Markup {
#ifdef WIN32

	class ASPOSE_CELLS_API CustomXmlPartCollection : public Aspose::Cells::System::Collections::CollectionBase
#else	class CustomXmlPartCollection : public Aspose::Cells::System::Collections::CollectionBase
#endif


	{
	private:

			void Init_Vars();
	public:

			 CustomXmlPartCollection();
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> shemaData);
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::Markup::CustomXmlPart> part);
			intrusive_ptr<Aspose::Cells::Markup::CustomXmlPart> GetIndexObject(Aspose::Cells::System::Int32 index);
			void Copy(intrusive_ptr<Aspose::Cells::Markup::CustomXmlPartCollection> source);
		public:
			virtual ~CustomXmlPartCollection();
	};

}

}

}
