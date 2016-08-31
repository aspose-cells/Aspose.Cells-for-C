#pragma once
#include "System/Int64.h"
#include "System/Collections/ArrayList.h"
#include "System/Int16.h"
#include "IIndexedList.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Array2D.h"
//#include "System/Byte.h"
//#include "System/String.h"
#include "System/Int32.h"
#define STATIC_FORMULALEAFPOOL() 

namespace Aspose {
namespace Cells {
class FormulaPool;
class FormulaCell;
class WorksheetCollection;
}
}

namespace Aspose {
namespace Cells {
namespace CellsSs {
	class FormulaLeafPool : public Aspose::Cells::System::Object
	{
	private:


		class CellsLeaves;

		 friend class FormulaLeafPool::CellsLeaves;

		class RowLeaves;

		 friend class FormulaLeafPool::RowLeaves;

		class RangeLeaves;

		 friend class FormulaLeafPool::RangeLeaves;

		class FormulaRange;

		 friend class FormulaLeafPool::FormulaRange;

		class FormulaPrecedent;

		 friend class FormulaLeafPool::FormulaPrecedent;

		class FormulaPrecedentBuffer;

		 friend class FormulaLeafPool::FormulaPrecedentBuffer;

		class FormulaRangePrecedent;

		 friend class FormulaLeafPool::FormulaRangePrecedent;

		class ICellLeafHandler;

		 friend class FormulaLeafPool::ICellLeafHandler;

		class CellLeafHandlerOnCellChanged;

		 friend class FormulaLeafPool::CellLeafHandlerOnCellChanged;

		class CellLeafHandlerGatherLeaves;

		 friend class FormulaLeafPool::CellLeafHandlerGatherLeaves;

		
	class CellsLeaves : public Aspose::Cells::Collections::IIndexedList
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 mCount;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> mRows;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::CellsSs::FormulaLeafPool::RowLeaves*>> mLeaves;
	public:

			Aspose::Cells::System::Int32 GetCount();
			Aspose::Cells::System::Int32 GetIndex(Aspose::Cells::System::Int32 position);
			void AddLeaf(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , Aspose::Cells::System::Int64 fcKey);
			void RemoveLeaf(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , Aspose::Cells::System::Int64 fcKey);
			void RemoveLeaf(Aspose::Cells::System::Int64 fcKey);
			intrusive_ptr<Aspose::Cells::CellsSs::FormulaLeafPool::RowLeaves> GetLeaves(Aspose::Cells::System::Int32 row);
			 CellsLeaves();
		public:
			virtual ~CellsLeaves();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

		
	class RowLeaves : public Aspose::Cells::Collections::IIndexedList
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 mCount;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int16>> mColumns;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> mFormulaCount;
			intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Int64>> mFormulaCells;
	public:

			Aspose::Cells::System::Int32 GetCount();
			Aspose::Cells::System::Int32 GetIndex(Aspose::Cells::System::Int32 position);
			void AddLeaf(Aspose::Cells::System::Int32 column , Aspose::Cells::System::Int64 fcKey);
			bool RemoveLeaf(Aspose::Cells::System::Int32 column , Aspose::Cells::System::Int64 fcKey);
			bool RemoveLeaf(Aspose::Cells::System::Int64 fcKey);
			void ProcessLeaves(Aspose::Cells::System::Int32 column , intrusive_ptr<Aspose::Cells::CellsSs::FormulaLeafPool::ICellLeafHandler> handler);
			 RowLeaves();
		public:
			virtual ~RowLeaves();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

		
	class RangeLeaves : public Aspose::Cells::Collections::IIndexedList
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 mCount;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> mRows;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> mRowLeaveCount;
			intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::CellsSs::FormulaLeafPool::FormulaRange*>> mLeaves;
	public:

			Aspose::Cells::System::Int32 GetCount();
			Aspose::Cells::System::Int32 GetIndex(Aspose::Cells::System::Int32 position);
			intrusive_ptr<Aspose::Cells::CellsSs::FormulaLeafPool::FormulaRange> AddLeaf(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int16 startColumn , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int16 endColumn , Aspose::Cells::System::Int64 fcKey);
			void RemoveLeaf(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int16 startColumn , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int16 endColumn , Aspose::Cells::System::Int64 fcKey);
			void RemoveRange(Aspose::Cells::System::Int32 startRow , intrusive_ptr<Aspose::Cells::CellsSs::FormulaLeafPool::FormulaRange> fr);
			void ProcessLeaves(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int16 column , intrusive_ptr<Aspose::Cells::CellsSs::FormulaLeafPool::ICellLeafHandler> handler);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> ToLeafList(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> list);
			 RangeLeaves();
		public:
			virtual ~RangeLeaves();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

		
	class FormulaRange : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::Int32 mEndRow;
			Aspose::Cells::System::Int16 mStartColumn;
			Aspose::Cells::System::Int16 mEndColumn;
			Aspose::Cells::System::Int32 mFormulaCount;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int64>> mRangeFormulas;
			 FormulaRange();
			 FormulaRange(Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int16 startColumn , Aspose::Cells::System::Int16 endColumn , Aspose::Cells::System::Int64 fcKey);
			void AddRef(Aspose::Cells::System::Int64 fcKey);
			bool RemoveLeaf(Aspose::Cells::System::Int64 fcKey);
			void ProcessLeaves(intrusive_ptr<Aspose::Cells::CellsSs::FormulaLeafPool::ICellLeafHandler> handler);
		public:
			virtual ~FormulaRange();
	};

		
	class FormulaPrecedent : public Aspose::Cells::System::Object
	{
	protected:

			 virtual Aspose::Cells::System::Int32 GetCellCount();
			 virtual Aspose::Cells::System::Int32 GetRangeCount();
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int64>> mCells;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::CellsSs::FormulaLeafPool::FormulaRangePrecedent*>> mRanges;
			 virtual void OnRemove(intrusive_ptr<Aspose::Cells::CellsSs::FormulaLeafPool> leafPool , intrusive_ptr<Aspose::Cells::FormulaCell> fc);
			 virtual bool GetPoolable();
			 virtual intrusive_ptr<Aspose::Cells::CellsSs::FormulaLeafPool::FormulaPrecedent> FinishPool();
			 virtual void AddCell(Aspose::Cells::System::Int64 key);
			 virtual void AddRange(Aspose::Cells::System::Int32 sheetIndex , Aspose::Cells::System::Int32 startRow , intrusive_ptr<Aspose::Cells::CellsSs::FormulaLeafPool::FormulaRange> fr);
			 FormulaPrecedent();
		public:
			virtual ~FormulaPrecedent();
	};

		
	class FormulaPrecedentBuffer : public Aspose::Cells::CellsSs::FormulaLeafPool::FormulaPrecedent
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 mCellCount;
			Aspose::Cells::System::Int32 mRangeCount;
	protected:

			 virtual Aspose::Cells::System::Int32 GetCellCount();
			 virtual Aspose::Cells::System::Int32 GetRangeCount();
	public:

			 virtual bool GetPoolable();
			 virtual intrusive_ptr<Aspose::Cells::CellsSs::FormulaLeafPool::FormulaPrecedent> FinishPool();
			 virtual void AddCell(Aspose::Cells::System::Int64 key);
			 virtual void AddRange(Aspose::Cells::System::Int32 sheetIndex , Aspose::Cells::System::Int32 startRow , intrusive_ptr<Aspose::Cells::CellsSs::FormulaLeafPool::FormulaRange> fr);
			 FormulaPrecedentBuffer();
		public:
			virtual ~FormulaPrecedentBuffer();
	};

		
	class FormulaRangePrecedent : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::Int32 mSheetIndex;
			Aspose::Cells::System::Int32 mRowIndex;
			intrusive_ptr<Aspose::Cells::CellsSs::FormulaLeafPool::FormulaRange> mRange;
			 FormulaRangePrecedent(Aspose::Cells::System::Int32 sheetIndex , Aspose::Cells::System::Int32 rowIndex , intrusive_ptr<Aspose::Cells::CellsSs::FormulaLeafPool::FormulaRange> fr);
			 FormulaRangePrecedent();
		public:
			virtual ~FormulaRangePrecedent();
	};

		
	class ICellLeafHandler : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			virtual void ProcessLeaf(Aspose::Cells::System::Int64 fcKey) = 0;
		public:
	};

		
	class CellLeafHandlerOnCellChanged : public Aspose::Cells::CellsSs::FormulaLeafPool::ICellLeafHandler
	{
	private:

			void Init_Vars();
			Aspose::Cells::WorksheetCollection* mWss;
	public:

			 CellLeafHandlerOnCellChanged(intrusive_ptr<Aspose::Cells::WorksheetCollection> wss);
			void ProcessLeaf(Aspose::Cells::System::Int64 fcKey);
			 CellLeafHandlerOnCellChanged();
		public:
			virtual ~CellLeafHandlerOnCellChanged();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

		
	class CellLeafHandlerGatherLeaves : public Aspose::Cells::CellsSs::FormulaLeafPool::ICellLeafHandler
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> al;
			Aspose::Cells::WorksheetCollection* mWss;
	public:

			 CellLeafHandlerGatherLeaves(intrusive_ptr<Aspose::Cells::WorksheetCollection> wss);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetResultList();
			void ProcessLeaf(Aspose::Cells::System::Int64 fcKey);
			 CellLeafHandlerGatherLeaves();
		public:
			virtual ~CellLeafHandlerGatherLeaves();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};
	private:

			void Init_Vars();
			Aspose::Cells::FormulaPool* mFormulaPool;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::CellsSs::FormulaLeafPool::FormulaPrecedent*>> mPrecedents;
			intrusive_ptr<Aspose::Cells::CellsSs::FormulaLeafPool::CellsLeaves> mCellsDependents;
			intrusive_ptr<Aspose::Cells::CellsSs::FormulaLeafPool::RangeLeaves> mRangeDependents;
			bool SyncForPool(Aspose::Cells::System::Int32 fcIndex);
	public:

			 FormulaLeafPool(intrusive_ptr<Aspose::Cells::FormulaPool> fp);
			void AddCellLeaf(Aspose::Cells::System::Int32 fcIndex , Aspose::Cells::System::Int32 leafSheet , Aspose::Cells::System::Int32 leafRow , Aspose::Cells::System::Int32 leafColumn);
			void AddRangeLeaf(Aspose::Cells::System::Int32 fcIndex , Aspose::Cells::System::Int32 leafSheet , Aspose::Cells::System::Int32 leafStartRow , Aspose::Cells::System::Int32 leafStartColumn , Aspose::Cells::System::Int32 leafEndRow , Aspose::Cells::System::Int32 leafEndColumn);
			void OnFormulaRemove(intrusive_ptr<Aspose::Cells::FormulaCell> fc);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetCellLeaves(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			void OnCellChange(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			 FormulaLeafPool();
		public:
			virtual ~FormulaLeafPool();
	};

}

}

}
