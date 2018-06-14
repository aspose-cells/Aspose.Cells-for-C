#ifndef _SYSTEM_Array2D_H_
#define _SYSTEM_Array2D_H_

#include <stdarg.h>
#include "System/Array.h"
#include "System/ArrayHelper.h"
#include "System/Array1D.h"
#include "System/Exception.h"

namespace Aspose {
	namespace Cells {
		namespace System {

			template <class T>
			class Array2D : public Array
			{
			public:
				virtual ~Array2D()
				{
					if (_p != NULL) {
						for (int i = 0; i < _len; i++) {
							if (_p[i] != NULL) {
								if (_p[i]->release_ref() <= 0) {
									delete _p[i];
								}
							}
						}
						delete[] _p;
					}
					_p = NULL;
					_len = 0;
					Array::_len1D = 0;
					Array::_len2D = 0;
					_cols = 0;
					Array::_crossFlag = false;
				}
				// such as: NEW Aspose::Cells::System::Array2D<Aspose::Cells::System::Int32>(size); cross array
				Array2D(int len) : _construct2d(false), _cols(0)
				{
					_crossFlag = true;
					Array::_Rank = 2;
					_p = NEW Array1D<T>*[len];
					_len = len;
					Array::_len1D = len;
					Array::_len2D = 0;
					memset(_p, 0, sizeof(Array1D<T>*) * _len);
				}
				Array2D(int row, int column)
				{
					Array::_Rank = 2;
					_p = NEW Array1D<T>*[row];
					_len = row;
					Array::_len1D = row;
					Array::_len2D = column;
					for (int i = 0; i < row; i++) {
						Array1D<T>* col = NEW Array1D<T>(column);
						col->add_ref();
						_p[i] = col;
					}
					_construct2d = true;
					_cols = column;
					//_crossFlag = false;
					//C#: int[,] m = new int[2,3];
					//m.length return 6.
					//For C++ we translate length -> Length()
					//so we shoule do following
					//Array::_len1D = row * column;///
				}
				Array2D(const Array2D& _Array2D)
				{
					if (!_Array2D._construct2d) {
						Array::_Rank = 2;
						_len = _Array2D._len;
						_cols = 0;
						Array::_len1D = _Array2D._len1D;
						Array::_len2D = _Array2D._len2D;
						_p = NEW Array1D<T>*[_len];
						memset(_p, 0, sizeof(Array1D<T>*) * _len);
						ArrayHelper::Copy(_Array2D._p, _p, _len);
						_construct2d = false;
						Array::_crossFlag = _Array2D._crossFlag;
					}
					else {
						Array::_Rank = 2;
						_len = _Array2D._len;
						_cols = _Array2D._cols;
						Array::_len1D = _Array2D._len1D;
						Array::_len2D = _Array2D._len2D;
						_p = NEW Array1D<T>*[_len];
						memset(_p, 0, sizeof(Array1D<T>*) * _len);
						for (int i = 0; i < _len; i++) {
							Array1D<T>* col = NEW Array1D<T>(_cols);
							col->add_ref();
							_p[i] = col;
							ArrayHelper::Copy(_Array2D._p[i], _p[i], _cols);
						}
						_construct2d = true;
						Array::_crossFlag = _Array2D._crossFlag;
					}
				}

				int GetLength()
				{
					return _len;
					///return _len*_cols;
				}

				Array1D<T>* At(int32_t index) {
					return _p[index];
				}

				T& At(int32_t index1, int32_t index2) {
					return _p[index1]->At(index2);
				}

				Array1D<T>** ArrayPoint() {
					return _p;
				}

				Array1D<T>* Value(int32_t index) {
					return _p[index];
				}
				void SetValue(intrusive_ptr<Array1D<T>> array, int32_t index)
				{
					if (_p[index] != NULL) {
						if (_p[index]->release_ref() <= 0) {
							delete _p[index];
						}
					}
					_p[index] = array.get();
					if (array != NULL) {
						Array::_len2D = array->GetLength();
						_p[index]->add_ref();
					}
				}

				intrusive_ptr<Array1D<T>> GetValue(int32_t index) {
					return _p[index];
				}
				T GetValue(int32_t index1, int32_t index2)
				{
					return _p[index1]->At(index2);
				}
				void SetValue(T val, int32_t index1, int32_t index2)
				{
					_p[index1]->SetValue(val, index2);
				}

				virtual int32_t GetLengthDim(int32_t dimension) {
					if (dimension == 0) {
						return _len;
					}
					else if (dimension == 1) {
						if (_len > 0 && _p != NULL && _p[0] != NULL)
						{
							intrusive_ptr<Array1D<T>> arr = _p[0];
							return arr->GetLength();
						}
						throw Exception("length must be great than 0.");
					}
					throw Exception("dimension must be 0 or 1");
				}

			private:
				Array1D<T>**	_p;

				int	_len;
				bool	_construct2d;
				int		_cols;
				//bool    _crossFlag;
			};

			template <class T>
			class Array2D<T*> : public Array
			{
			public:
				virtual ~Array2D()
				{
					if (_p != NULL) {
						for (int i = 0; i < _len; i++) {
							if (_p[i] != NULL) {
								if (_p[i]->release_ref() <= 0) {
									delete _p[i];
								}
							}
						}
						delete[] _p;
					}
					_p = NULL;
					_len = 0;
					Array::_len1D = 0;
					_cols = 0;
					Array::_crossFlag = false;
				}
				Array2D(int len) : _construct2d(false), _cols(0)
				{
					_crossFlag = true;
					Array::_Rank = 2;
					_p = NEW Array1D<T*>*[len];
					_len = len;
					Array::_len1D = len;
					Array::_len2D = 0;
					memset(_p, 0, sizeof(Array1D<T*>*) * _len);
				}
				Array2D(int row, int column)
				{
					Array::_Rank = 2;
					_p = NEW Array1D<T*>*[row];
					_len = row;
					Array::_len1D = row;
					Array::_len2D = column;
					for (int i = 0; i < row; i++) {
						Array1D<T*>* col = NEW Array1D<T*>(column);
						col->add_ref();
						_p[i] = col;
					}
					_construct2d = true;
					_cols = column;
					//_crossFlag = false;
					//C#: int[,] m = new int[2,3];
					//m.length return 6.
					//For C++ we translate length -> Length()
					//so we shoule do following
					//Array::_len1D = row * column;///
				}
				Array2D(const Array2D& _Array2D)
				{
					if (!_Array2D._construct2d) {
						Array::_Rank = 2;
						_len = _Array2D._len;
						_cols = 0;
						Array::_len1D = _Array2D._len1D;
						Array::_len2D = _Array2D._len2D;
						_p = NEW Array1D<T*>*[_len];
						memset(_p, 0, sizeof(Array1D<T*>*) * _len);
						ArrayHelper::Copy(_Array2D._p, _p, _len);
						_construct2d = false;
						Array::_crossFlag = _Array2D._crossFlag;
					}
					else {
						Array::_Rank = 2;
						_len = _Array2D._len;
						_cols = _Array2D._cols;
						Array::_len1D = _Array2D._len1D;
						Array::_len2D = _Array2D._len2D;
						_p = NEW Array1D<T*>*[_len];
						memset(_p, 0, sizeof(Array1D<T*>*) * _len);
						for (int i = 0; i < _len; i++) {
							Array1D<T*>* col = NEW Array1D<T*>(_cols);
							col->add_ref();
							_p[i] = col;
							ArrayHelper::Copy(_Array2D._p[i], _p[i], _cols);
						}
						_construct2d = true;
						Array::_crossFlag = _Array2D._crossFlag;
					}
				}

				int GetLength()
				{
					return _len;
					///return _len*_cols;
				}

				Array1D<T*>* At(int32_t index) {
					return _p[index];
				}

				T* At(int32_t index1, int32_t index2) {
					return _p[index1]->At(index2);
				}

				Array1D<T*>** ArrayPoint() {
					return _p;
				}

				Array1D<T*>* Value(int32_t index) {
					return _p[index];
				}
				void SetValue(intrusive_ptr<Array1D<T*>> array, int32_t index)
				{
					if (_p[index] != NULL) {
						if (_p[index]->release_ref() <= 0) {
							delete _p[index];
						}
					}
					_p[index] = array.get();
					if (array != NULL) {
						Array::_len2D = array->GetLength();
						_p[index]->add_ref();
					}
				}

				intrusive_ptr<Array1D<T*>> GetValue(int32_t index) {
					return _p[index];
				}
				intrusive_ptr<T> GetValue(int32_t index1, int32_t index2)
				{
					return _p[index1]->At(index2);
				}
	
				void SetValue(intrusive_ptr<T> obj, int32_t index1, int32_t index2)
				{
					_p[index1]->SetValue(obj, index2);
				}

				virtual int32_t GetLengthDim(int32_t dimension) {
					if (dimension == 0) {
						return _len;
					}
					else if (dimension == 1) {
						if (_len > 0 && _p != NULL && _p[0] != NULL)
						{
							intrusive_ptr<Array1D<T*>> arr = _p[0];
							return arr->GetLength();
						}
						throw Exception("length must be great than 0.");
					}
					throw Exception("dimension must be 0 or 1");
				}

			private:
				Array1D<T*>**	_p;

				int	_len;
				bool	_construct2d;
				int		_cols;
			};

		}
	}
}	// namespace System

#endif	// _SYSTEM_Array2D_H_
