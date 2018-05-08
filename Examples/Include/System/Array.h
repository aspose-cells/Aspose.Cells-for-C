#ifndef _SYSTEM_ARRAY_H_
#define _SYSTEM_ARRAY_H_

#include "System/Object.h"
//#include "System/ICloneable.h"
#include "System/Collections/ICollection.h"
#include "System/Collections/Sorter.h"
#include "System/Collections/IComparer.h"

using namespace Aspose::Cells::System::Collections;

namespace Aspose {
	namespace Cells {
		namespace System {

			class ASPOSE_CELLS_API Array : public Object, public ICollection 
			{
			public:
				virtual ~Array() 
				{

				}

				int32_t Length()
				{ 
					// 1.NEW Aspose::Cells::System::Array2D<Aspose::Cells::System::Int32>(size);->cross array 
					// 2.void SetValue(intrusive_ptr<Array1D<T>> array, int32_t index) will change _len2D ->  _len2D != 0 
					// but C# still return _len1D
					// CellsJav40723();
					if (_Rank == 2 && _len2D != 0 && _crossFlag == false)
                    	return _len1D * _len2D; 
					return _len1D; 
				};
				int32_t GetRank() 
				{ 
					return _Rank; 
				};
				int32_t GetUpperBound(int32_t dimension) 
				{ 
					switch (dimension)
					{
					case 0:
						return _len1D - 1;
					case 1:
						return _len2D - 1;
					case 2:
						return _len3D - 1;
					default:
						throw;
					}
				};
				
				virtual int GetCount() { return this->Length(); };
				virtual bool IsSynchronized();
				virtual ObjectPtr GetSyncRoot();
				virtual void CopyTo(intrusive_ptr<Array> array0, int32_t index);
				virtual void CopyTo(intrusive_ptr<Array> array0, int32_t index, int32_t length);
				virtual IEnumeratorPtr GetEnumerator();
				ObjectPtr GetValue_Array(int index);
				ObjectPtr GetValue_Array(int index1, int index2);
				void SetValue_Array(ObjectPtr value, int index);
				void SetValue_Array(ObjectPtr value, int index1, int index2);
				virtual int32_t GetLengthDim(int32_t dimension) = 0;

				virtual void add_ref() {
					++ref_count_;
				}

				virtual int release_ref() {
					return --ref_count_;
				}

			protected:
				Array()
				{
					_len1D = 0;
					_len2D = 0;
					_len3D = 0;
					_crossFlag = false;
				}

				int	_len1D;
				int	_len2D;
				int	_len3D;
				int _Rank;
				bool _crossFlag;

			private:


			};
		}
	}
}	// namespace System

#endif	// _SYSTEM_ARRAY_H_