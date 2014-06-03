#pragma once

#include "Disasm.hpp"

class CSysZArch :
	public CDisasmbler
{
protected:
	CSysZArch(
		__in unsigned int mode,
		__in cs_opt_type optType,
		__in cs_opt_value optValue,
		__in const char* comment,
		__in cs_opt_type skipDataType,
		__in cs_opt_skipdata skipData
		) : CDisasmbler(mode, comment, cs_arch::CS_ARCH_SYSZ, optType, optValue, skipDataType, skipData)
	{
	}

public:
	__forceinline
	bool 
	IsInInsGroup(
		__in cs_insn& ins,
		__in sysz_insn_group groupId
		)
	{
		return CDisasmbler::IsInInsGroup(ins, groupId);
	}
	
	__forceinline
	bool 
	RegRead(
		__in cs_insn& ins,
		__in sysz_reg regId
		)
	{
		return CDisasmbler::RegRead(ins, regId);
	}

	__forceinline
	bool 
	RegWrite(
		__in cs_insn& ins,
		__in sysz_reg regId
		)
	{
		return CDisasmbler::RegWrite(ins, regId);
	}

	__forceinline
	int
	OpcodeCount(
		__in cs_insn& ins, 
		__in sysz_op_type opType
		)
	{
		return CDisasmbler::OpcodeCount(ins, opType);
	}

	__forceinline
	int
	OpcodeIndex(
		__in cs_insn& ins, 
		__in sysz_op_type opType,
		__in unsigned int opPosition = 0
		)
	{
		return CDisasmbler::OpcodeIndex(ins, opType, opPosition);
	}

	__forceinline
	const char* 
	RegName(
		__in sysz_reg reg
		)
	{
		return CDisasmbler::RegName(reg);
	}

	__forceinline
	const char* 
	InsName(
		__in sysz_insn ins
		)
	{
		return CDisasmbler::InsName(ins);
	}
};