
module;

#include "macros.hpp"

export module efi.console:outbound;

import efi.types;

export namespace efi::console
{

namespace outbound
{
struct interface;

using reset_fn = status(EFI_CALL_CONVENTION*)(interface* self, bool extended_verification);

using output_string_fn = status(EFI_CALL_CONVENTION*)(interface* self, c16* string);

using test_string_fn = status(EFI_CALL_CONVENTION*)(interface* self, c16* string);

using query_mode_fn = status(EFI_CALL_CONVENTION*)(interface*       self,
                                                   unsigned_native  mode_numer,
                                                   unsigned_native* columns,
                                                   unsigned_natvie* rows);

using set_mode_fn = status(EFI_CALL_CONVENTION*)(interface* self, unsigned_native mode_number);

using set_attribute_fn = status(EFI_CALL_CONVENTION*)(interface* self, unsigned_native attribute);

using clear_screen_fn = status(EFI_CALL_CONVENTION*)(interface* self);

using set_cursor_position_fn = status(EFI_CALL_CONVENTION*)(interface*      self,
                                                            unsigned_native column,
                                                            unsigned_native row);

using enable_cursor_fn = status(EFI_CALL_CONVENTION*)(interface* self, bool enable);

struct output_mode
{
    i32 MaxMode;
    // current settings
    i32  Mode;
    i32  Attribute;
    i32  CursorColumn;
    i32  CursorRow;
    bool CursorVisible;
};

struct interface
{
    reset_fn reset;

    output_string_fn output_string;
    test_string_fn   test_string;

    query_mode_fn    query_mode;
    set_mode_fn      set_mode;
    set_attribute_fn set_attribute;

    clear_screen_fn        clear_screen;
    set_cursor_position_fn set_cursor_position;
    enable_cursor_fn       enable_cursor;

    output_mode* mode;
};

} // namespace outbound

} // namespace efi::console