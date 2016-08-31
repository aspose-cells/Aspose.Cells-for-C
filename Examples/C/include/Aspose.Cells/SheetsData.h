#pragma once
#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Int16.h"
#include "System/UInt16.h"
//#include "System/Int32.h"
#include "System/Collections/ArrayList.h"
#define STATIC_SHEETSDATA() 

namespace Aspose {
namespace Cells {
namespace RW {
class DataOutStream;
}
}
}

namespace Aspose {
namespace Cells {
	class SheetsData : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::UInt16 fnGroupCount;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> globalHead;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> macrochMPList;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> prot4rev;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> prot4RevPass;
	public:

			 SheetsData();
			Aspose::Cells::System::UInt16 GetFnGroupCount();
			void SetFnGroupCount(Aspose::Cells::System::UInt16 value);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetGlobalHead();
			void SetGlobalHead(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> value);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetMacrochMPList();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetProt4rev();
			void SetProt4rev(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> value);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetProt4RevPass();
			void SetProt4RevPass(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> value);
			void Copy(intrusive_ptr<Aspose::Cells::SheetsData> source);
			void WriteProtectRecords(intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream);
			void WriteMacrochMPRecords(intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream);
		public:
			virtual ~SheetsData();
	};

}

}
