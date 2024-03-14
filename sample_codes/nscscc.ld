ENTRY(_start)
MEMORY
{
  text   (rx)   : ORIGIN = 0x80000000, LENGTH = 4M
  data   (rw!x) : ORIGIN = 0x80400000, LENGTH = 12K
}
SECTIONS
{
.text : {
    *(.text)}
}
