#ifndef _SYSTEM_COLLECTIONS_SORTER_H_
#define _SYSTEM_COLLECTIONS_SORTER_H_

#include "System/Collections/IComparer.h"
#include "System/DateTime.h"
#include "System/Boxing.h"

using namespace Aspose::Cells::System;

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Collections {

				class Sorter
				{
				public:
					template <class T>
					static void QuickSort(T* array, int left, int right, intrusive_ptr<IComparer> comparer)
					{
						if (left < 0 || right < 0)
						{
							return;
						}
						do
						{
							int num = left;
							int num2 = right;
							int median = GetMedian(num, num2);
							SwapIfGreaterWithItems(array, num, median, comparer);
							SwapIfGreaterWithItems(array, num, num2, comparer);
							SwapIfGreaterWithItems(array, median, num2, comparer);
							T obj = array[median];
							do {
								while (comparer->Compare(array[num], obj) < 0) {
									num++;
								}
								while (comparer->Compare(obj, array[num2]) < 0) {
									num2--;
								}

								if (num > num2) {
									break;
								}
								if (num < num2) {
									T obj2 = array[num];
									array[num] = array[num2];
									array[num2] = obj2;
								}
								num++;
								num2--;
							} while (num <= num2);

							if (num2 - left <= right - num) {
								if (left < num2) {
									QuickSort(array, left, num2, comparer);
								}
								left = num;
							}
							else {
								if (num < right) {
									QuickSort(array, num, right, comparer);
								}
								right = num2;
							}
						} while (left < right);
					}

					template <class T>
					static void QuickSort2(T* array, int left, int right)
					{
						if (left < 0 || right < 0)
						{
							return;
						}
						do
						{
							int num = left;
							int num2 = right;
							int median = GetMedian(num, num2);
							SwapIfGreaterWithItems2(array, num, median);
							SwapIfGreaterWithItems2(array, num, num2);
							SwapIfGreaterWithItems2(array, median, num2);
							T obj = array[median];
							do {
								while (array[num] < obj) {
									num++;
								}
								while (obj < array[num2]) {
									num2--;
								}

								if (num > num2) {
									break;
								}
								if (num < num2) {
									T value = array[num];
									array[num] = array[num2];
									array[num2] = value;
								}
								num++;
								num2--;
							} while (num <= num2);

							if (num2 - left <= right - num) {
								if (left < num2) {
									QuickSort2(array, left, num2);
								}
								left = num;
							}
							else {
								if (num < right) {
									QuickSort2(array, num, right);
								}
								right = num2;
							}
						} while (left < right);
					}

				private:
					template <class T>
					static void SwapIfGreaterWithItems(T* array, int a, int b, intrusive_ptr<IComparer> comparer)
					{
						if (a != b) {
							if (comparer->Compare(array[a], array[b]) > 0) {
								T obj = array[a];
								array[a] = array[b];
								array[b] = obj;
							}
						}
					}

					template <class T>
					static void SwapIfGreaterWithItems2(T* array, int a, int b)
					{
						if (a != b) {
							if (array[a] > array[b]) {
								T value = array[a];
								array[a] = array[b];
								array[b] = value;
							}
						}
					}

					static int GetMedian(int low, int high) {
						return low + ((high - low) >> 1);
					}

				};

			}	// namespace Collections
		}	// namespace System
	}
}
#endif	// _SYSTEM_COLLECTIONS_SORTER_H_
