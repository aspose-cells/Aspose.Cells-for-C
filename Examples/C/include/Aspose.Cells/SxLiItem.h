#pragma once
#include "SxLiItemType.h"
#include "System/Array1D.h"
//#include "System/Array.h"
#include "System/Collections/ArrayList.h"
#include "System/Int32.h"
#include "System/String.h"
#include "System/UInt16.h"
#include "System/Object.h"
#define STATIC_SXLIITEM() 


namespace Aspose {
namespace Cells {
namespace Pivot {
	class SxLiItem : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			 SxLiItem(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> sxli);
			 SxLiItem(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> sxli , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> C8Records , bool flag);
			 SxLiItem(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> sxli , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> itemList);
			Aspose::Cells::System::UInt16 Option;
			Aspose::Cells::System::Int32 StartIndex;
			Aspose::Cells::Pivot::SxLiItemType Type;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> C8Records;
			Aspose::Cells::System::Int32 GetdataIndex();
			intrusive_ptr<Aspose::Cells::System::String> GetTypeName();
			Aspose::Cells::System::Int32 Count;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> Indexes;
			bool IsSubtotal();
			void SetIsSubtotal(bool value);
			bool IsGrand();
			void SetIsGrand(bool value);
			bool IsMultiDataOnAxis();
			Aspose::Cells::System::Int32 GetIData();
			bool IsBlock();
			 SxLiItem();
		public:
			virtual ~SxLiItem();
	};

}

}

}
