
module;

export module efi.types:error;

import :constants;
import :primitives;

export namespace efi
{

consteval auto
main_error_code(auto code)
{
    return MAIN_ERROR_HIGH_BIT | code;
}

consteval auto
main_warn_code(auto code)
{
    return MAIN_WARN_HIGH_BIT | code;
}

enum class error : unsigned_native
{
    EFI_SUCCESS              = 0,
    EFI_LOAD_ERROR           = main_error_code(1),
    EFI_INVALID_PARAMETER    = main_error_code(2),
    EFI_UNSUPPORTED          = main_error_code(3),
    EFI_BAD_BUFFER_SIZE      = main_error_code(4),
    EFI_BUFFER_TOO_SMALL     = main_error_code(5),
    EFI_NOT_READY            = main_error_code(6),
    EFI_DEVICE_ERROR         = main_error_code(7),
    EFI_WRITE_PROTECTED      = main_error_code(8),
    EFI_OUT_OF_RESOURCES     = main_error_code(9),
    EFI_VOLUME_CORRUPTED     = main_error_code(10),
    EFI_VOLUME_FULL          = main_error_code(11),
    EFI_NO_MEDIA             = main_error_code(12),
    EFI_MEDIA_CHANGED        = main_error_code(13),
    EFI_NOT_FOUND            = main_error_code(14),
    EFI_ACCESS_DENIED        = main_error_code(15),
    EFI_NO_RESPONSE          = main_error_code(16),
    EFI_NO_MAPPING           = main_error_code(17),
    EFI_TIMEOUT              = main_error_code(18),
    EFI_NOT_STARTED          = main_error_code(19),
    EFI_ALREADY_STARTED      = main_error_code(20),
    EFI_ABORTED              = main_error_code(21),
    EFI_ICMP_ERROR           = main_error_code(22),
    EFI_TFTP_ERROR           = main_error_code(23),
    EFI_PROTOCOL_ERROR       = main_error_code(24),
    EFI_INCOMPATIBLE_VERSION = main_error_code(25),
    EFI_SECURITY_VIOLATION   = main_error_code(26),
    EFI_CRC_ERROR            = main_error_code(27),
    EFI_END_OF_MEDIA         = main_error_code(28),
    EFI_END_OF_FILE          = main_error_code(31),
    EFI_INVALID_LANGUAGE     = main_error_code(32),
    EFI_COMPROMISED_DATA     = main_error_code(33),
    EFI_IP_ADDRESS_CONFLICT  = main_error_code(34),
    EFI_HTTP_ERROR           = main_error_code(35),
};

enum class warn : unsigned_native
{
    EFI_WARN_UNKOWN_GLYPH     = main_warn_code(1),
    EFI_WARN_UNKNOWN_GLYPH    = main_warn_code(1),
    EFI_WARN_DELETE_FAILURE   = main_warn_code(2),
    EFI_WARN_WRITE_FAILURE    = main_warn_code(3),
    EFI_WARN_BUFFER_TOO_SMALL = main_warn_code(4),
    EFI_WARN_STALE_DATA       = main_warn_code(5),
    EFI_WARN_FILE_SYSTEM      = main_warn_code(6),
    EFI_WARN_RESET_REQUIRED   = main_warn_code(7),
};

} // namespace efi