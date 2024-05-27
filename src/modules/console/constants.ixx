

module;

export module efi.console:constants;

export namespace efi::console
{
namespace color
{
constexpr auto BLACK        = 0x00;
constexpr auto BLUE         = 0x01;
constexpr auto GREEN        = 0x02;
constexpr auto CYAN         = (EFI_BLUE | EFI_GREEN);
constexpr auto RED          = 0x04;
constexpr auto MAGENTA      = (EFI_BLUE | EFI_RED);
constexpr auto BROWN        = (EFI_GREEN | EFI_RED);
constexpr auto LIGHTGRAY    = (EFI_BLUE | EFI_GREEN | EFI_RED);
constexpr auto BRIGHT       = 0x08;
constexpr auto DARKGRAY     = (EFI_BRIGHT);
constexpr auto LIGHTBLUE    = (EFI_BLUE | EFI_BRIGHT);
constexpr auto LIGHTGREEN   = (EFI_GREEN | EFI_BRIGHT);
constexpr auto LIGHTCYAN    = (EFI_CYAN | EFI_BRIGHT);
constexpr auto LIGHTRED     = (EFI_RED | EFI_BRIGHT);
constexpr auto LIGHTMAGENTA = (EFI_MAGENTA | EFI_BRIGHT);
constexpr auto YELLOW       = (EFI_BROWN | EFI_BRIGHT);
constexpr auto WHITE        = (EFI_BLUE | EFI_GREEN | EFI_RED | EFI_BRIGHT);

constexpr auto BACKGROUND_BLACK     = 0x00;
constexpr auto BACKGROUND_BLUE      = 0x10;
constexpr auto BACKGROUND_GREEN     = 0x20;
constexpr auto BACKGROUND_CYAN      = (BACKGROUND_BLUE | BACKGROUND_GREEN);
constexpr auto BACKGROUND_RED       = 0x40;
constexpr auto BACKGROUND_MAGENTA   = (BACKGROUND_BLUE | BACKGROUND_RED);
constexpr auto BACKGROUND_BROWN     = (BACKGROUND_GREEN | BACKGROUND_RED);
constexpr auto BACKGROUND_LIGHTGRAY = (BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);

} // namespace color

namespace chart
{
constexpr auto BOXDRAW_HORIZONTAL          = 0x2500;
constexpr auto BOXDRAW_VERTICAL            = 0x2502;
constexpr auto BOXDRAW_DOWN_RIGHT          = 0x250c;
constexpr auto BOXDRAW_DOWN_LEFT           = 0x2510;
constexpr auto BOXDRAW_UP_RIGHT            = 0x2514;
constexpr auto BOXDRAW_UP_LEFT             = 0x2518;
constexpr auto BOXDRAW_VERTICAL_RIGHT      = 0x251c;
constexpr auto BOXDRAW_VERTICAL_LEFT       = 0x2524;
constexpr auto BOXDRAW_DOWN_HORIZONTAL     = 0x252c;
constexpr auto BOXDRAW_UP_HORIZONTAL       = 0x2534;
constexpr auto BOXDRAW_VERTICAL_HORIZONTAL = 0x253c;

constexpr auto BOXDRAW_DOUBLE_HORIZONTAL = 0x2550;
constexpr auto BOXDRAW_DOUBLE_VERTICAL   = 0x2551;
constexpr auto BOXDRAW_DOWN_RIGHT_DOUBLE = 0x2552;
constexpr auto BOXDRAW_DOWN_DOUBLE_RIGHT = 0x2553;
constexpr auto BOXDRAW_DOUBLE_DOWN_RIGHT = 0x2554;

constexpr auto BOXDRAW_DOWN_LEFT_DOUBLE = 0x2555;
constexpr auto BOXDRAW_DOWN_DOUBLE_LEFT = 0x2556;
constexpr auto BOXDRAW_DOUBLE_DOWN_LEFT = 0x2557;

constexpr auto BOXDRAW_UP_RIGHT_DOUBLE = 0x2558;
constexpr auto BOXDRAW_UP_DOUBLE_RIGHT = 0x2559;
constexpr auto BOXDRAW_DOUBLE_UP_RIGHT = 0x255a;

constexpr auto BOXDRAW_UP_LEFT_DOUBLE = 0x255b;
constexpr auto BOXDRAW_UP_DOUBLE_LEFT = 0x255c;
constexpr auto BOXDRAW_DOUBLE_UP_LEFT = 0x255d;

constexpr auto BOXDRAW_VERTICAL_RIGHT_DOUBLE = 0x255e;
constexpr auto BOXDRAW_VERTICAL_DOUBLE_RIGHT = 0x255f;
constexpr auto BOXDRAW_DOUBLE_VERTICAL_RIGHT = 0x2560;

constexpr auto BOXDRAW_VERTICAL_LEFT_DOUBLE = 0x2561;
constexpr auto BOXDRAW_VERTICAL_DOUBLE_LEFT = 0x2562;
constexpr auto BOXDRAW_DOUBLE_VERTICAL_LEFT = 0x2563;

constexpr auto BOXDRAW_DOWN_HORIZONTAL_DOUBLE = 0x2564;
constexpr auto BOXDRAW_DOWN_DOUBLE_HORIZONTAL = 0x2565;
constexpr auto BOXDRAW_DOUBLE_DOWN_HORIZONTAL = 0x2566;

constexpr auto BOXDRAW_UP_HORIZONTAL_DOUBLE = 0x2567;
constexpr auto BOXDRAW_UP_DOUBLE_HORIZONTAL = 0x2568;
constexpr auto BOXDRAW_DOUBLE_UP_HORIZONTAL = 0x2569;

constexpr auto BOXDRAW_VERTICAL_HORIZONTAL_DOUBLE = 0x256a;
constexpr auto BOXDRAW_VERTICAL_DOUBLE_HORIZONTAL = 0x256b;
constexpr auto BOXDRAW_DOUBLE_VERTICAL_HORIZONTAL = 0x256c;

//
// EFI Required Block Elements Code Chart
//

constexpr auto BLOCKELEMENT_FULL_BLOCK  = 0x2588;
constexpr auto BLOCKELEMENT_LIGHT_SHADE = 0x2591;
//
// EFI Required Geometric Shapes Code Chart
//

constexpr auto GEOMETRICSHAPE_UP_TRIANGLE    = 0x25b2;
constexpr auto GEOMETRICSHAPE_RIGHT_TRIANGLE = 0x25ba;
constexpr auto GEOMETRICSHAPE_DOWN_TRIANGLE  = 0x25bc;
constexpr auto GEOMETRICSHAPE_LEFT_TRIANGLE  = 0x25c4;

//
// EFI Required Arrow shapes
//
constexpr auto ARROW_UP   = 0x2191;
constexpr auto ARROW_DOWN = 0x2193;

} // namespace chart

} // namespace efi::console