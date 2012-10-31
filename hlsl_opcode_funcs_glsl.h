//Auto-generated by fwrap.py. Do not edit manually
const char* psz_hlsl_opcode_funcs_glsl = {
"	\n \
	void HLSL_mov(inout float dest, float value) {\n \
	    dest = value;\n \
	}\n \
	void HLSL_mov(inout float dest, vec4 value) {\n \
	    dest = value.x;\n \
	}\n \
	void HLSL_mov(inout vec1 dest, vec4 value) {\n \
	    dest.x = value.x;\n \
	}\n \
	void HLSL_mov(inout vec2 dest, vec4 value) {\n \
	    dest = value.xy;\n \
	}\n \
	void HLSL_mov(inout vec3 dest, vec4 value) {\n \
	    dest = value.xyz;\n \
	}\n \
	void HLSL_mov(inout vec4 dest, vec4 value) {\n \
	    dest = value;\n \
	}\n \
	\n \
	void HLSL_movc(inout float dest, float value) {\n \
	    if(value > 0.0) dest = value;\n \
	}\n \
	void HLSL_movc(inout vec2 dest, vec4 value) {\n \
	    if(value.x > 0.0) dest.x = value.x;\n \
	    if(value.y > 0.0) dest.y = value.y;\n \
	}\n \
	void HLSL_mul(inout float dest, float a, float b) {\n \
	    dest = a * b;\n \
	}\n \
	void HLSL_mul(inout vec3 dest, vec4 a, vec4 b) {\n \
	    dest = a.xyz * b.xyz;\n \
	}\n \
	void HLSL_mul(inout vec4 dest, vec4 a, vec4 b) {\n \
	    dest = a * b;\n \
	}\n \
	\n \
	void HLSL_mad(inout float dest, float a, float b, float c) {\n \
	    dest = a * b + c;\n \
	}\n \
	void HLSL_mad(inout vec3 dest, vec4 a, vec4 b, vec4 c) {\n \
	    dest = a.xyz * b.xyz + c.xyz;\n \
	}\n \
	void HLSL_mad(inout vec4 dest, vec4 a, vec4 b, vec4 c) {\n \
	    dest = a * b + c;\n \
	}\n \
	\n \
	void HLSL_ge(inout vec4 dest, vec4 a, vec4 b) {\n \
	    dest = vec4(greaterThanEqual(a, b));\n \
	}\n \
	\n \
	void HLSL_ge(inout float dest, float a, float b) {\n \
	    dest = (a >= b) ? 1 : 0;\n \
	}\n \
	\n \
	void HLSL_ige(inout vec4 dest, vec4 a, vec4 b) {\n \
	    dest = vec4(greaterThanEqual(a, b));\n \
	}\n \
	\n \
	void HLSL_ige(inout float dest, float a, float b) {\n \
	    dest = (a >= b) ? 1 : 0;\n \
	}\n \
	\n \
	void HLSL_lt(inout vec4 dest, vec4 a, vec4 b) {\n \
	    dest = vec4(lessThan(a, b));\n \
	}\n \
	\n \
	void HLSL_lt(inout float dest, float a, float b) {\n \
	    dest = (a < b) ? 1 : 0;\n \
	}\n \
	\n \
	void HLSL_ieq(inout vec4 dest, vec4 a, vec4 b) {\n \
	    dest = vec4(equal(a, b));\n \
	}\n \
	\n \
	void HLSL_ieq(inout float dest, float a, float b) {\n \
	    dest = (a == b) ? 1 : 0;\n \
	}\n \
	\n \
	void HLSL_sample_l(inout vec4 dest, sampler2D sampler, vec4 coord, float lod) {\n \
	    dest = texture2DLod(sampler, coord.xy, lod);\n \
	}\n \
	void HLSL_sample_l(inout vec3 dest, sampler2D sampler, vec4 coord, float lod) {\n \
	    dest = texture2DLod(sampler, coord.xy, lod).xyz;\n \
	}\n \
	\n \
	void HLSL_sample_l(inout vec4 dest, sampler2D sampler, vec2 coord, float lod) {\n \
	    dest = texture2DLod(sampler, coord, lod);\n \
	}\n \
	void HLSL_sample_l(inout vec3 dest, sampler2D sampler, vec2 coord, float lod) {\n \
	    dest = texture2DLod(sampler, coord, lod).xyz;\n \
	}\n \
	\n \
"};