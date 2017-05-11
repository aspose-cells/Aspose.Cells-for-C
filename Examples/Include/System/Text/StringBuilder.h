#ifndef _SYSTEM_TEXT_STRINGBUILDER_H_
#define _SYSTEM_TEXT_STRINGBUILDER_H_

#include "System/Object.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#include "System/Char.h"
#include "System/String.h"
#include "System/TypeDefBString.h"

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Text {

				class ASPOSE_CELLS_API StringBuilder : public Object
				{
				private:
					static void ThreadSafeCopy(Char* sourcePtr, intrusive_ptr<CString> destination, int destinationIndex, int count);
					static void ThreadSafeCopy(intrusive_ptr<CString> source, int sourceIndex, intrusive_ptr<CString> destination, int destinationIndex, int count);
					void ExpandByABlock(int minBlockCharCount);
					StringBuilder(intrusive_ptr<StringBuilder> from);
					StringBuilder(int size, int maxCapacity, intrusive_ptr<StringBuilder> previousBlock);
					intrusive_ptr<StringBuilder> FindChunkForIndex(int index);
					void AppendHelper(StringPtr value);
					void Insert(int index, Char* value, int valueCount);
					void MakeRoom(int index, int count, intrusive_ptr<StringBuilder>& chunk, int& indexInChunk, bool doneMoveFollowingChars);
					void ReplaceInPlaceAtChunk(intrusive_ptr<StringBuilder>& chunk, int& indexInChunk, Char* value, int count);
					intrusive_ptr<StringBuilder> Next(intrusive_ptr<StringBuilder> chunk);
					bool StartsWith(intrusive_ptr<StringBuilder> chunk, int indexInChunk, int count, StringPtr value);
					void ReplaceAllInChunk(intrusive_ptr<Array1D<int>> replacements, int replacementsCount, intrusive_ptr<StringBuilder> sourceChunk, int removeCount, StringPtr value);
					void Remove(int startIndex, int count, intrusive_ptr<StringBuilder>& chunk, int& indexInChunk);
				protected:
					static const int DefaultCapacity = 16;
					static const int MaxChunkSize = 8000;
					intrusive_ptr<CString> m_ChunkChars;
					intrusive_ptr<StringBuilder> m_ChunkPrevious;
					int m_ChunkLength;
					int m_ChunkOffset;
					int m_MaxCapacity;

					void InitVars();
				public:
					StringBuilder();
					StringBuilder(Int32 capacity);
					StringBuilder(StringPtr value);
					StringBuilder(StringPtr value, Int32 capacity);
					StringBuilder(StringPtr value, Int32 startIndex, Int32 length, Int32 capacity);
					StringBuilder(Int32 capacity, Int32 maxCapacity);
					virtual ~StringBuilder();

				public:
					Int32 GetLength();
					void SetLength(Int32 value);
					Int32 GetMaxCapacity();
					Int32 GetCapacity();
					void SetCapacity(Int32 value);
					intrusive_ptr<StringBuilder> Append(intrusive_ptr<Array1D<Char>> value);
					intrusive_ptr<StringBuilder> Append(intrusive_ptr<Array1D<Char>> value, Int32 startIndex, Int32 charCount);
					intrusive_ptr<StringBuilder> Append(StringPtr value);
					intrusive_ptr<StringBuilder> Append(bool value);
					intrusive_ptr<StringBuilder> Append(Byte value);
					intrusive_ptr<StringBuilder> Append(Char value);
					intrusive_ptr<StringBuilder> Append(Char value, int repeatCount);
					intrusive_ptr<StringBuilder> Append(Char* value, int valueCount);
					intrusive_ptr<StringBuilder> Append(char value);
					intrusive_ptr<StringBuilder> Append(SByte value);
					intrusive_ptr<StringBuilder> Append(Int16 value);
					//intrusive_ptr<StringBuilder> Append(UInt16 value);
					intrusive_ptr<StringBuilder> Append(Int32 value);
					intrusive_ptr<StringBuilder> Append(UInt32 value);
					intrusive_ptr<StringBuilder> Append(Int64 value);
					intrusive_ptr<StringBuilder> Append(UInt64 value);
					intrusive_ptr<StringBuilder> Append(Double value);
					intrusive_ptr<StringBuilder> Append(Single value);
					intrusive_ptr<StringBuilder> Append(ObjectPtr value);
					intrusive_ptr<StringBuilder> Append(StringPtr value, Int32 startIndex, Int32 count);

					Char CharAt(Int32 index);
					void setCharAt(Int32 index, Char value);
					StringPtr ToString(Int32 startIndex, Int32 length);
					StringPtr ToString();

					intrusive_ptr<StringBuilder> Insert(Int32 index, bool value);
					intrusive_ptr<StringBuilder> Insert(Int32 index, Byte value);
					intrusive_ptr<StringBuilder> Insert(Int32 index, SByte value);
					intrusive_ptr<StringBuilder> Insert(Int32 index, Int16 value);
					intrusive_ptr<StringBuilder> Insert(Int32 index, Char value);
					intrusive_ptr<StringBuilder> Insert(Int32 index, Int32 value);
					intrusive_ptr<StringBuilder> Insert(Int32 index, UInt32 value);
					intrusive_ptr<StringBuilder> Insert(Int32 index, Int64 value);
					intrusive_ptr<StringBuilder> Insert(Int32 index, UInt64 value);
					intrusive_ptr<StringBuilder> Insert(Int32 index, Double value);
					intrusive_ptr<StringBuilder> Insert(Int32 index, Single value);
					intrusive_ptr<StringBuilder> Insert(Int32 index, StringPtr value);
					intrusive_ptr<StringBuilder> Insert(Int32 index, StringPtr value, Int32 count);
					intrusive_ptr<StringBuilder> Insert(Int32 index, intrusive_ptr<Array1D<Char>> value);
					intrusive_ptr<StringBuilder> Insert(Int32 index, intrusive_ptr<Array1D<Char>> value, Int32 startIndex, Int32 charCount);
					intrusive_ptr<StringBuilder> Insert(Int32 index, ObjectPtr value);

					intrusive_ptr<StringBuilder> Replace(Char oldChar, Char newChar);
					intrusive_ptr<StringBuilder> Replace(Char oldChar, Char newChar, int startIndex, int count);
					intrusive_ptr<StringBuilder> Replace(StringPtr oldValue, StringPtr newValue);
					intrusive_ptr<StringBuilder> Replace(StringPtr oldValue, StringPtr newValue, int startIndex, int count);
					intrusive_ptr<StringBuilder> Remove(Int32 startIndex, Int32 length);
					intrusive_ptr<StringBuilder> Clear();
					
				};

				typedef intrusive_ptr<StringBuilder> StringBuilderPtr;

			}	// namespace Text
		}	// namespace System
	}
}
#endif	// _SYSTEM_TEXT_STRINGBUILDER_H_