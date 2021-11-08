// [STRING]: "Attempt to modify a readonly table"
// OFFSET: 0x8 (8)
// USAGE:
// *(BYTE*)(table + 0x8) = 1; (1 = readonly | 0 = writeable)

// Decompiled using HexRays Decompiler (IDA 7.6)
int __fastcall sub_173A290(int a1, int a2)
{
  __int64 v3; // kr00_8
  unsigned int v4; // r1
  int **v5; // r5
  int v6; // r6
  _QWORD *v7; // r0
  __int64 v8; // d17
  int v9; // r0
  int result; // r0

  if ( a2 < 1 )
  {
    v5 = (int **)sub_173AB08(a1);
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 12);
    v4 = HIDWORD(v3) + 16 * a2 - 16;
    v5 = off_272A7C8;
    if ( v4 < (unsigned int)v3 )
      v5 = (int **)v4;
  }
  if ( *((_BYTE *)*v5 + 8) ) // Offset
    sub_173D1A0(a1, "Attempt to modify a readonly table"); // Straight to readonly error, that's how we know it's the offset
  v6 = *(_DWORD *)(a1 + 12);
  v7 = (_QWORD *)sub_17451F4(a1, *v5, v6 - 32);
  v8 = *(_QWORD *)(v6 - 8);
  *v7 = *(_QWORD *)(v6 - 16);
  v7[1] = v8;
  v9 = *(_DWORD *)(a1 + 12);
  if ( *(int *)(v9 - 4) >= 5 && (*((_BYTE *)*v5 + 5) & 4) != 0 && *(unsigned __int8 *)(*(_DWORD *)(v9 - 16) + 5) << 30 )
  {
    sub_173ECF4(a1);
    v9 = *(_DWORD *)(a1 + 12);
  }
  result = v9 - 32;
  *(_DWORD *)(a1 + 12) = result;
  return result;
}
