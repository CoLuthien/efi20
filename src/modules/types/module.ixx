
module;

export module efi.types;

export import :primitives;
export import :error;
export import :time;
export import :network;
export import :system;

export namespace efi
{
using handle_t = void*;
using event_t  = void*;

using lba_t = u64;
using tpl_t = unsigned_native;

using phys_addr_t = u64;
using virt_addr_t = u64;

} // namespace efi