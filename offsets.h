#pragma once
#include "pointer.h"

namespace offset {

	// il2cpp
	constexpr pointer il2cpp_string_new = 0x18DD90;
	constexpr pointer il2cpp_resolve_icall = 0x1918C0;
	constexpr pointer MemoryIntegrity = 0x6F205;
	constexpr pointer MemoryIntegrity2 = 0x6F205 + 0x1B;

	// camera
	constexpr pointer camera = 0x10;
	constexpr pointer matrix = 0xDC;
	constexpr pointer camera_position = 0x42C;

	// unit3d
	constexpr pointer unity_list_len = 0x18;
	constexpr pointer unity_list_start = 0x20;
	constexpr pointer unity_list_offset = 0x8;

	// transform [Player]
	constexpr pointer transform_component = 0x10;
	constexpr pointer transform_component_data = 0x38;
	constexpr pointer transform_data_vector = 0x90;

	// transform [Structure]
	constexpr pointer transform_data_vector_structure = 0x1D0;

	// PlayerStats
	constexpr pointer PlayerStats_Update = 0x156CDD0;
	constexpr pointer PlayerStats_ccm = 0x70;
	constexpr pointer ccm_team = 0x170;

	// render
	constexpr pointer GUI = 0x16CD640;
}
