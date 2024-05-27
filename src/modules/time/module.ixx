
module;

#include <macros.hpp>

export module efi.time;

import efi.types;

export namespace efi
{
// time services
using get_time_fn = status(EFI_CALL_CONVENTION*)(time_t* time, time_capability_t* capabilities);
using set_time_fn = status(EFI_CALL_CONVENTION*)(time_t* time);

using get_wakeup_time_fn = status(EFI_CALL_CONVENTION*)(bool* enabled, bool* pending, time_t* time);
using set_wakeup_time_fn = status(EFI_CALL_CONVENTION*)(bool enable, time_t* time);

} // namespace efi