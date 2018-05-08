#ifndef _SYSTEM_COLLECTIONS_GENERIC_EQUALITYCOMPARER_H_
#define _SYSTEM_COLLECTIONS_GENERIC_EQUALITYCOMPARER_H_
#include <typeinfo.h>
#include "System/Object.h"
#include "System/Collections/IEqualityComparer.h"

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Collections {
				namespace Generic {

					template <class T>
					class ASPOSE_CELLS_API EqualityComparer : IEqualityComparer//, IEqualityComparer < T >
					{
					private:
						static volatile EqualityComparer<T>* defaultComparer;

						static EqualityComparer<T>* CreateComparer()
						{
							RuntimeType runtimeType = (RuntimeType)typeof(T);
							if (runtimeType == typeof(byte))
							{
								return (EqualityComparer<T>)NEW ByteEqualityComparer();
							}
							if (typeof(IEquatable<T>)->IsAssignableFrom(runtimeType))
							{
								return (EqualityComparer<T>)RuntimeTypeHandle->CreateInstanceForAnotherGenericParameter((RuntimeType)typeof(GenericEqualityComparer<int>), runtimeType);
							}
							if (runtimeType->IsGenericType && runtimeType->GetGenericTypeDefinition() == typeof(Nullable<>))
							{
								RuntimeType runtimeType2 = (RuntimeType)runtimeType->GetGenericArguments()[0];
								if (typeof(IEquatable<>)->MakeGenericType(NEW Type[]
								{
									runtimeType2
								})->IsAssignableFrom(runtimeType2))
								{
									return (EqualityComparer<T>)RuntimeTypeHandle->CreateInstanceForAnotherGenericParameter((RuntimeType)typeof(NullableEqualityComparer<int>), runtimeType2);
								}
							}
							if (runtimeType->IsEnum && Enum->GetUnderlyingType(runtimeType) == typeof(int))
							{
								return (EqualityComparer<T>)RuntimeTypeHandle->CreateInstanceForAnotherGenericParameter((RuntimeType)typeof(EnumEqualityComparer<int>), runtimeType);
							}
							return NEW ObjectEqualityComparer<T>();
							return NULL;
						}
					public:
						static EqualityComparer<T>* GetDefault()
						{
							EqualityComparer<T>* equalityComparer = EqualityComparer<T>::defaultComparer;
							if (equalityComparer == NULL)
							{
								equalityComparer = EqualityComparer<T>::CreateComparer();
								EqualityComparer<T>::defaultComparer = equalityComparer;
							}
							return equalityComparer;
						}




					};

				}
			}
		}
	}
}
#endif//_SYSTEM_COLLECTIONS_GENERIC_EQUALITYCOMPARER_H_