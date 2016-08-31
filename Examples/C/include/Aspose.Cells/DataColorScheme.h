#pragma once
#include "System/Object.h"
#include "System/String.h"
#include "System/Drawing/Color.h"
#include "DataKeep.h"
#define STATIC_DATACOLORSCHEME() 


namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataColorScheme : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			bool _isSysColor;
	public:

			intrusive_ptr<Aspose::Cells::System::Drawing::Color> _color;
			intrusive_ptr<Aspose::Cells::System::String> Name;
			intrusive_ptr<Aspose::Cells::System::String> SysClrVal;
			intrusive_ptr<Aspose::Cells::OpenXML::DataKeep> KeepData;
			intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetColor();
			void SetColor(intrusive_ptr<Aspose::Cells::System::Drawing::Color> value);
			bool IsSysColor();
			void SetIsSysColor(bool value);
			void Copy(intrusive_ptr<Aspose::Cells::OpenXML::DataColorScheme> source);
			 DataColorScheme();
		public:
			virtual ~DataColorScheme();
	};

}

}

}
