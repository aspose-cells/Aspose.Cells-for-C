#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
#include "System/Byte.h"
//#include "System/Int32.h"
#define STATIC_CUSTOMXMLPART() 


namespace Aspose {
namespace Cells {
namespace Markup {
#ifdef WIN32

	class ASPOSE_CELLS_API CustomXmlPart : public Aspose::Cells::System::Object
#else	class CustomXmlPart : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
	public:

			 CustomXmlPart();
			 CustomXmlPart(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> shemaData);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> m_Data;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetData();
			void SetData(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> value);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> m_SchemaData;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetSchemaData();
			void SetSchemaData(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> value);
			void Copy(intrusive_ptr<Aspose::Cells::Markup::CustomXmlPart> source);
		public:
			virtual ~CustomXmlPart();
	};

}

}

}
