// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DATETIMEGROUPITEM_H
#define ASPOSE_CELLS_DATETIMEGROUPITEM_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/IObject.h"
#include "Aspose.Cells/Date.h"

#include "Aspose.Cells/DateTimeGroupingType.h"

namespace Aspose { namespace Cells {

class DateTimeGroupItem_Impl;

/// <summary>
/// Represents the datetime's group setting.
/// </summary>
class DateTimeGroupItem {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    DateTimeGroupItem_Impl* _impl;
    
public:
    /// <summary>
    /// </summary>
    /// <param name="type"></param>
    /// <param name="year"></param>
    /// <param name="month"></param>
    /// <param name="day"></param>
    /// <param name="hour"></param>
    /// <param name="minute"></param>
    /// <param name="second"></param>
    ASPOSE_CELLS_API DateTimeGroupItem(DateTimeGroupingType type, int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second);
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API DateTimeGroupItem(DateTimeGroupItem_Impl* impl);
    /// <summary>
    /// Constructs from an IObject convertible to this.
    /// </summary>
    ASPOSE_CELLS_API DateTimeGroupItem(const IObject* obj);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API DateTimeGroupItem(const DateTimeGroupItem& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~DateTimeGroupItem();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API DateTimeGroupItem& operator=(const DateTimeGroupItem& src);
    /// <summary>
    /// operator bool()
    /// </summary>
    /// <returns>Returns true if the implementation object is not nullptr. Otherwise, returns false</returns>
    ASPOSE_CELLS_API explicit operator bool() const { return _impl != nullptr; }
    /// <summary>
    /// Checks whether the implementation object is nullptr.
    /// </summary>
    /// <returns>Returns true if the implementation object is nullptr. Otherwise, returns false</returns>
    ASPOSE_CELLS_API bool IsNull() const { return _impl == nullptr; }
    
public:
    /// <summary>
    /// Gets the min value.
    /// </summary>
    ASPOSE_CELLS_API Date GetMinValue();
    /// <summary>
    /// Gets and sets the group type.
    /// </summary>
    ASPOSE_CELLS_API DateTimeGroupingType GetDateTimeGroupingType();
    /// <summary>
    /// Gets and sets the group type.
    /// </summary>
    ASPOSE_CELLS_API void SetDateTimeGroupingType(DateTimeGroupingType value);
    /// <summary>
    /// Gets and sets the year of the grouped date time.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetYear();
    /// <summary>
    /// Gets and sets the year of the grouped date time.
    /// </summary>
    ASPOSE_CELLS_API void SetYear(int32_t value);
    /// <summary>
    /// Gets and sets the month of the grouped date time.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetMonth();
    /// <summary>
    /// Gets and sets the month of the grouped date time.
    /// </summary>
    ASPOSE_CELLS_API void SetMonth(int32_t value);
    /// <summary>
    /// Gets and sets the day of the grouped date time.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetDay();
    /// <summary>
    /// Gets and sets the day of the grouped date time.
    /// </summary>
    ASPOSE_CELLS_API void SetDay(int32_t value);
    /// <summary>
    /// Gets and sets the hour of the grouped date time.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetHour();
    /// <summary>
    /// Gets and sets the hour of the grouped date time.
    /// </summary>
    ASPOSE_CELLS_API void SetHour(int32_t value);
    /// <summary>
    /// Gets and sets the minute of the grouped date time.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetMinute();
    /// <summary>
    /// Gets and sets the minute of the grouped date time.
    /// </summary>
    ASPOSE_CELLS_API void SetMinute(int32_t value);
    /// <summary>
    /// Gets and sets the second of the grouped date time.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetSecond();
    /// <summary>
    /// Gets and sets the second of the grouped date time.
    /// </summary>
    ASPOSE_CELLS_API void SetSecond(int32_t value);
    
};

} }

#endif
