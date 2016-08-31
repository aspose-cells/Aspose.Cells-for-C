#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
#include "System/Byte.h"
#include "System/Int32.h"
//#include "System/BitConverter.h"
#define STATIC_BOOKEXTSETTINGS() 


namespace Aspose {
namespace Cells {
	class BookExtSettings : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::Int32 Options;
			Aspose::Cells::System::Byte Conditional11Option;
			Aspose::Cells::System::Byte Conditional12Option;
			Aspose::Cells::System::Int32 Cb;
			void Copy(intrusive_ptr<Aspose::Cells::BookExtSettings> source);
			void LoadBinary(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> record);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> ToBinary();
			bool GetHidePivotList();
			void SetHidePivotList(bool value);
			bool GetFilterPrivacy();
			void SetFilterPrivacy(bool value);
			 BookExtSettings();
		public:
			virtual ~BookExtSettings();
	};

}

}
