
module;

export module efi.types:primitives;

export namespace efi
{

using u8 = unsigned char;
using i8 = signed char;

using u16 = unsigned short;
using i16 = signed short;

using u32 = unsigned int;
using i32 = signed int;

using u64 = unsigned long long;
using i64 = signed long long;

using unsigned_native = u64;
using signed_native   = i64;

using c8  = char;
using c16 = wchar_t;

using status = unsigned_native;

} // namespace efi