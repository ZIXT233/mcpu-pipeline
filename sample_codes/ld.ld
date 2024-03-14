ENTRY(_init)
SECTIONS
{
.text 0x80000000: {
    *(.init) *(.text)}  ,
.data ALIGN(4):{*(.data)}
}
