#pragma once
#include "IStringPool.h"
//#include "System/UInt16.h"
//#include "System/Collections/ArrayList.h"
//#include "System/Boxing.h"
//#include "System/Collections/ICollection.h"
#include "System/UInt32.h"
//#include "System/BitConverter.h"
//#include "System/Array.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Collections/SortedList.h"
#include "System/Byte.h"
#include "System/String.h"
#include "System/Int32.h"
#include "System/Collections/Hashtable.h"
#define STATIC_STRINGPOOL() 

namespace Aspose {
namespace Cells {
namespace Collections {
class IntArrayList;
}
}
}
namespace Aspose {
namespace Cells {
class RefString;
class RichText;
class WorksheetCollection;
}
}

namespace Aspose {
namespace Cells {
	class StringPool : public Aspose::Cells::CellsSs::IStringPool
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> stringList;
			intrusive_ptr<Aspose::Cells::Collections::IntArrayList> m_FreeList;
			Aspose::Cells::System::Int32 uniqueCount;
			void EnsureCapacity(Aspose::Cells::System::Int32 count);
	public:

			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::RefString*>> m_Table;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> GetStringList();
			 StringPool();
			intrusive_ptr<Aspose::Cells::RefString> GetBySST(Aspose::Cells::System::Int32 sst);
			intrusive_ptr<Aspose::Cells::System::String> GetString(Aspose::Cells::System::Int32 sst);
			intrusive_ptr<Aspose::Cells::RefString> CheckRefString(intrusive_ptr<Aspose::Cells::System::String> value);
			void AddRefString(intrusive_ptr<Aspose::Cells::RefString> refString);
			void AddReadRefString(intrusive_ptr<Aspose::Cells::RefString> refString);
			intrusive_ptr<Aspose::Cells::RefString> AddString(intrusive_ptr<Aspose::Cells::System::String> inputString);
			Aspose::Cells::System::Int32 GetCeilingSST();
			Aspose::Cells::System::UInt32 GetTotalStringNumber();
			Aspose::Cells::System::Int32 GetUniqueCount();
			void SetUniqueCount(Aspose::Cells::System::Int32 value);
			bool IsBuiltIn();
			void RemoveString(intrusive_ptr<Aspose::Cells::RefString> refString);
			void RemoveString(Aspose::Cells::System::Int32 sst);
			bool ContainsPhoneticText();
			 StringPool(Aspose::Cells::System::UInt32 total , Aspose::Cells::System::Int32 uniqueCount);
			bool GetNeedGather();
			Aspose::Cells::System::Int32 Rebuild(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> usedCount , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> sstMap , intrusive_ptr<Aspose::Cells::CellsSs::IStringPool> sourcePool);
			intrusive_ptr<Aspose::Cells::RefString> CheckRefString(intrusive_ptr<Aspose::Cells::RefString> refString);
			void RemoveStrings();
			void RemoveString(intrusive_ptr<Aspose::Cells::System::String> str);
			intrusive_ptr<Aspose::Cells::RefString> AddCopy(intrusive_ptr<Aspose::Cells::RefString> refString , intrusive_ptr<Aspose::Cells::WorksheetCollection> source , intrusive_ptr<Aspose::Cells::WorksheetCollection> dest);
			intrusive_ptr<Aspose::Cells::RefString> AddRichText(intrusive_ptr<Aspose::Cells::System::String> text , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> runs);
			intrusive_ptr<Aspose::Cells::RefString> GatherFormatRuns(intrusive_ptr<Aspose::Cells::RichText> source , Aspose::Cells::System::Int32 cellFontIndex , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> GetSmartMarkers();
		public:
			virtual ~StringPool();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}
