#ifndef _SYSTEM_ARRAYHELPER_H_
#define _SYSTEM_ARRAYHELPER_H_

#include "System/Object.h"
#include "System/Collections/Sorter.h"
#include "System/Collections/IComparer.h"
#include "System/ArgumentOutOfRangeException.h"
#include "System/ArgumentNullException.h"

using namespace Aspose::Cells::System::Collections;

namespace Aspose {
	namespace Cells {
		namespace System {
			template <class T>
			class Array1D;

			template <class T>
			class Array2D;

			class Array;
			
			class ASPOSE_CELLS_API ArrayHelper : public Object
			{
			public:
				///////////////////////////////////////////////////////////////
				//(1) Copy
				///////////////////////////////////////////////////////////////
				//1, 2
				template <class T>
				static void Copy(T* sourceArray, T* destinationArray, int length) {
					memmove(destinationArray, sourceArray, sizeof(T) * length);
				}

				//2
				template <class T>
				static void Copy(T* sourceArray, int sourceArrayIndex, T* destinationArray, int destinationArrayIndex, int length) {
					memmove(destinationArray + destinationArrayIndex, sourceArray + sourceArrayIndex, sizeof(T) * length);
				}

				//3, 4
				template <class T>
				static void Copy(Array1D<T>* sourceArray, Array1D<T>* destinationArray, int length) {
					memmove(destinationArray->ArrayPoint(), sourceArray->ArrayPoint(), sizeof(T) * length);
				}
				template <class T>
				static void Copy(intrusive_ptr<Array1D<T>> sourceArray, intrusive_ptr<Array1D<T>> destinationArray, int length) {
					memmove(destinationArray->ArrayPoint(), sourceArray->ArrayPoint(), sizeof(T) * length);
				}
				//4
				template <class T>
				static void Copy(Array1D<T>* sourceArray, int sourceArrayIndex, Array1D<T>* destinationArray, int destinationArrayIndex, int length) {
					memmove(destinationArray->ArrayPoint() + destinationArrayIndex, sourceArray->ArrayPoint() + sourceArrayIndex, sizeof(T) * length);
				}
				template <class T>
				static void Copy(intrusive_ptr<Array1D<T>> sourceArray, int sourceArrayIndex, intrusive_ptr<Array1D<T>> destinationArray, int destinationArrayIndex, int length)
				{
					memmove(destinationArray->ArrayPoint() + destinationArrayIndex, sourceArray->ArrayPoint() + sourceArrayIndex, sizeof(T) * length);
				}

				//5, as 6
				// commented by nick
				//template <class T>
				//static void Copy(Array1D<intrusive_ptr<T>>* sourceArray, Array1D<intrusive_ptr<T>>* destinationArray, int length) {
				//	for (int i = 0; i < length; i++) {
				//		destinationArray->At(i) = sourceArray->At(i);
				//	}
				//}
				//template <class T>
				//static void Copy(intrusive_ptr<Array1D<intrusive_ptr<T>>> sourceArray, intrusive_ptr<Array1D<intrusive_ptr<T>>> destinationArray, int length) {
				//	for (int i = 0; i < length; i++) {
				//		destinationArray->At(i) = sourceArray->At(i);
				//	}
				//}
				//6
				//template <class T>
				//static void Copy(Array1D<intrusive_ptr<T>>* sourceArray, int sourceArrayIndex, Array1D<intrusive_ptr<T>>* destinationArray, int destinationArrayIndex, int length)
				//{
				//	for (int n = 0; n < length; n++)
				//	{
				//		destinationArray->At(n + destinationArrayIndex) = sourceArray->At(n + sourceArrayIndex);
				//		sourceArray->At(n + sourceArrayIndex) = NULL;

				//	}
				//}
				//template <class T>
				//static void Copy(intrusive_ptr<Array1D<intrusive_ptr<T>>> sourceArray, int sourceArrayIndex, intrusive_ptr<Array1D<intrusive_ptr<T>>> destinationArray, int destinationArrayIndex, int length)
				//{
				//	for (int n = 0; n < length; n++)
				//	{
				//		destinationArray->At(n + destinationArrayIndex) = sourceArray->At(n + sourceArrayIndex);
				//		sourceArray->At(n + sourceArrayIndex) = NULL;

				//	}
				//}

				//7, not template
				static void Copy(Array* sourceArray, Array* destinationArray, int length);
				static void Copy(intrusive_ptr<Array> sourceArray, intrusive_ptr<Array> destinationArray, int length);

				template <class T>
				static void Copy(intrusive_ptr<Array1D<T*>> sourceArray, intrusive_ptr<Array1D<T*>> destinationArray, int length) {
					T** src = sourceArray->ArrayPoint();
					T** dst = destinationArray->ArrayPoint();
					Copy(src, dst, length);
				}

				template <class T>
				static void Copy(Array1D<T*>* sourceArray, Array1D<T*>* destinationArray, int length) {
					T** src = sourceArray->ArrayPoint();
					T** dst = destinationArray->ArrayPoint();
					Copy(src, dst, length);
				}

				template <class T>
				static void Copy(T** sourceArray, T** destinationArray, int length) {
					T** src = sourceArray;
					T** dst = destinationArray;
					for (int i = 0; i < length; i++, src++, dst++) {
						if (*dst != NULL) {
							if ((*dst)->release_ref() <= 0) {
								delete *dst;
							}
						}
						*dst = *src;
						if (*src != NULL) {
							(*src)->add_ref();
						}
					}
				}

				template <class T>
				static void Copy(intrusive_ptr<Array1D<T*>> sourceArray, int sourceArrayIndex, intrusive_ptr<Array1D<T*>> destinationArray, int destinationArrayIndex, int length) {
					T** src = sourceArray->ArrayPoint();
					T** dst = destinationArray->ArrayPoint();
					Copy(src, sourceArrayIndex, dst, destinationArrayIndex, length);
				}

				template <class T>
				static void Copy(Array1D<T*>* sourceArray, int sourceArrayIndex, Array1D<T*>* destinationArray, int destinationArrayIndex, int length) {
					T** src = sourceArray->ArrayPoint();
					T** dst = destinationArray->ArrayPoint();
					Copy(src, sourceArrayIndex, dst, destinationArrayIndex, length);
				}

				template <class T>
				static void Copy(T** sourceArray, int sourceArrayIndex, T** destinationArray, int destinationArrayIndex, int length) {
					if (sourceArray == destinationArray) {
						T** src = sourceArray + sourceArrayIndex;
						T** dst = destinationArray + destinationArrayIndex;
						for (int i = 0; i < length; i++, src++) {
							if (*src != NULL) {
								(*src)->add_ref();
							}
						}
						for (int i = 0; i < length; i++, dst++) {
							if (*dst != NULL) {
								if ((*dst)->release_ref() <= 0) {
									delete *dst;
								}
							}
						}
						memmove(destinationArray + destinationArrayIndex, sourceArray + sourceArrayIndex, sizeof(T*) * length);
					}
					else {
						T** src = sourceArray + sourceArrayIndex;
						T** dst = destinationArray + destinationArrayIndex;
						for (int i = 0; i < length; i++, src++, dst++) {
							if (*dst != NULL) {
								if ((*dst)->release_ref() <= 0) {
									delete *dst;
								}
							}
							*dst = *src;
							if (*src != NULL) {
								(*src)->add_ref();
							}
						}
					}
				}

				//Array2D
				//Array2D<T>
				template <class T>
				static void Copy(intrusive_ptr<Array2D<T>> sourceArray, intrusive_ptr<Array2D<T>> destinationArray, int length)
				{
					Copy(sourceArray, 0, destinationArray, 0, length);
				}
				template <class T>
				static void Copy(intrusive_ptr<Array2D<T>> sourceArray, int sourceArrayIndex, intrusive_ptr<Array2D<T>> destinationArray, int destinationArrayIndex, int length)
				{
					Array1D<T>** src1d = sourceArray->ArrayPoint();
					Array1D<T>** dst1d = destinationArray->ArrayPoint();
					ArrayHelper::Copy(src1d, sourceArrayIndex, dst1d, destinationArrayIndex, length);
				}
				//Array2D<T*>
				template <class T>
				static void Copy(intrusive_ptr<Array2D<T*>> sourceArray, intrusive_ptr<Array2D<T*>> destinationArray, int length)
				{
					Copy(sourceArray, 0, destinationArray, 0, length);
				}
				template <class T>
				static void Copy(intrusive_ptr<Array2D<T*>> sourceArray, int sourceArrayIndex, intrusive_ptr<Array2D<T*>> destinationArray, int destinationArrayIndex, int length)
				{
					Array1D<T*>** src1d = sourceArray->ArrayPoint();
					Array1D<T*>** dst1d = destinationArray->ArrayPoint();
					ArrayHelper::Copy(src1d, sourceArrayIndex, dst1d, destinationArrayIndex, length);
				}
				///////////////////////////////////////////////////////////////
				//end of Copy 
				///////////////////////////////////////////////////////////////

				///////// array1d self move for ArrayList and SortedList  ////////////////////
				template <class T>
				static void Move(T** array, int sourceArrayIndex, int destinationArrayIndex, int length) {
					memmove(array + destinationArrayIndex, array + sourceArrayIndex, sizeof(T*) * length);
					if (destinationArrayIndex > sourceArrayIndex) {
						memset(array + sourceArrayIndex, 0, sizeof(T*) * (destinationArrayIndex - sourceArrayIndex));
					}
					else {
						memset(array + destinationArrayIndex + length, 0, sizeof(T*) * (sourceArrayIndex - destinationArrayIndex));
					}
				}


				///////////////////////////////////////////////////////////////
				//(2) Clear
				///////////////////////////////////////////////////////////////
				//1
				template <class T>
				static void Clear(T* array, int index, int length) 
				{
					T* p = array;
					p = p + index;
					memset(p, 0, sizeof(T) * length);
				}
				//2
				template <class T>
				static void Clear(Array1D<T>* array, int index, int length) 
				{
					T* p = array->ArrayPoint();
					p = p + index;
					memset(p, 0, sizeof(T) * length);
				}
				template <class T>
				static void Clear(intrusive_ptr<Array1D<T>> array, int index, int length)
				{
					T* p = array->ArrayPoint();
					p = p + index;
					memset(p, 0, sizeof(T) * length);
				}
				//3
				// commented by nick
				//template <class T>
				//static void Clear(Array1D<intrusive_ptr<T>>* array, int index, int length)
				//{
				//	for (int i = index; i < length; i++) {
				//		array->At(i) = NULL;
				//	}
				//}
				//template <class T>
				//static void Clear(intrusive_ptr<Array1D<intrusive_ptr<T>>> array, int index, int length)
				//{
				//	for (int i = index; i < length; i++) {
				//		array->At(i) = NULL;
				//	}
				//}

				template <class T>
				static void Clear(Array1D<T*>* array, int index, int length)
				{
					T** p = array->ArrayPoint();
					Clear(p, index, length);
				}
				template <class T>
				static void Clear(T** array, int index, int length)
				{
					for (int i = index; i < length; i++) {
						T* p = array[index + i];
						if (p != NULL) {
							if (p->release_ref() <= 0) {
								delete p;
							}
						}
						array[index + i] = NULL;
					}
				}
				///////////////////////////////////////////////////////////////
				//end of Clear 
				///////////////////////////////////////////////////////////////

				///////////////////////////////////////////////////////////////
				//(3) IndexOf
				///////////////////////////////////////////////////////////////
				//1
				template <class T, class C>
				static int IndexOf(T* array, const C& value, int startIndex, int count) {
					int num = startIndex + count;
					for (int i = startIndex; i < num; i++) {
						if (Equals2(array[i], value)) {
							return i;
						}
					}
					return -1;
				}

				//2
				template <class T, class C>
				static int IndexOf(Array1D<T>* array, const C& value, int startIndex, int count) {
					int num = startIndex + count;
					for (int i = startIndex; i < num; i++) {
						if (Equals2(array->GetValue(i), value)) {
							return i;
						}
					}
					return -1;
				}
				template <class T, class C>
				static int IndexOf(intrusive_ptr<Array1D<T>> array, const C& value, int startIndex, int count) {
					int num = startIndex + count;
					for (int i = startIndex; i < num; i++) {
						if (Equals2(array->At(i), value)) {
							return i;
						}
					}
					return -1;
				}
				template <class T, class C>
				static int IndexOf(Array1D<T*>* array, intrusive_ptr<C> value, int startIndex, int count) {
					int num = startIndex + count;
					for (int i = startIndex; i < num; i++) {
						if (Equals(array->GetValue(i), value)) {
							return i;
						}
					}
					return -1;
				}
				template <class T, class C>
				static int IndexOf(intrusive_ptr<Array1D<T*>> array, intrusive_ptr<C> value, int startIndex, int count) {
					int num = startIndex + count;
					for (int i = startIndex; i < num; i++) {
						if (Equals(array->GetValue(i), value)) {
							return i;
						}
					}
					return -1;
				}
				///////////////////////////////////////////////////////////////
				//end of IndexOf 
				///////////////////////////////////////////////////////////////

				///////////////////////////////////////////////////////////////
				//(4) Sort
				///////////////////////////////////////////////////////////////
				//1
				template <class T>
				static void Sort(T* array, int index, int length) {
					Sorter::QuickSort2(array, index, index + length - 1);
				}
				template <class T>
				static void Sort(T* array, int index, int length, intrusive_ptr<IComparer> comparer)
				{
					Sorter::QuickSort(array, index, index + length - 1, comparer);
				}
				//2
				template <class T>
				static void Sort(Array1D<T>* array0) {
					ArrayHelper::Sort(array0, 0, array0->GetLength());
				}
				template <class T>
				static void Sort(Array1D<T>* array0, int index, int length) {
					Sorter::QuickSort2(array0->ArrayPoint(), index, index + length - 1);
				}
				template <class T>
				static void Sort(Array1D<T>* array0, int index, int length, intrusive_ptr<IComparer> comparer) {
					Sorter::QuickSort(array0->ArrayPoint(), index, index + length - 1, comparer);
				}
				template <class T>
				static void Sort(Array1D<T*>* array0, int index, int length, intrusive_ptr<IComparer> comparer) {
					Sorter::QuickSort(array0->ArrayPoint(), index, index + length - 1, comparer);
				}
				//3
				template <class T>
				static void Sort(intrusive_ptr<Array1D<T>> array0) {
					ArrayHelper::Sort(array0, 0, array0->GetLength());
				}
				template <class T>
				static void Sort(intrusive_ptr<Array1D<T>> array0, int index, int length) {
					Sorter::QuickSort2(array0->ArrayPoint(), index, index + length - 1);
				}
				template <class T>
				static void Sort(intrusive_ptr<Array1D<T>> array0, intrusive_ptr<IComparer> comparer) {
					Sorter::QuickSort(array0->ArrayPoint(), 0, array0->GetLength()-1, comparer);
				}
				template <class T>
				static void Sort(intrusive_ptr<Array1D<T>> array0, int index, int length, intrusive_ptr<IComparer> comparer) {
					Sorter::QuickSort(array0->ArrayPoint(), index, index + length - 1, comparer);
				}
				///////////////////////////////////////////////////////////////
				//end of Sort 
				///////////////////////////////////////////////////////////////

				///////////////////////////////////////////////////////////////
				//(5) BinarySearch
				///////////////////////////////////////////////////////////////
				//static int BinarySearch(Array* array, Object* value);
				//static int BinarySearch(Array* array, int index, int length, Object* value);
				//1
				static int BinarySearch(Array* array, ObjectPtr value, intrusive_ptr<IComparer> comparer);
				static int BinarySearch(Array* array, int index, int length, ObjectPtr value, intrusive_ptr<IComparer> comparer);
				//2
				static int BinarySearch(intrusive_ptr<Array> array, ObjectPtr value, intrusive_ptr<IComparer> comparer);
				static int BinarySearch(intrusive_ptr<Array> array, int index, int length, ObjectPtr value, intrusive_ptr<IComparer> comparer);
				//3
				template <class T>
				static int BinarySearch(Array1D<T>* array, T value)
				{
					if (array == NULL)
					{
						throw NEW ArgumentNullException("array");
					}
					return ArrayHelper::BinarySearch(array, 0, array->Length(), value);
				}
				template <class T>
				static int BinarySearch(Array1D<T>* array, int index, int length, T value)
				{
					if (array == NULL)
					{
						throw NEW ArgumentNullException("array");
					}
					if (index < 0 || length < 0)
					{
						throw NEW ArgumentOutOfRangeException((index < 0) ? "index" : "length", "ArgumentOutOfRange_NeedNonNegNum");
					}
					if (array->Length() - index < length)
					{
						throw NEW ArgumentException("Argument_InvalidOffLen");
					}
					intrusive_ptr<Array1D<T>> array2 = array;
					////////////////////////////////////////////////
					for (int i = 0; i < length; i++)
					{
						T num2 = array2->At(index + i);
						if (num2 == value)
						{
							return index + i;
						}
						if (num2 > value)
						{
							return ~(index + i);
						}
						else
						{
							continue;
						}
					}
					return ~(index + length);
				}
				//4
				template <class T>
				static int BinarySearch(intrusive_ptr<Array1D<T>> array, T value)
				{
					if (array == NULL)
					{
						throw NEW ArgumentNullException("array");
					}
					return ArrayHelper::BinarySearch(array, 0, array->Length(), value);
				}
				template <class T>
				static int BinarySearch(intrusive_ptr<Array1D<T>> array, int index, int length, T value)
				{
					if (array == NULL)
					{
						throw NEW ArgumentNullException("array");
					}
					if (index < 0 || length < 0)
					{
						throw NEW ArgumentOutOfRangeException((index < 0) ? "index" : "length", "ArgumentOutOfRange_NeedNonNegNum");
					}
					if (array->Length() - index < length)
					{
						throw NEW ArgumentException("Argument_InvalidOffLen");
					}
					intrusive_ptr<Array1D<T>> array2 = array;
					////////////////////////////////////////////////
					for (int i = 0; i < length; i++)
					{
						T num2 = array2->At(index + i);
						if (num2 == value)
						{
							return index + i;
						}
						if (num2 > value)
						{
							return ~(index + i);
						}
						else
						{
							continue;
						}
					}
					return ~(index + length);
				}
				///////////////////////////////////////////////////////////////
				//end of BinarySearch 
				///////////////////////////////////////////////////////////////

				///////////////////////////////////////////////////////////////
				//(6) Reverse
				///////////////////////////////////////////////////////////////
				static void Reverse(intrusive_ptr<Array> array0);
				static void Reverse(intrusive_ptr<Array> array0, int index, int length);
				///////////////////////////////////////////////////////////////
				//end of Reverse 
				///////////////////////////////////////////////////////////////


				static int GetMedian(int low, int hi) {
					return low + ((hi - low) >> 1);
				}
				template <class T, class C>
				static bool Equals2(T* objA, C* objB)
				{
					return Equals(objA, objB);
				}
				template <class T, class C>
				static bool Equals2(T v1, C v2) {
					if (typeid(T) == typeid(C))
					{
						return v1 == v2;
					}
					return false;
				}
				
			};
		}
	}
}	// namespace System

#endif//_SYSTEM_ARRAYHELPER_H_