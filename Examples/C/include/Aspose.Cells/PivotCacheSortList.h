#pragma once
#include "System/String.h"
#include "System/Collections/ArrayList.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/DateTime.h"
//#include "System/Boxing.h"
#include "ErrorType.h"
#include "System/Double.h"
//#include "System/StringHelperPal.h"
#include "System/Int32.h"
//#include "System/Type.h"
//#include "System/TypeCode.h"
#define STATIC_PIVOTCACHESORTLIST() 


namespace Aspose {
namespace Cells {
namespace Pivot {
	class PivotCacheSortList : public Aspose::Cells::System::Object
	{
	private:


		class CacheSortNumberValue;

		 friend class PivotCacheSortList::CacheSortNumberValue;

		class CacheSortStringValue;

		 friend class PivotCacheSortList::CacheSortStringValue;

		class CacheSortErrorValue;

		 friend class PivotCacheSortList::CacheSortErrorValue;

		
#ifdef WIN32

	class ASPOSE_CELLS_API CacheSortNumberValue : public Aspose::Cells::System::Object
#else	class CacheSortNumberValue : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::Double Value;
			Aspose::Cells::System::Int32 Index;
			 CacheSortNumberValue();
		public:
			virtual ~CacheSortNumberValue();
	};

		
#ifdef WIN32

	class ASPOSE_CELLS_API CacheSortStringValue : public Aspose::Cells::System::Object
#else	class CacheSortStringValue : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::String> Value;
			Aspose::Cells::System::Int32 Index;
			 CacheSortStringValue();
		public:
			virtual ~CacheSortStringValue();
	};

		
#ifdef WIN32

	class ASPOSE_CELLS_API CacheSortErrorValue : public Aspose::Cells::System::Object
#else	class CacheSortErrorValue : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::ErrorType Value;
			Aspose::Cells::System::Int32 Index;
			 CacheSortErrorValue();
		public:
			virtual ~CacheSortErrorValue();
	};
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> stringList;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> numberList;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> trueList;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> falseList;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> nullList;
			Aspose::Cells::System::Int32 count;
			void Add(Aspose::Cells::System::Double doubleValue , Aspose::Cells::System::Int32 index);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> errorList;
			void Add(Aspose::Cells::ErrorType errorType , Aspose::Cells::System::Int32 index);
			void Add(intrusive_ptr<Aspose::Cells::System::String> stringValue , Aspose::Cells::System::Int32 index);
			void Add(bool boolValue , Aspose::Cells::System::Int32 index);
	public:

			bool IsData;
			bool IsAscend;
			 PivotCacheSortList(bool isData , bool isAscend);
			void Add(intrusive_ptr<Aspose::Cells::System::Object> value , Aspose::Cells::System::Int32 index);
			void Reset();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> ToSortedArrayList();
			 PivotCacheSortList();
		public:
			virtual ~PivotCacheSortList();
	};

}

}

}
