;--- include file created by h2incx v0.99.16, copyright 2005 japheth
;--- source file: D:\Microsoft SDK\Include\GL\GL.h, last modified: 4/11/2001 14:40

ifndef __gl_h_
ifndef __GL_H__
__gl_h_	EQU	<>
__GL_H__	EQU	<>
ifdef __cplusplus
;extern "C"
;{
endif 
GLenum typedef DWORD
GLboolean typedef BYTE
GLbitfield typedef DWORD
GLbyte typedef SBYTE
GLshort typedef SWORD
GLint typedef DWORD
GLsizei typedef DWORD
GLubyte typedef BYTE
GLushort typedef WORD
GLuint typedef DWORD
GLfloat typedef REAL4
GLclampf typedef REAL4
GLdouble typedef REAL8
GLclampd typedef REAL8
GLvoid typedef ptr
GL_VERSION_1_1	EQU	1
GL_ACCUM	EQU	0100h
GL_LOAD	EQU	0101h
GL_RETURN	EQU	0102h
GL_MULT	EQU	0103h
GL_ADD	EQU	0104h
GL_NEVER	EQU	0200h
GL_LESS	EQU	0201h
GL_EQUAL	EQU	0202h
GL_LEQUAL	EQU	0203h
GL_GREATER	EQU	0204h
GL_NOTEQUAL	EQU	0205h
GL_GEQUAL	EQU	0206h
GL_ALWAYS	EQU	0207h
GL_CURRENT_BIT	EQU	00000001h
GL_POINT_BIT	EQU	00000002h
GL_LINE_BIT	EQU	00000004h
GL_POLYGON_BIT	EQU	00000008h
GL_POLYGON_STIPPLE_BIT	EQU	00000010h
GL_PIXEL_MODE_BIT	EQU	00000020h
GL_LIGHTING_BIT	EQU	00000040h
GL_FOG_BIT	EQU	00000080h
GL_DEPTH_BUFFER_BIT	EQU	00000100h
GL_ACCUM_BUFFER_BIT	EQU	00000200h
GL_STENCIL_BUFFER_BIT	EQU	00000400h
GL_VIEWPORT_BIT	EQU	00000800h
GL_TRANSFORM_BIT	EQU	00001000h
GL_ENABLE_BIT	EQU	00002000h
GL_COLOR_BUFFER_BIT	EQU	00004000h
GL_HINT_BIT	EQU	00008000h
GL_EVAL_BIT	EQU	00010000h
GL_LIST_BIT	EQU	00020000h
GL_TEXTURE_BIT	EQU	00040000h
GL_SCISSOR_BIT	EQU	00080000h
GL_ALL_ATTRIB_BITS	EQU	000fffffh
GL_POINTS	EQU	0000h
GL_LINES	EQU	0001h
GL_LINE_LOOP	EQU	0002h
GL_LINE_STRIP	EQU	0003h
GL_TRIANGLES	EQU	0004h
GL_TRIANGLE_STRIP	EQU	0005h
GL_TRIANGLE_FAN	EQU	0006h
GL_QUADS	EQU	0007h
GL_QUAD_STRIP	EQU	0008h
GL_POLYGON	EQU	0009h
GL_ZERO	EQU	0
GL_ONE	EQU	1
GL_SRC_COLOR	EQU	0300h
GL_ONE_MINUS_SRC_COLOR	EQU	0301h
GL_SRC_ALPHA	EQU	0302h
GL_ONE_MINUS_SRC_ALPHA	EQU	0303h
GL_DST_ALPHA	EQU	0304h
GL_ONE_MINUS_DST_ALPHA	EQU	0305h
GL_DST_COLOR	EQU	0306h
GL_ONE_MINUS_DST_COLOR	EQU	0307h
GL_SRC_ALPHA_SATURATE	EQU	0308h
GL_TRUE	EQU	1
GL_FALSE	EQU	0
GL_CLIP_PLANE0	EQU	3000h
GL_CLIP_PLANE1	EQU	3001h
GL_CLIP_PLANE2	EQU	3002h
GL_CLIP_PLANE3	EQU	3003h
GL_CLIP_PLANE4	EQU	3004h
GL_CLIP_PLANE5	EQU	3005h
GL_BYTE	EQU	1400h
GL_UNSIGNED_BYTE	EQU	1401h
GL_SHORT	EQU	1402h
GL_UNSIGNED_SHORT	EQU	1403h
GL_INT	EQU	1404h
GL_UNSIGNED_INT	EQU	1405h
GL_FLOAT	EQU	1406h
GL_2_BYTES	EQU	1407h
GL_3_BYTES	EQU	1408h
GL_4_BYTES	EQU	1409h
GL_DOUBLE	EQU	140Ah
GL_NONE	EQU	0
GL_FRONT_LEFT	EQU	0400h
GL_FRONT_RIGHT	EQU	0401h
GL_BACK_LEFT	EQU	0402h
GL_BACK_RIGHT	EQU	0403h
GL_FRONT	EQU	0404h
GL_BACK	EQU	0405h
GL_LEFT	EQU	0406h
GL_RIGHT	EQU	0407h
GL_FRONT_AND_BACK	EQU	0408h
GL_AUX0	EQU	0409h
GL_AUX1	EQU	040Ah
GL_AUX2	EQU	040Bh
GL_AUX3	EQU	040Ch
GL_NO_ERROR	EQU	0
GL_INVALID_ENUM	EQU	0500h
GL_INVALID_VALUE	EQU	0501h
GL_INVALID_OPERATION	EQU	0502h
GL_STACK_OVERFLOW	EQU	0503h
GL_STACK_UNDERFLOW	EQU	0504h
GL_OUT_OF_MEMORY	EQU	0505h
GL_2D	EQU	0600h
GL_3D	EQU	0601h
GL_3D_COLOR	EQU	0602h
GL_3D_COLOR_TEXTURE	EQU	0603h
GL_4D_COLOR_TEXTURE	EQU	0604h
GL_PASS_THROUGH_TOKEN	EQU	0700h
GL_POINT_TOKEN	EQU	0701h
GL_LINE_TOKEN	EQU	0702h
GL_POLYGON_TOKEN	EQU	0703h
GL_BITMAP_TOKEN	EQU	0704h
GL_DRAW_PIXEL_TOKEN	EQU	0705h
GL_COPY_PIXEL_TOKEN	EQU	0706h
GL_LINE_RESET_TOKEN	EQU	0707h
GL_EXP	EQU	0800h
GL_EXP2	EQU	0801h
GL_CW	EQU	0900h
GL_CCW	EQU	0901h
GL_COEFF	EQU	0A00h
GL_ORDER	EQU	0A01h
GL_DOMAIN	EQU	0A02h
GL_CURRENT_COLOR	EQU	0B00h
GL_CURRENT_INDEX	EQU	0B01h
GL_CURRENT_NORMAL	EQU	0B02h
GL_CURRENT_TEXTURE_COORDS	EQU	0B03h
GL_CURRENT_RASTER_COLOR	EQU	0B04h
GL_CURRENT_RASTER_INDEX	EQU	0B05h
GL_CURRENT_RASTER_TEXTURE_COORDS	EQU	0B06h
GL_CURRENT_RASTER_POSITION	EQU	0B07h
GL_CURRENT_RASTER_POSITION_VALID	EQU	0B08h
GL_CURRENT_RASTER_DISTANCE	EQU	0B09h
GL_POINT_SMOOTH	EQU	0B10h
GL_POINT_SIZE	EQU	0B11h
GL_POINT_SIZE_RANGE	EQU	0B12h
GL_POINT_SIZE_GRANULARITY	EQU	0B13h
GL_LINE_SMOOTH	EQU	0B20h
GL_LINE_WIDTH	EQU	0B21h
GL_LINE_WIDTH_RANGE	EQU	0B22h
GL_LINE_WIDTH_GRANULARITY	EQU	0B23h
GL_LINE_STIPPLE	EQU	0B24h
GL_LINE_STIPPLE_PATTERN	EQU	0B25h
GL_LINE_STIPPLE_REPEAT	EQU	0B26h
GL_LIST_MODE	EQU	0B30h
GL_MAX_LIST_NESTING	EQU	0B31h
GL_LIST_BASE	EQU	0B32h
GL_LIST_INDEX	EQU	0B33h
GL_POLYGON_MODE	EQU	0B40h
GL_POLYGON_SMOOTH	EQU	0B41h
GL_POLYGON_STIPPLE	EQU	0B42h
GL_EDGE_FLAG	EQU	0B43h
GL_CULL_FACE	EQU	0B44h
GL_CULL_FACE_MODE	EQU	0B45h
GL_FRONT_FACE	EQU	0B46h
GL_LIGHTING	EQU	0B50h
GL_LIGHT_MODEL_LOCAL_VIEWER	EQU	0B51h
GL_LIGHT_MODEL_TWO_SIDE	EQU	0B52h
GL_LIGHT_MODEL_AMBIENT	EQU	0B53h
GL_SHADE_MODEL	EQU	0B54h
GL_COLOR_MATERIAL_FACE	EQU	0B55h
GL_COLOR_MATERIAL_PARAMETER	EQU	0B56h
GL_COLOR_MATERIAL	EQU	0B57h
GL_FOG	EQU	0B60h
GL_FOG_INDEX	EQU	0B61h
GL_FOG_DENSITY	EQU	0B62h
GL_FOG_START	EQU	0B63h
GL_FOG_END	EQU	0B64h
GL_FOG_MODE	EQU	0B65h
GL_FOG_COLOR	EQU	0B66h
GL_DEPTH_RANGE	EQU	0B70h
GL_DEPTH_TEST	EQU	0B71h
GL_DEPTH_WRITEMASK	EQU	0B72h
GL_DEPTH_CLEAR_VALUE	EQU	0B73h
GL_DEPTH_FUNC	EQU	0B74h
GL_ACCUM_CLEAR_VALUE	EQU	0B80h
GL_STENCIL_TEST	EQU	0B90h
GL_STENCIL_CLEAR_VALUE	EQU	0B91h
GL_STENCIL_FUNC	EQU	0B92h
GL_STENCIL_VALUE_MASK	EQU	0B93h
GL_STENCIL_FAIL	EQU	0B94h
GL_STENCIL_PASS_DEPTH_FAIL	EQU	0B95h
GL_STENCIL_PASS_DEPTH_PASS	EQU	0B96h
GL_STENCIL_REF	EQU	0B97h
GL_STENCIL_WRITEMASK	EQU	0B98h
GL_MATRIX_MODE	EQU	0BA0h
GL_NORMALIZE	EQU	0BA1h
GL_VIEWPORT	EQU	0BA2h
GL_MODELVIEW_STACK_DEPTH	EQU	0BA3h
GL_PROJECTION_STACK_DEPTH	EQU	0BA4h
GL_TEXTURE_STACK_DEPTH	EQU	0BA5h
GL_MODELVIEW_MATRIX	EQU	0BA6h
GL_PROJECTION_MATRIX	EQU	0BA7h
GL_TEXTURE_MATRIX	EQU	0BA8h
GL_ATTRIB_STACK_DEPTH	EQU	0BB0h
GL_CLIENT_ATTRIB_STACK_DEPTH	EQU	0BB1h
GL_ALPHA_TEST	EQU	0BC0h
GL_ALPHA_TEST_FUNC	EQU	0BC1h
GL_ALPHA_TEST_REF	EQU	0BC2h
GL_DITHER	EQU	0BD0h
GL_BLEND_DST	EQU	0BE0h
GL_BLEND_SRC	EQU	0BE1h
GL_BLEND	EQU	0BE2h
GL_LOGIC_OP_MODE	EQU	0BF0h
GL_INDEX_LOGIC_OP	EQU	0BF1h
GL_COLOR_LOGIC_OP	EQU	0BF2h
GL_AUX_BUFFERS	EQU	0C00h
GL_DRAW_BUFFER	EQU	0C01h
GL_READ_BUFFER	EQU	0C02h
GL_SCISSOR_BOX	EQU	0C10h
GL_SCISSOR_TEST	EQU	0C11h
GL_INDEX_CLEAR_VALUE	EQU	0C20h
GL_INDEX_WRITEMASK	EQU	0C21h
GL_COLOR_CLEAR_VALUE	EQU	0C22h
GL_COLOR_WRITEMASK	EQU	0C23h
GL_INDEX_MODE	EQU	0C30h
GL_RGBA_MODE	EQU	0C31h
GL_DOUBLEBUFFER	EQU	0C32h
GL_STEREO	EQU	0C33h
GL_RENDER_MODE	EQU	0C40h
GL_PERSPECTIVE_CORRECTION_HINT	EQU	0C50h
GL_POINT_SMOOTH_HINT	EQU	0C51h
GL_LINE_SMOOTH_HINT	EQU	0C52h
GL_POLYGON_SMOOTH_HINT	EQU	0C53h
GL_FOG_HINT	EQU	0C54h
GL_TEXTURE_GEN_S	EQU	0C60h
GL_TEXTURE_GEN_T	EQU	0C61h
GL_TEXTURE_GEN_R	EQU	0C62h
GL_TEXTURE_GEN_Q	EQU	0C63h
GL_PIXEL_MAP_I_TO_I	EQU	0C70h
GL_PIXEL_MAP_S_TO_S	EQU	0C71h
GL_PIXEL_MAP_I_TO_R	EQU	0C72h
GL_PIXEL_MAP_I_TO_G	EQU	0C73h
GL_PIXEL_MAP_I_TO_B	EQU	0C74h
GL_PIXEL_MAP_I_TO_A	EQU	0C75h
GL_PIXEL_MAP_R_TO_R	EQU	0C76h
GL_PIXEL_MAP_G_TO_G	EQU	0C77h
GL_PIXEL_MAP_B_TO_B	EQU	0C78h
GL_PIXEL_MAP_A_TO_A	EQU	0C79h
GL_PIXEL_MAP_I_TO_I_SIZE	EQU	0CB0h
GL_PIXEL_MAP_S_TO_S_SIZE	EQU	0CB1h
GL_PIXEL_MAP_I_TO_R_SIZE	EQU	0CB2h
GL_PIXEL_MAP_I_TO_G_SIZE	EQU	0CB3h
GL_PIXEL_MAP_I_TO_B_SIZE	EQU	0CB4h
GL_PIXEL_MAP_I_TO_A_SIZE	EQU	0CB5h
GL_PIXEL_MAP_R_TO_R_SIZE	EQU	0CB6h
GL_PIXEL_MAP_G_TO_G_SIZE	EQU	0CB7h
GL_PIXEL_MAP_B_TO_B_SIZE	EQU	0CB8h
GL_PIXEL_MAP_A_TO_A_SIZE	EQU	0CB9h
GL_UNPACK_SWAP_BYTES	EQU	0CF0h
GL_UNPACK_LSB_FIRST	EQU	0CF1h
GL_UNPACK_ROW_LENGTH	EQU	0CF2h
GL_UNPACK_SKIP_ROWS	EQU	0CF3h
GL_UNPACK_SKIP_PIXELS	EQU	0CF4h
GL_UNPACK_ALIGNMENT	EQU	0CF5h
GL_PACK_SWAP_BYTES	EQU	0D00h
GL_PACK_LSB_FIRST	EQU	0D01h
GL_PACK_ROW_LENGTH	EQU	0D02h
GL_PACK_SKIP_ROWS	EQU	0D03h
GL_PACK_SKIP_PIXELS	EQU	0D04h
GL_PACK_ALIGNMENT	EQU	0D05h
GL_MAP_COLOR	EQU	0D10h
GL_MAP_STENCIL	EQU	0D11h
GL_INDEX_SHIFT	EQU	0D12h
GL_INDEX_OFFSET	EQU	0D13h
GL_RED_SCALE	EQU	0D14h
GL_RED_BIAS	EQU	0D15h
GL_ZOOM_X	EQU	0D16h
GL_ZOOM_Y	EQU	0D17h
GL_GREEN_SCALE	EQU	0D18h
GL_GREEN_BIAS	EQU	0D19h
GL_BLUE_SCALE	EQU	0D1Ah
GL_BLUE_BIAS	EQU	0D1Bh
GL_ALPHA_SCALE	EQU	0D1Ch
GL_ALPHA_BIAS	EQU	0D1Dh
GL_DEPTH_SCALE	EQU	0D1Eh
GL_DEPTH_BIAS	EQU	0D1Fh
GL_MAX_EVAL_ORDER	EQU	0D30h
GL_MAX_LIGHTS	EQU	0D31h
GL_MAX_CLIP_PLANES	EQU	0D32h
GL_MAX_TEXTURE_SIZE	EQU	0D33h
GL_MAX_PIXEL_MAP_TABLE	EQU	0D34h
GL_MAX_ATTRIB_STACK_DEPTH	EQU	0D35h
GL_MAX_MODELVIEW_STACK_DEPTH	EQU	0D36h
GL_MAX_NAME_STACK_DEPTH	EQU	0D37h
GL_MAX_PROJECTION_STACK_DEPTH	EQU	0D38h
GL_MAX_TEXTURE_STACK_DEPTH	EQU	0D39h
GL_MAX_VIEWPORT_DIMS	EQU	0D3Ah
GL_MAX_CLIENT_ATTRIB_STACK_DEPTH	EQU	0D3Bh
GL_SUBPIXEL_BITS	EQU	0D50h
GL_INDEX_BITS	EQU	0D51h
GL_RED_BITS	EQU	0D52h
GL_GREEN_BITS	EQU	0D53h
GL_BLUE_BITS	EQU	0D54h
GL_ALPHA_BITS	EQU	0D55h
GL_DEPTH_BITS	EQU	0D56h
GL_STENCIL_BITS	EQU	0D57h
GL_ACCUM_RED_BITS	EQU	0D58h
GL_ACCUM_GREEN_BITS	EQU	0D59h
GL_ACCUM_BLUE_BITS	EQU	0D5Ah
GL_ACCUM_ALPHA_BITS	EQU	0D5Bh
GL_NAME_STACK_DEPTH	EQU	0D70h
GL_AUTO_NORMAL	EQU	0D80h
GL_MAP1_COLOR_4	EQU	0D90h
GL_MAP1_INDEX	EQU	0D91h
GL_MAP1_NORMAL	EQU	0D92h
GL_MAP1_TEXTURE_COORD_1	EQU	0D93h
GL_MAP1_TEXTURE_COORD_2	EQU	0D94h
GL_MAP1_TEXTURE_COORD_3	EQU	0D95h
GL_MAP1_TEXTURE_COORD_4	EQU	0D96h
GL_MAP1_VERTEX_3	EQU	0D97h
GL_MAP1_VERTEX_4	EQU	0D98h
GL_MAP2_COLOR_4	EQU	0DB0h
GL_MAP2_INDEX	EQU	0DB1h
GL_MAP2_NORMAL	EQU	0DB2h
GL_MAP2_TEXTURE_COORD_1	EQU	0DB3h
GL_MAP2_TEXTURE_COORD_2	EQU	0DB4h
GL_MAP2_TEXTURE_COORD_3	EQU	0DB5h
GL_MAP2_TEXTURE_COORD_4	EQU	0DB6h
GL_MAP2_VERTEX_3	EQU	0DB7h
GL_MAP2_VERTEX_4	EQU	0DB8h
GL_MAP1_GRID_DOMAIN	EQU	0DD0h
GL_MAP1_GRID_SEGMENTS	EQU	0DD1h
GL_MAP2_GRID_DOMAIN	EQU	0DD2h
GL_MAP2_GRID_SEGMENTS	EQU	0DD3h
GL_TEXTURE_1D	EQU	0DE0h
GL_TEXTURE_2D	EQU	0DE1h
GL_FEEDBACK_BUFFER_POINTER	EQU	0DF0h
GL_FEEDBACK_BUFFER_SIZE	EQU	0DF1h
GL_FEEDBACK_BUFFER_TYPE	EQU	0DF2h
GL_SELECTION_BUFFER_POINTER	EQU	0DF3h
GL_SELECTION_BUFFER_SIZE	EQU	0DF4h
GL_TEXTURE_WIDTH	EQU	1000h
GL_TEXTURE_HEIGHT	EQU	1001h
GL_TEXTURE_INTERNAL_FORMAT	EQU	1003h
GL_TEXTURE_BORDER_COLOR	EQU	1004h
GL_TEXTURE_BORDER	EQU	1005h
GL_DONT_CARE	EQU	1100h
GL_FASTEST	EQU	1101h
GL_NICEST	EQU	1102h
GL_LIGHT0	EQU	4000h
GL_LIGHT1	EQU	4001h
GL_LIGHT2	EQU	4002h
GL_LIGHT3	EQU	4003h
GL_LIGHT4	EQU	4004h
GL_LIGHT5	EQU	4005h
GL_LIGHT6	EQU	4006h
GL_LIGHT7	EQU	4007h
GL_AMBIENT	EQU	1200h
GL_DIFFUSE	EQU	1201h
GL_SPECULAR	EQU	1202h
GL_POSITION	EQU	1203h
GL_SPOT_DIRECTION	EQU	1204h
GL_SPOT_EXPONENT	EQU	1205h
GL_SPOT_CUTOFF	EQU	1206h
GL_CONSTANT_ATTENUATION	EQU	1207h
GL_LINEAR_ATTENUATION	EQU	1208h
GL_QUADRATIC_ATTENUATION	EQU	1209h
GL_COMPILE	EQU	1300h
GL_COMPILE_AND_EXECUTE	EQU	1301h
GL_CLEAR	EQU	1500h
GL_AND	EQU	1501h
GL_AND_REVERSE	EQU	1502h
GL_COPY	EQU	1503h
GL_AND_INVERTED	EQU	1504h
GL_NOOP	EQU	1505h
GL_XOR	EQU	1506h
GL_OR	EQU	1507h
GL_NOR	EQU	1508h
GL_EQUIV	EQU	1509h
GL_INVERT	EQU	150Ah
GL_OR_REVERSE	EQU	150Bh
GL_COPY_INVERTED	EQU	150Ch
GL_OR_INVERTED	EQU	150Dh
GL_NAND	EQU	150Eh
GL_SET	EQU	150Fh
GL_EMISSION	EQU	1600h
GL_SHININESS	EQU	1601h
GL_AMBIENT_AND_DIFFUSE	EQU	1602h
GL_COLOR_INDEXES	EQU	1603h
GL_MODELVIEW	EQU	1700h
GL_PROJECTION	EQU	1701h
GL_TEXTURE	EQU	1702h
GL_COLOR	EQU	1800h
GL_DEPTH	EQU	1801h
GL_STENCIL	EQU	1802h
GL_COLOR_INDEX	EQU	1900h
GL_STENCIL_INDEX	EQU	1901h
GL_DEPTH_COMPONENT	EQU	1902h
GL_RED	EQU	1903h
GL_GREEN	EQU	1904h
GL_BLUE	EQU	1905h
GL_ALPHA	EQU	1906h
GL_RGB	EQU	1907h
GL_RGBA	EQU	1908h
GL_LUMINANCE	EQU	1909h
GL_LUMINANCE_ALPHA	EQU	190Ah
GL_BITMAP	EQU	1A00h
GL_POINT	EQU	1B00h
GL_LINE	EQU	1B01h
GL_FILL	EQU	1B02h
GL_RENDER	EQU	1C00h
GL_FEEDBACK	EQU	1C01h
GL_SELECT	EQU	1C02h
GL_FLAT	EQU	1D00h
GL_SMOOTH	EQU	1D01h
GL_KEEP	EQU	1E00h
GL_REPLACE	EQU	1E01h
GL_INCR	EQU	1E02h
GL_DECR	EQU	1E03h
GL_VENDOR	EQU	1F00h
GL_RENDERER	EQU	1F01h
GL_VERSION	EQU	1F02h
GL_EXTENSIONS	EQU	1F03h
GL_S	EQU	2000h
GL_T	EQU	2001h
GL_R	EQU	2002h
GL_Q	EQU	2003h
GL_MODULATE	EQU	2100h
GL_DECAL	EQU	2101h
GL_TEXTURE_ENV_MODE	EQU	2200h
GL_TEXTURE_ENV_COLOR	EQU	2201h
GL_TEXTURE_ENV	EQU	2300h
GL_EYE_LINEAR	EQU	2400h
GL_OBJECT_LINEAR	EQU	2401h
GL_SPHERE_MAP	EQU	2402h
GL_TEXTURE_GEN_MODE	EQU	2500h
GL_OBJECT_PLANE	EQU	2501h
GL_EYE_PLANE	EQU	2502h
GL_NEAREST	EQU	2600h
GL_LINEAR	EQU	2601h
GL_NEAREST_MIPMAP_NEAREST	EQU	2700h
GL_LINEAR_MIPMAP_NEAREST	EQU	2701h
GL_NEAREST_MIPMAP_LINEAR	EQU	2702h
GL_LINEAR_MIPMAP_LINEAR	EQU	2703h
GL_TEXTURE_MAG_FILTER	EQU	2800h
GL_TEXTURE_MIN_FILTER	EQU	2801h
GL_TEXTURE_WRAP_S	EQU	2802h
GL_TEXTURE_WRAP_T	EQU	2803h
GL_CLAMP	EQU	2900h
GL_REPEAT	EQU	2901h
GL_CLIENT_PIXEL_STORE_BIT	EQU	00000001h
GL_CLIENT_VERTEX_ARRAY_BIT	EQU	00000002h
GL_CLIENT_ALL_ATTRIB_BITS	EQU	0ffffffffh
GL_POLYGON_OFFSET_FACTOR	EQU	8038h
GL_POLYGON_OFFSET_UNITS	EQU	2A00h
GL_POLYGON_OFFSET_POINT	EQU	2A01h
GL_POLYGON_OFFSET_LINE	EQU	2A02h
GL_POLYGON_OFFSET_FILL	EQU	8037h
GL_ALPHA4	EQU	803Bh
GL_ALPHA8	EQU	803Ch
GL_ALPHA12	EQU	803Dh
GL_ALPHA16	EQU	803Eh
GL_LUMINANCE4	EQU	803Fh
GL_LUMINANCE8	EQU	8040h
GL_LUMINANCE12	EQU	8041h
GL_LUMINANCE16	EQU	8042h
GL_LUMINANCE4_ALPHA4	EQU	8043h
GL_LUMINANCE6_ALPHA2	EQU	8044h
GL_LUMINANCE8_ALPHA8	EQU	8045h
GL_LUMINANCE12_ALPHA4	EQU	8046h
GL_LUMINANCE12_ALPHA12	EQU	8047h
GL_LUMINANCE16_ALPHA16	EQU	8048h
GL_INTENSITY	EQU	8049h
GL_INTENSITY4	EQU	804Ah
GL_INTENSITY8	EQU	804Bh
GL_INTENSITY12	EQU	804Ch
GL_INTENSITY16	EQU	804Dh
GL_R3_G3_B2	EQU	2A10h
GL_RGB4	EQU	804Fh
GL_RGB5	EQU	8050h
GL_RGB8	EQU	8051h
GL_RGB10	EQU	8052h
GL_RGB12	EQU	8053h
GL_RGB16	EQU	8054h
GL_RGBA2	EQU	8055h
GL_RGBA4	EQU	8056h
GL_RGB5_A1	EQU	8057h
GL_RGBA8	EQU	8058h
GL_RGB10_A2	EQU	8059h
GL_RGBA12	EQU	805Ah
GL_RGBA16	EQU	805Bh
GL_TEXTURE_RED_SIZE	EQU	805Ch
GL_TEXTURE_GREEN_SIZE	EQU	805Dh
GL_TEXTURE_BLUE_SIZE	EQU	805Eh
GL_TEXTURE_ALPHA_SIZE	EQU	805Fh
GL_TEXTURE_LUMINANCE_SIZE	EQU	8060h
GL_TEXTURE_INTENSITY_SIZE	EQU	8061h
GL_PROXY_TEXTURE_1D	EQU	8063h
GL_PROXY_TEXTURE_2D	EQU	8064h
GL_TEXTURE_PRIORITY	EQU	8066h
GL_TEXTURE_RESIDENT	EQU	8067h
GL_TEXTURE_BINDING_1D	EQU	8068h
GL_TEXTURE_BINDING_2D	EQU	8069h
GL_VERTEX_ARRAY	EQU	8074h
GL_NORMAL_ARRAY	EQU	8075h
GL_COLOR_ARRAY	EQU	8076h
GL_INDEX_ARRAY	EQU	8077h
GL_TEXTURE_COORD_ARRAY	EQU	8078h
GL_EDGE_FLAG_ARRAY	EQU	8079h
GL_VERTEX_ARRAY_SIZE	EQU	807Ah
GL_VERTEX_ARRAY_TYPE	EQU	807Bh
GL_VERTEX_ARRAY_STRIDE	EQU	807Ch
GL_NORMAL_ARRAY_TYPE	EQU	807Eh
GL_NORMAL_ARRAY_STRIDE	EQU	807Fh
GL_COLOR_ARRAY_SIZE	EQU	8081h
GL_COLOR_ARRAY_TYPE	EQU	8082h
GL_COLOR_ARRAY_STRIDE	EQU	8083h
GL_INDEX_ARRAY_TYPE	EQU	8085h
GL_INDEX_ARRAY_STRIDE	EQU	8086h
GL_TEXTURE_COORD_ARRAY_SIZE	EQU	8088h
GL_TEXTURE_COORD_ARRAY_TYPE	EQU	8089h
GL_TEXTURE_COORD_ARRAY_STRIDE	EQU	808Ah
GL_EDGE_FLAG_ARRAY_STRIDE	EQU	808Ch
GL_VERTEX_ARRAY_POINTER	EQU	808Eh
GL_NORMAL_ARRAY_POINTER	EQU	808Fh
GL_COLOR_ARRAY_POINTER	EQU	8090h
GL_INDEX_ARRAY_POINTER	EQU	8091h
GL_TEXTURE_COORD_ARRAY_POINTER	EQU	8092h
GL_EDGE_FLAG_ARRAY_POINTER	EQU	8093h
GL_V2F	EQU	2A20h
GL_V3F	EQU	2A21h
GL_C4UB_V2F	EQU	2A22h
GL_C4UB_V3F	EQU	2A23h
GL_C3F_V3F	EQU	2A24h
GL_N3F_V3F	EQU	2A25h
GL_C4F_N3F_V3F	EQU	2A26h
GL_T2F_V3F	EQU	2A27h
GL_T4F_V4F	EQU	2A28h
GL_T2F_C4UB_V3F	EQU	2A29h
GL_T2F_C3F_V3F	EQU	2A2Ah
GL_T2F_N3F_V3F	EQU	2A2Bh
GL_T2F_C4F_N3F_V3F	EQU	2A2Ch
GL_T4F_C4F_N3F_V4F	EQU	2A2Dh
GL_EXT_vertex_array	EQU	1
GL_EXT_bgra	EQU	1
GL_EXT_paletted_texture	EQU	1
GL_WIN_swap_hint	EQU	1
GL_WIN_draw_range_elements	EQU	1
GL_VERTEX_ARRAY_EXT	EQU	8074h
GL_NORMAL_ARRAY_EXT	EQU	8075h
GL_COLOR_ARRAY_EXT	EQU	8076h
GL_INDEX_ARRAY_EXT	EQU	8077h
GL_TEXTURE_COORD_ARRAY_EXT	EQU	8078h
GL_EDGE_FLAG_ARRAY_EXT	EQU	8079h
GL_VERTEX_ARRAY_SIZE_EXT	EQU	807Ah
GL_VERTEX_ARRAY_TYPE_EXT	EQU	807Bh
GL_VERTEX_ARRAY_STRIDE_EXT	EQU	807Ch
GL_VERTEX_ARRAY_COUNT_EXT	EQU	807Dh
GL_NORMAL_ARRAY_TYPE_EXT	EQU	807Eh
GL_NORMAL_ARRAY_STRIDE_EXT	EQU	807Fh
GL_NORMAL_ARRAY_COUNT_EXT	EQU	8080h
GL_COLOR_ARRAY_SIZE_EXT	EQU	8081h
GL_COLOR_ARRAY_TYPE_EXT	EQU	8082h
GL_COLOR_ARRAY_STRIDE_EXT	EQU	8083h
GL_COLOR_ARRAY_COUNT_EXT	EQU	8084h
GL_INDEX_ARRAY_TYPE_EXT	EQU	8085h
GL_INDEX_ARRAY_STRIDE_EXT	EQU	8086h
GL_INDEX_ARRAY_COUNT_EXT	EQU	8087h
GL_TEXTURE_COORD_ARRAY_SIZE_EXT	EQU	8088h
GL_TEXTURE_COORD_ARRAY_TYPE_EXT	EQU	8089h
GL_TEXTURE_COORD_ARRAY_STRIDE_EXT	EQU	808Ah
GL_TEXTURE_COORD_ARRAY_COUNT_EXT	EQU	808Bh
GL_EDGE_FLAG_ARRAY_STRIDE_EXT	EQU	808Ch
GL_EDGE_FLAG_ARRAY_COUNT_EXT	EQU	808Dh
GL_VERTEX_ARRAY_POINTER_EXT	EQU	808Eh
GL_NORMAL_ARRAY_POINTER_EXT	EQU	808Fh
GL_COLOR_ARRAY_POINTER_EXT	EQU	8090h
GL_INDEX_ARRAY_POINTER_EXT	EQU	8091h
GL_TEXTURE_COORD_ARRAY_POINTER_EXT	EQU	8092h
GL_EDGE_FLAG_ARRAY_POINTER_EXT	EQU	8093h
GL_DOUBLE_EXT	EQU	<GL_DOUBLE>
GL_BGR_EXT	EQU	80E0h
GL_BGRA_EXT	EQU	80E1h
GL_COLOR_TABLE_FORMAT_EXT	EQU	80D8h
GL_COLOR_TABLE_WIDTH_EXT	EQU	80D9h
GL_COLOR_TABLE_RED_SIZE_EXT	EQU	80DAh
GL_COLOR_TABLE_GREEN_SIZE_EXT	EQU	80DBh
GL_COLOR_TABLE_BLUE_SIZE_EXT	EQU	80DCh
GL_COLOR_TABLE_ALPHA_SIZE_EXT	EQU	80DDh
GL_COLOR_TABLE_LUMINANCE_SIZE_EXT	EQU	80DEh
GL_COLOR_TABLE_INTENSITY_SIZE_EXT	EQU	80DFh
GL_COLOR_INDEX1_EXT	EQU	80E2h
GL_COLOR_INDEX2_EXT	EQU	80E3h
GL_COLOR_INDEX4_EXT	EQU	80E4h
GL_COLOR_INDEX8_EXT	EQU	80E5h
GL_COLOR_INDEX12_EXT	EQU	80E6h
GL_COLOR_INDEX16_EXT	EQU	80E7h
GL_MAX_ELEMENTS_VERTICES_WIN	EQU	80E8h
GL_MAX_ELEMENTS_INDICES_WIN	EQU	80E9h
GL_PHONG_WIN	EQU	80EAh
GL_PHONG_HINT_WIN	EQU	80EBh
GL_FOG_SPECULAR_TEXTURE_WIN	EQU	80ECh
GL_LOGIC_OP	EQU	<GL_INDEX_LOGIC_OP>
GL_TEXTURE_COMPONENTS	EQU	<GL_TEXTURE_INTERNAL_FORMAT>
@DefProto WINGDIAPI, glAccum, stdcall, , <:GLenum, :GLfloat>, 8
@DefProto WINGDIAPI, glAlphaFunc, stdcall, , <:GLenum, :GLclampf>, 8
@DefProto WINGDIAPI, glAreTexturesResident, stdcall, , <:GLsizei, :ptr GLuint, :ptr GLboolean>, 12
@DefProto WINGDIAPI, glArrayElement, stdcall, , <:GLint>, 4
@DefProto WINGDIAPI, glBegin, stdcall, , <:GLenum>, 4
@DefProto WINGDIAPI, glBindTexture, stdcall, , <:GLenum, :GLuint>, 8
@DefProto WINGDIAPI, glBitmap, stdcall, , <:GLsizei, :GLsizei, :GLfloat, :GLfloat, :GLfloat, :GLfloat, :ptr GLubyte>, 28
@DefProto WINGDIAPI, glBlendFunc, stdcall, , <:GLenum, :GLenum>, 8
@DefProto WINGDIAPI, glCallList, stdcall, , <:GLuint>, 4
@DefProto WINGDIAPI, glCallLists, stdcall, , <:GLsizei, :GLenum, :ptr GLvoid>, 12
@DefProto WINGDIAPI, glClear, stdcall, , <:GLbitfield>, 4
@DefProto WINGDIAPI, glClearAccum, stdcall, , <:GLfloat, :GLfloat, :GLfloat, :GLfloat>, 16
@DefProto WINGDIAPI, glClearColor, stdcall, , <:GLclampf, :GLclampf, :GLclampf, :GLclampf>, 16
@DefProto WINGDIAPI, glClearDepth, stdcall, , <:GLclampd>, 8
@DefProto WINGDIAPI, glClearIndex, stdcall, , <:GLfloat>, 4
@DefProto WINGDIAPI, glClearStencil, stdcall, , <:GLint>, 4
@DefProto WINGDIAPI, glClipPlane, stdcall, , <:GLenum, :ptr GLdouble>, 8
@DefProto WINGDIAPI, glColor3b, stdcall, , <:GLbyte, :GLbyte, :GLbyte>, 12
@DefProto WINGDIAPI, glColor3bv, stdcall, , <:ptr GLbyte>, 4
@DefProto WINGDIAPI, glColor3d, stdcall, , <:GLdouble, :GLdouble, :GLdouble>, 24
@DefProto WINGDIAPI, glColor3dv, stdcall, , <:ptr GLdouble>, 4
@DefProto WINGDIAPI, glColor3f, stdcall, , <:GLfloat, :GLfloat, :GLfloat>, 12
@DefProto WINGDIAPI, glColor3fv, stdcall, , <:ptr GLfloat>, 4
@DefProto WINGDIAPI, glColor3i, stdcall, , <:GLint, :GLint, :GLint>, 12
@DefProto WINGDIAPI, glColor3iv, stdcall, , <:ptr GLint>, 4
@DefProto WINGDIAPI, glColor3s, stdcall, , <:GLshort, :GLshort, :GLshort>, 12
@DefProto WINGDIAPI, glColor3sv, stdcall, , <:ptr GLshort>, 4
@DefProto WINGDIAPI, glColor3ub, stdcall, , <:GLubyte, :GLubyte, :GLubyte>, 12
@DefProto WINGDIAPI, glColor3ubv, stdcall, , <:ptr GLubyte>, 4
@DefProto WINGDIAPI, glColor3ui, stdcall, , <:GLuint, :GLuint, :GLuint>, 12
@DefProto WINGDIAPI, glColor3uiv, stdcall, , <:ptr GLuint>, 4
@DefProto WINGDIAPI, glColor3us, stdcall, , <:GLushort, :GLushort, :GLushort>, 12
@DefProto WINGDIAPI, glColor3usv, stdcall, , <:ptr GLushort>, 4
@DefProto WINGDIAPI, glColor4b, stdcall, , <:GLbyte, :GLbyte, :GLbyte, :GLbyte>, 16
@DefProto WINGDIAPI, glColor4bv, stdcall, , <:ptr GLbyte>, 4
@DefProto WINGDIAPI, glColor4d, stdcall, , <:GLdouble, :GLdouble, :GLdouble, :GLdouble>, 32
@DefProto WINGDIAPI, glColor4dv, stdcall, , <:ptr GLdouble>, 4
@DefProto WINGDIAPI, glColor4f, stdcall, , <:GLfloat, :GLfloat, :GLfloat, :GLfloat>, 16
@DefProto WINGDIAPI, glColor4fv, stdcall, , <:ptr GLfloat>, 4
@DefProto WINGDIAPI, glColor4i, stdcall, , <:GLint, :GLint, :GLint, :GLint>, 16
@DefProto WINGDIAPI, glColor4iv, stdcall, , <:ptr GLint>, 4
@DefProto WINGDIAPI, glColor4s, stdcall, , <:GLshort, :GLshort, :GLshort, :GLshort>, 16
@DefProto WINGDIAPI, glColor4sv, stdcall, , <:ptr GLshort>, 4
@DefProto WINGDIAPI, glColor4ub, stdcall, , <:GLubyte, :GLubyte, :GLubyte, :GLubyte>, 16
@DefProto WINGDIAPI, glColor4ubv, stdcall, , <:ptr GLubyte>, 4
@DefProto WINGDIAPI, glColor4ui, stdcall, , <:GLuint, :GLuint, :GLuint, :GLuint>, 16
@DefProto WINGDIAPI, glColor4uiv, stdcall, , <:ptr GLuint>, 4
@DefProto WINGDIAPI, glColor4us, stdcall, , <:GLushort, :GLushort, :GLushort, :GLushort>, 16
@DefProto WINGDIAPI, glColor4usv, stdcall, , <:ptr GLushort>, 4
@DefProto WINGDIAPI, glColorMask, stdcall, , <:GLboolean, :GLboolean, :GLboolean, :GLboolean>, 16
@DefProto WINGDIAPI, glColorMaterial, stdcall, , <:GLenum, :GLenum>, 8
@DefProto WINGDIAPI, glColorPointer, stdcall, , <:GLint, :GLenum, :GLsizei, :ptr GLvoid>, 16
@DefProto WINGDIAPI, glCopyPixels, stdcall, , <:GLint, :GLint, :GLsizei, :GLsizei, :GLenum>, 20
@DefProto WINGDIAPI, glCopyTexImage1D, stdcall, , <:GLenum, :GLint, :GLenum, :GLint, :GLint, :GLsizei, :GLint>, 28
@DefProto WINGDIAPI, glCopyTexImage2D, stdcall, , <:GLenum, :GLint, :GLenum, :GLint, :GLint, :GLsizei, :GLsizei, :GLint>, 32
@DefProto WINGDIAPI, glCopyTexSubImage1D, stdcall, , <:GLenum, :GLint, :GLint, :GLint, :GLint, :GLsizei>, 24
@DefProto WINGDIAPI, glCopyTexSubImage2D, stdcall, , <:GLenum, :GLint, :GLint, :GLint, :GLint, :GLint, :GLsizei, :GLsizei>, 32
@DefProto WINGDIAPI, glCullFace, stdcall, , <:GLenum>, 4
@DefProto WINGDIAPI, glDeleteLists, stdcall, , <:GLuint, :GLsizei>, 8
@DefProto WINGDIAPI, glDeleteTextures, stdcall, , <:GLsizei, :ptr GLuint>, 8
@DefProto WINGDIAPI, glDepthFunc, stdcall, , <:GLenum>, 4
@DefProto WINGDIAPI, glDepthMask, stdcall, , <:GLboolean>, 4
@DefProto WINGDIAPI, glDepthRange, stdcall, , <:GLclampd, :GLclampd>, 16
@DefProto WINGDIAPI, glDisable, stdcall, , <:GLenum>, 4
@DefProto WINGDIAPI, glDisableClientState, stdcall, , <:GLenum>, 4
@DefProto WINGDIAPI, glDrawArrays, stdcall, , <:GLenum, :GLint, :GLsizei>, 12
@DefProto WINGDIAPI, glDrawBuffer, stdcall, , <:GLenum>, 4
@DefProto WINGDIAPI, glDrawElements, stdcall, , <:GLenum, :GLsizei, :GLenum, :ptr GLvoid>, 16
@DefProto WINGDIAPI, glDrawPixels, stdcall, , <:GLsizei, :GLsizei, :GLenum, :GLenum, :ptr GLvoid>, 20
@DefProto WINGDIAPI, glEdgeFlag, stdcall, , <:GLboolean>, 4
@DefProto WINGDIAPI, glEdgeFlagPointer, stdcall, , <:GLsizei, :ptr GLvoid>, 8
@DefProto WINGDIAPI, glEdgeFlagv, stdcall, , <:ptr GLboolean>, 4
@DefProto WINGDIAPI, glEnable, stdcall, , <:GLenum>, 4
@DefProto WINGDIAPI, glEnableClientState, stdcall, , <:GLenum>, 4
@DefProto WINGDIAPI, glEnd, stdcall, , <>, 0
@DefProto WINGDIAPI, glEndList, stdcall, , <>, 0
@DefProto WINGDIAPI, glEvalCoord1d, stdcall, , <:GLdouble>, 8
@DefProto WINGDIAPI, glEvalCoord1dv, stdcall, , <:ptr GLdouble>, 4
@DefProto WINGDIAPI, glEvalCoord1f, stdcall, , <:GLfloat>, 4
@DefProto WINGDIAPI, glEvalCoord1fv, stdcall, , <:ptr GLfloat>, 4
@DefProto WINGDIAPI, glEvalCoord2d, stdcall, , <:GLdouble, :GLdouble>, 16
@DefProto WINGDIAPI, glEvalCoord2dv, stdcall, , <:ptr GLdouble>, 4
@DefProto WINGDIAPI, glEvalCoord2f, stdcall, , <:GLfloat, :GLfloat>, 8
@DefProto WINGDIAPI, glEvalCoord2fv, stdcall, , <:ptr GLfloat>, 4
@DefProto WINGDIAPI, glEvalMesh1, stdcall, , <:GLenum, :GLint, :GLint>, 12
@DefProto WINGDIAPI, glEvalMesh2, stdcall, , <:GLenum, :GLint, :GLint, :GLint, :GLint>, 20
@DefProto WINGDIAPI, glEvalPoint1, stdcall, , <:GLint>, 4
@DefProto WINGDIAPI, glEvalPoint2, stdcall, , <:GLint, :GLint>, 8
@DefProto WINGDIAPI, glFeedbackBuffer, stdcall, , <:GLsizei, :GLenum, :ptr GLfloat>, 12
@DefProto WINGDIAPI, glFinish, stdcall, , <>, 0
@DefProto WINGDIAPI, glFlush, stdcall, , <>, 0
@DefProto WINGDIAPI, glFogf, stdcall, , <:GLenum, :GLfloat>, 8
@DefProto WINGDIAPI, glFogfv, stdcall, , <:GLenum, :ptr GLfloat>, 8
@DefProto WINGDIAPI, glFogi, stdcall, , <:GLenum, :GLint>, 8
@DefProto WINGDIAPI, glFogiv, stdcall, , <:GLenum, :ptr GLint>, 8
@DefProto WINGDIAPI, glFrontFace, stdcall, , <:GLenum>, 4
@DefProto WINGDIAPI, glFrustum, stdcall, , <:GLdouble, :GLdouble, :GLdouble, :GLdouble, :GLdouble, :GLdouble>, 48
@DefProto WINGDIAPI, glGenLists, stdcall, , <:GLsizei>, 4
@DefProto WINGDIAPI, glGenTextures, stdcall, , <:GLsizei, :ptr GLuint>, 8
@DefProto WINGDIAPI, glGetBooleanv, stdcall, , <:GLenum, :ptr GLboolean>, 8
@DefProto WINGDIAPI, glGetClipPlane, stdcall, , <:GLenum, :ptr GLdouble>, 8
@DefProto WINGDIAPI, glGetDoublev, stdcall, , <:GLenum, :ptr GLdouble>, 8
@DefProto WINGDIAPI, glGetError, stdcall, , <>, 0
@DefProto WINGDIAPI, glGetFloatv, stdcall, , <:GLenum, :ptr GLfloat>, 8
@DefProto WINGDIAPI, glGetIntegerv, stdcall, , <:GLenum, :ptr GLint>, 8
@DefProto WINGDIAPI, glGetLightfv, stdcall, , <:GLenum, :GLenum, :ptr GLfloat>, 12
@DefProto WINGDIAPI, glGetLightiv, stdcall, , <:GLenum, :GLenum, :ptr GLint>, 12
@DefProto WINGDIAPI, glGetMapdv, stdcall, , <:GLenum, :GLenum, :ptr GLdouble>, 12
@DefProto WINGDIAPI, glGetMapfv, stdcall, , <:GLenum, :GLenum, :ptr GLfloat>, 12
@DefProto WINGDIAPI, glGetMapiv, stdcall, , <:GLenum, :GLenum, :ptr GLint>, 12
@DefProto WINGDIAPI, glGetMaterialfv, stdcall, , <:GLenum, :GLenum, :ptr GLfloat>, 12
@DefProto WINGDIAPI, glGetMaterialiv, stdcall, , <:GLenum, :GLenum, :ptr GLint>, 12
@DefProto WINGDIAPI, glGetPixelMapfv, stdcall, , <:GLenum, :ptr GLfloat>, 8
@DefProto WINGDIAPI, glGetPixelMapuiv, stdcall, , <:GLenum, :ptr GLuint>, 8
@DefProto WINGDIAPI, glGetPixelMapusv, stdcall, , <:GLenum, :ptr GLushort>, 8
@DefProto WINGDIAPI, glGetPointerv, stdcall, , <:GLenum, :ptr ptr GLvoid>, 8
@DefProto WINGDIAPI, glGetPolygonStipple, stdcall, , <:ptr GLubyte>, 4
@DefProto WINGDIAPI, glGetString, stdcall, , <:GLenum>, 4
@DefProto WINGDIAPI, glGetTexEnvfv, stdcall, , <:GLenum, :GLenum, :ptr GLfloat>, 12
@DefProto WINGDIAPI, glGetTexEnviv, stdcall, , <:GLenum, :GLenum, :ptr GLint>, 12
@DefProto WINGDIAPI, glGetTexGendv, stdcall, , <:GLenum, :GLenum, :ptr GLdouble>, 12
@DefProto WINGDIAPI, glGetTexGenfv, stdcall, , <:GLenum, :GLenum, :ptr GLfloat>, 12
@DefProto WINGDIAPI, glGetTexGeniv, stdcall, , <:GLenum, :GLenum, :ptr GLint>, 12
@DefProto WINGDIAPI, glGetTexImage, stdcall, , <:GLenum, :GLint, :GLenum, :GLenum, :ptr GLvoid>, 20
@DefProto WINGDIAPI, glGetTexLevelParameterfv, stdcall, , <:GLenum, :GLint, :GLenum, :ptr GLfloat>, 16
@DefProto WINGDIAPI, glGetTexLevelParameteriv, stdcall, , <:GLenum, :GLint, :GLenum, :ptr GLint>, 16
@DefProto WINGDIAPI, glGetTexParameterfv, stdcall, , <:GLenum, :GLenum, :ptr GLfloat>, 12
@DefProto WINGDIAPI, glGetTexParameteriv, stdcall, , <:GLenum, :GLenum, :ptr GLint>, 12
@DefProto WINGDIAPI, glHint, stdcall, , <:GLenum, :GLenum>, 8
@DefProto WINGDIAPI, glIndexMask, stdcall, , <:GLuint>, 4
@DefProto WINGDIAPI, glIndexPointer, stdcall, , <:GLenum, :GLsizei, :ptr GLvoid>, 12
@DefProto WINGDIAPI, glIndexd, stdcall, , <:GLdouble>, 8
@DefProto WINGDIAPI, glIndexdv, stdcall, , <:ptr GLdouble>, 4
@DefProto WINGDIAPI, glIndexf, stdcall, , <:GLfloat>, 4
@DefProto WINGDIAPI, glIndexfv, stdcall, , <:ptr GLfloat>, 4
@DefProto WINGDIAPI, glIndexi, stdcall, , <:GLint>, 4
@DefProto WINGDIAPI, glIndexiv, stdcall, , <:ptr GLint>, 4
@DefProto WINGDIAPI, glIndexs, stdcall, , <:GLshort>, 4
@DefProto WINGDIAPI, glIndexsv, stdcall, , <:ptr GLshort>, 4
@DefProto WINGDIAPI, glIndexub, stdcall, , <:GLubyte>, 4
@DefProto WINGDIAPI, glIndexubv, stdcall, , <:ptr GLubyte>, 4
@DefProto WINGDIAPI, glInitNames, stdcall, , <>, 0
@DefProto WINGDIAPI, glInterleavedArrays, stdcall, , <:GLenum, :GLsizei, :ptr GLvoid>, 12
@DefProto WINGDIAPI, glIsEnabled, stdcall, , <:GLenum>, 4
@DefProto WINGDIAPI, glIsList, stdcall, , <:GLuint>, 4
@DefProto WINGDIAPI, glIsTexture, stdcall, , <:GLuint>, 4
@DefProto WINGDIAPI, glLightModelf, stdcall, , <:GLenum, :GLfloat>, 8
@DefProto WINGDIAPI, glLightModelfv, stdcall, , <:GLenum, :ptr GLfloat>, 8
@DefProto WINGDIAPI, glLightModeli, stdcall, , <:GLenum, :GLint>, 8
@DefProto WINGDIAPI, glLightModeliv, stdcall, , <:GLenum, :ptr GLint>, 8
@DefProto WINGDIAPI, glLightf, stdcall, , <:GLenum, :GLenum, :GLfloat>, 12
@DefProto WINGDIAPI, glLightfv, stdcall, , <:GLenum, :GLenum, :ptr GLfloat>, 12
@DefProto WINGDIAPI, glLighti, stdcall, , <:GLenum, :GLenum, :GLint>, 12
@DefProto WINGDIAPI, glLightiv, stdcall, , <:GLenum, :GLenum, :ptr GLint>, 12
@DefProto WINGDIAPI, glLineStipple, stdcall, , <:GLint, :GLushort>, 8
@DefProto WINGDIAPI, glLineWidth, stdcall, , <:GLfloat>, 4
@DefProto WINGDIAPI, glListBase, stdcall, , <:GLuint>, 4
@DefProto WINGDIAPI, glLoadIdentity, stdcall, , <>, 0
@DefProto WINGDIAPI, glLoadMatrixd, stdcall, , <:ptr GLdouble>, 4
@DefProto WINGDIAPI, glLoadMatrixf, stdcall, , <:ptr GLfloat>, 4
@DefProto WINGDIAPI, glLoadName, stdcall, , <:GLuint>, 4
@DefProto WINGDIAPI, glLogicOp, stdcall, , <:GLenum>, 4
@DefProto WINGDIAPI, glMap1d, stdcall, , <:GLenum, :GLdouble, :GLdouble, :GLint, :GLint, :ptr GLdouble>, 32
@DefProto WINGDIAPI, glMap1f, stdcall, , <:GLenum, :GLfloat, :GLfloat, :GLint, :GLint, :ptr GLfloat>, 24
@DefProto WINGDIAPI, glMap2d, stdcall, , <:GLenum, :GLdouble, :GLdouble, :GLint, :GLint, :GLdouble, :GLdouble, :GLint, :GLint, :ptr GLdouble>, 56
@DefProto WINGDIAPI, glMap2f, stdcall, , <:GLenum, :GLfloat, :GLfloat, :GLint, :GLint, :GLfloat, :GLfloat, :GLint, :GLint, :ptr GLfloat>, 40
@DefProto WINGDIAPI, glMapGrid1d, stdcall, , <:GLint, :GLdouble, :GLdouble>, 20
@DefProto WINGDIAPI, glMapGrid1f, stdcall, , <:GLint, :GLfloat, :GLfloat>, 12
@DefProto WINGDIAPI, glMapGrid2d, stdcall, , <:GLint, :GLdouble, :GLdouble, :GLint, :GLdouble, :GLdouble>, 40
@DefProto WINGDIAPI, glMapGrid2f, stdcall, , <:GLint, :GLfloat, :GLfloat, :GLint, :GLfloat, :GLfloat>, 24
@DefProto WINGDIAPI, glMaterialf, stdcall, , <:GLenum, :GLenum, :GLfloat>, 12
@DefProto WINGDIAPI, glMaterialfv, stdcall, , <:GLenum, :GLenum, :ptr GLfloat>, 12
@DefProto WINGDIAPI, glMateriali, stdcall, , <:GLenum, :GLenum, :GLint>, 12
@DefProto WINGDIAPI, glMaterialiv, stdcall, , <:GLenum, :GLenum, :ptr GLint>, 12
@DefProto WINGDIAPI, glMatrixMode, stdcall, , <:GLenum>, 4
@DefProto WINGDIAPI, glMultMatrixd, stdcall, , <:ptr GLdouble>, 4
@DefProto WINGDIAPI, glMultMatrixf, stdcall, , <:ptr GLfloat>, 4
@DefProto WINGDIAPI, glNewList, stdcall, , <:GLuint, :GLenum>, 8
@DefProto WINGDIAPI, glNormal3b, stdcall, , <:GLbyte, :GLbyte, :GLbyte>, 12
@DefProto WINGDIAPI, glNormal3bv, stdcall, , <:ptr GLbyte>, 4
@DefProto WINGDIAPI, glNormal3d, stdcall, , <:GLdouble, :GLdouble, :GLdouble>, 24
@DefProto WINGDIAPI, glNormal3dv, stdcall, , <:ptr GLdouble>, 4
@DefProto WINGDIAPI, glNormal3f, stdcall, , <:GLfloat, :GLfloat, :GLfloat>, 12
@DefProto WINGDIAPI, glNormal3fv, stdcall, , <:ptr GLfloat>, 4
@DefProto WINGDIAPI, glNormal3i, stdcall, , <:GLint, :GLint, :GLint>, 12
@DefProto WINGDIAPI, glNormal3iv, stdcall, , <:ptr GLint>, 4
@DefProto WINGDIAPI, glNormal3s, stdcall, , <:GLshort, :GLshort, :GLshort>, 12
@DefProto WINGDIAPI, glNormal3sv, stdcall, , <:ptr GLshort>, 4
@DefProto WINGDIAPI, glNormalPointer, stdcall, , <:GLenum, :GLsizei, :ptr GLvoid>, 12
@DefProto WINGDIAPI, glOrtho, stdcall, , <:GLdouble, :GLdouble, :GLdouble, :GLdouble, :GLdouble, :GLdouble>, 48
@DefProto WINGDIAPI, glPassThrough, stdcall, , <:GLfloat>, 4
@DefProto WINGDIAPI, glPixelMapfv, stdcall, , <:GLenum, :GLsizei, :ptr GLfloat>, 12
@DefProto WINGDIAPI, glPixelMapuiv, stdcall, , <:GLenum, :GLsizei, :ptr GLuint>, 12
@DefProto WINGDIAPI, glPixelMapusv, stdcall, , <:GLenum, :GLsizei, :ptr GLushort>, 12
@DefProto WINGDIAPI, glPixelStoref, stdcall, , <:GLenum, :GLfloat>, 8
@DefProto WINGDIAPI, glPixelStorei, stdcall, , <:GLenum, :GLint>, 8
@DefProto WINGDIAPI, glPixelTransferf, stdcall, , <:GLenum, :GLfloat>, 8
@DefProto WINGDIAPI, glPixelTransferi, stdcall, , <:GLenum, :GLint>, 8
@DefProto WINGDIAPI, glPixelZoom, stdcall, , <:GLfloat, :GLfloat>, 8
@DefProto WINGDIAPI, glPointSize, stdcall, , <:GLfloat>, 4
@DefProto WINGDIAPI, glPolygonMode, stdcall, , <:GLenum, :GLenum>, 8
@DefProto WINGDIAPI, glPolygonOffset, stdcall, , <:GLfloat, :GLfloat>, 8
@DefProto WINGDIAPI, glPolygonStipple, stdcall, , <:ptr GLubyte>, 4
@DefProto WINGDIAPI, glPopAttrib, stdcall, , <>, 0
@DefProto WINGDIAPI, glPopClientAttrib, stdcall, , <>, 0
@DefProto WINGDIAPI, glPopMatrix, stdcall, , <>, 0
@DefProto WINGDIAPI, glPopName, stdcall, , <>, 0
@DefProto WINGDIAPI, glPrioritizeTextures, stdcall, , <:GLsizei, :ptr GLuint, :ptr GLclampf>, 12
@DefProto WINGDIAPI, glPushAttrib, stdcall, , <:GLbitfield>, 4
@DefProto WINGDIAPI, glPushClientAttrib, stdcall, , <:GLbitfield>, 4
@DefProto WINGDIAPI, glPushMatrix, stdcall, , <>, 0
@DefProto WINGDIAPI, glPushName, stdcall, , <:GLuint>, 4
@DefProto WINGDIAPI, glRasterPos2d, stdcall, , <:GLdouble, :GLdouble>, 16
@DefProto WINGDIAPI, glRasterPos2dv, stdcall, , <:ptr GLdouble>, 4
@DefProto WINGDIAPI, glRasterPos2f, stdcall, , <:GLfloat, :GLfloat>, 8
@DefProto WINGDIAPI, glRasterPos2fv, stdcall, , <:ptr GLfloat>, 4
@DefProto WINGDIAPI, glRasterPos2i, stdcall, , <:GLint, :GLint>, 8
@DefProto WINGDIAPI, glRasterPos2iv, stdcall, , <:ptr GLint>, 4
@DefProto WINGDIAPI, glRasterPos2s, stdcall, , <:GLshort, :GLshort>, 8
@DefProto WINGDIAPI, glRasterPos2sv, stdcall, , <:ptr GLshort>, 4
@DefProto WINGDIAPI, glRasterPos3d, stdcall, , <:GLdouble, :GLdouble, :GLdouble>, 24
@DefProto WINGDIAPI, glRasterPos3dv, stdcall, , <:ptr GLdouble>, 4
@DefProto WINGDIAPI, glRasterPos3f, stdcall, , <:GLfloat, :GLfloat, :GLfloat>, 12
@DefProto WINGDIAPI, glRasterPos3fv, stdcall, , <:ptr GLfloat>, 4
@DefProto WINGDIAPI, glRasterPos3i, stdcall, , <:GLint, :GLint, :GLint>, 12
@DefProto WINGDIAPI, glRasterPos3iv, stdcall, , <:ptr GLint>, 4
@DefProto WINGDIAPI, glRasterPos3s, stdcall, , <:GLshort, :GLshort, :GLshort>, 12
@DefProto WINGDIAPI, glRasterPos3sv, stdcall, , <:ptr GLshort>, 4
@DefProto WINGDIAPI, glRasterPos4d, stdcall, , <:GLdouble, :GLdouble, :GLdouble, :GLdouble>, 32
@DefProto WINGDIAPI, glRasterPos4dv, stdcall, , <:ptr GLdouble>, 4
@DefProto WINGDIAPI, glRasterPos4f, stdcall, , <:GLfloat, :GLfloat, :GLfloat, :GLfloat>, 16
@DefProto WINGDIAPI, glRasterPos4fv, stdcall, , <:ptr GLfloat>, 4
@DefProto WINGDIAPI, glRasterPos4i, stdcall, , <:GLint, :GLint, :GLint, :GLint>, 16
@DefProto WINGDIAPI, glRasterPos4iv, stdcall, , <:ptr GLint>, 4
@DefProto WINGDIAPI, glRasterPos4s, stdcall, , <:GLshort, :GLshort, :GLshort, :GLshort>, 16
@DefProto WINGDIAPI, glRasterPos4sv, stdcall, , <:ptr GLshort>, 4
@DefProto WINGDIAPI, glReadBuffer, stdcall, , <:GLenum>, 4
@DefProto WINGDIAPI, glReadPixels, stdcall, , <:GLint, :GLint, :GLsizei, :GLsizei, :GLenum, :GLenum, :ptr GLvoid>, 28
@DefProto WINGDIAPI, glRectd, stdcall, , <:GLdouble, :GLdouble, :GLdouble, :GLdouble>, 32
@DefProto WINGDIAPI, glRectdv, stdcall, , <:ptr GLdouble, :ptr GLdouble>, 8
@DefProto WINGDIAPI, glRectf, stdcall, , <:GLfloat, :GLfloat, :GLfloat, :GLfloat>, 16
@DefProto WINGDIAPI, glRectfv, stdcall, , <:ptr GLfloat, :ptr GLfloat>, 8
@DefProto WINGDIAPI, glRecti, stdcall, , <:GLint, :GLint, :GLint, :GLint>, 16
@DefProto WINGDIAPI, glRectiv, stdcall, , <:ptr GLint, :ptr GLint>, 8
@DefProto WINGDIAPI, glRects, stdcall, , <:GLshort, :GLshort, :GLshort, :GLshort>, 16
@DefProto WINGDIAPI, glRectsv, stdcall, , <:ptr GLshort, :ptr GLshort>, 8
@DefProto WINGDIAPI, glRenderMode, stdcall, , <:GLenum>, 4
@DefProto WINGDIAPI, glRotated, stdcall, , <:GLdouble, :GLdouble, :GLdouble, :GLdouble>, 32
@DefProto WINGDIAPI, glRotatef, stdcall, , <:GLfloat, :GLfloat, :GLfloat, :GLfloat>, 16
@DefProto WINGDIAPI, glScaled, stdcall, , <:GLdouble, :GLdouble, :GLdouble>, 24
@DefProto WINGDIAPI, glScalef, stdcall, , <:GLfloat, :GLfloat, :GLfloat>, 12
@DefProto WINGDIAPI, glScissor, stdcall, , <:GLint, :GLint, :GLsizei, :GLsizei>, 16
@DefProto WINGDIAPI, glSelectBuffer, stdcall, , <:GLsizei, :ptr GLuint>, 8
@DefProto WINGDIAPI, glShadeModel, stdcall, , <:GLenum>, 4
@DefProto WINGDIAPI, glStencilFunc, stdcall, , <:GLenum, :GLint, :GLuint>, 12
@DefProto WINGDIAPI, glStencilMask, stdcall, , <:GLuint>, 4
@DefProto WINGDIAPI, glStencilOp, stdcall, , <:GLenum, :GLenum, :GLenum>, 12
@DefProto WINGDIAPI, glTexCoord1d, stdcall, , <:GLdouble>, 8
@DefProto WINGDIAPI, glTexCoord1dv, stdcall, , <:ptr GLdouble>, 4
@DefProto WINGDIAPI, glTexCoord1f, stdcall, , <:GLfloat>, 4
@DefProto WINGDIAPI, glTexCoord1fv, stdcall, , <:ptr GLfloat>, 4
@DefProto WINGDIAPI, glTexCoord1i, stdcall, , <:GLint>, 4
@DefProto WINGDIAPI, glTexCoord1iv, stdcall, , <:ptr GLint>, 4
@DefProto WINGDIAPI, glTexCoord1s, stdcall, , <:GLshort>, 4
@DefProto WINGDIAPI, glTexCoord1sv, stdcall, , <:ptr GLshort>, 4
@DefProto WINGDIAPI, glTexCoord2d, stdcall, , <:GLdouble, :GLdouble>, 16
@DefProto WINGDIAPI, glTexCoord2dv, stdcall, , <:ptr GLdouble>, 4
@DefProto WINGDIAPI, glTexCoord2f, stdcall, , <:GLfloat, :GLfloat>, 8
@DefProto WINGDIAPI, glTexCoord2fv, stdcall, , <:ptr GLfloat>, 4
@DefProto WINGDIAPI, glTexCoord2i, stdcall, , <:GLint, :GLint>, 8
@DefProto WINGDIAPI, glTexCoord2iv, stdcall, , <:ptr GLint>, 4
@DefProto WINGDIAPI, glTexCoord2s, stdcall, , <:GLshort, :GLshort>, 8
@DefProto WINGDIAPI, glTexCoord2sv, stdcall, , <:ptr GLshort>, 4
@DefProto WINGDIAPI, glTexCoord3d, stdcall, , <:GLdouble, :GLdouble, :GLdouble>, 24
@DefProto WINGDIAPI, glTexCoord3dv, stdcall, , <:ptr GLdouble>, 4
@DefProto WINGDIAPI, glTexCoord3f, stdcall, , <:GLfloat, :GLfloat, :GLfloat>, 12
@DefProto WINGDIAPI, glTexCoord3fv, stdcall, , <:ptr GLfloat>, 4
@DefProto WINGDIAPI, glTexCoord3i, stdcall, , <:GLint, :GLint, :GLint>, 12
@DefProto WINGDIAPI, glTexCoord3iv, stdcall, , <:ptr GLint>, 4
@DefProto WINGDIAPI, glTexCoord3s, stdcall, , <:GLshort, :GLshort, :GLshort>, 12
@DefProto WINGDIAPI, glTexCoord3sv, stdcall, , <:ptr GLshort>, 4
@DefProto WINGDIAPI, glTexCoord4d, stdcall, , <:GLdouble, :GLdouble, :GLdouble, :GLdouble>, 32
@DefProto WINGDIAPI, glTexCoord4dv, stdcall, , <:ptr GLdouble>, 4
@DefProto WINGDIAPI, glTexCoord4f, stdcall, , <:GLfloat, :GLfloat, :GLfloat, :GLfloat>, 16
@DefProto WINGDIAPI, glTexCoord4fv, stdcall, , <:ptr GLfloat>, 4
@DefProto WINGDIAPI, glTexCoord4i, stdcall, , <:GLint, :GLint, :GLint, :GLint>, 16
@DefProto WINGDIAPI, glTexCoord4iv, stdcall, , <:ptr GLint>, 4
@DefProto WINGDIAPI, glTexCoord4s, stdcall, , <:GLshort, :GLshort, :GLshort, :GLshort>, 16
@DefProto WINGDIAPI, glTexCoord4sv, stdcall, , <:ptr GLshort>, 4
@DefProto WINGDIAPI, glTexCoordPointer, stdcall, , <:GLint, :GLenum, :GLsizei, :ptr GLvoid>, 16
@DefProto WINGDIAPI, glTexEnvf, stdcall, , <:GLenum, :GLenum, :GLfloat>, 12
@DefProto WINGDIAPI, glTexEnvfv, stdcall, , <:GLenum, :GLenum, :ptr GLfloat>, 12
@DefProto WINGDIAPI, glTexEnvi, stdcall, , <:GLenum, :GLenum, :GLint>, 12
@DefProto WINGDIAPI, glTexEnviv, stdcall, , <:GLenum, :GLenum, :ptr GLint>, 12
@DefProto WINGDIAPI, glTexGend, stdcall, , <:GLenum, :GLenum, :GLdouble>, 16
@DefProto WINGDIAPI, glTexGendv, stdcall, , <:GLenum, :GLenum, :ptr GLdouble>, 12
@DefProto WINGDIAPI, glTexGenf, stdcall, , <:GLenum, :GLenum, :GLfloat>, 12
@DefProto WINGDIAPI, glTexGenfv, stdcall, , <:GLenum, :GLenum, :ptr GLfloat>, 12
@DefProto WINGDIAPI, glTexGeni, stdcall, , <:GLenum, :GLenum, :GLint>, 12
@DefProto WINGDIAPI, glTexGeniv, stdcall, , <:GLenum, :GLenum, :ptr GLint>, 12
@DefProto WINGDIAPI, glTexImage1D, stdcall, , <:GLenum, :GLint, :GLint, :GLsizei, :GLint, :GLenum, :GLenum, :ptr GLvoid>, 32
@DefProto WINGDIAPI, glTexImage2D, stdcall, , <:GLenum, :GLint, :GLint, :GLsizei, :GLsizei, :GLint, :GLenum, :GLenum, :ptr GLvoid>, 36
@DefProto WINGDIAPI, glTexParameterf, stdcall, , <:GLenum, :GLenum, :GLfloat>, 12
@DefProto WINGDIAPI, glTexParameterfv, stdcall, , <:GLenum, :GLenum, :ptr GLfloat>, 12
@DefProto WINGDIAPI, glTexParameteri, stdcall, , <:GLenum, :GLenum, :GLint>, 12
@DefProto WINGDIAPI, glTexParameteriv, stdcall, , <:GLenum, :GLenum, :ptr GLint>, 12
@DefProto WINGDIAPI, glTexSubImage1D, stdcall, , <:GLenum, :GLint, :GLint, :GLsizei, :GLenum, :GLenum, :ptr GLvoid>, 28
@DefProto WINGDIAPI, glTexSubImage2D, stdcall, , <:GLenum, :GLint, :GLint, :GLint, :GLsizei, :GLsizei, :GLenum, :GLenum, :ptr GLvoid>, 36
@DefProto WINGDIAPI, glTranslated, stdcall, , <:GLdouble, :GLdouble, :GLdouble>, 24
@DefProto WINGDIAPI, glTranslatef, stdcall, , <:GLfloat, :GLfloat, :GLfloat>, 12
@DefProto WINGDIAPI, glVertex2d, stdcall, , <:GLdouble, :GLdouble>, 16
@DefProto WINGDIAPI, glVertex2dv, stdcall, , <:ptr GLdouble>, 4
@DefProto WINGDIAPI, glVertex2f, stdcall, , <:GLfloat, :GLfloat>, 8
@DefProto WINGDIAPI, glVertex2fv, stdcall, , <:ptr GLfloat>, 4
@DefProto WINGDIAPI, glVertex2i, stdcall, , <:GLint, :GLint>, 8
@DefProto WINGDIAPI, glVertex2iv, stdcall, , <:ptr GLint>, 4
@DefProto WINGDIAPI, glVertex2s, stdcall, , <:GLshort, :GLshort>, 8
@DefProto WINGDIAPI, glVertex2sv, stdcall, , <:ptr GLshort>, 4
@DefProto WINGDIAPI, glVertex3d, stdcall, , <:GLdouble, :GLdouble, :GLdouble>, 24
@DefProto WINGDIAPI, glVertex3dv, stdcall, , <:ptr GLdouble>, 4
@DefProto WINGDIAPI, glVertex3f, stdcall, , <:GLfloat, :GLfloat, :GLfloat>, 12
@DefProto WINGDIAPI, glVertex3fv, stdcall, , <:ptr GLfloat>, 4
@DefProto WINGDIAPI, glVertex3i, stdcall, , <:GLint, :GLint, :GLint>, 12
@DefProto WINGDIAPI, glVertex3iv, stdcall, , <:ptr GLint>, 4
@DefProto WINGDIAPI, glVertex3s, stdcall, , <:GLshort, :GLshort, :GLshort>, 12
@DefProto WINGDIAPI, glVertex3sv, stdcall, , <:ptr GLshort>, 4
@DefProto WINGDIAPI, glVertex4d, stdcall, , <:GLdouble, :GLdouble, :GLdouble, :GLdouble>, 32
@DefProto WINGDIAPI, glVertex4dv, stdcall, , <:ptr GLdouble>, 4
@DefProto WINGDIAPI, glVertex4f, stdcall, , <:GLfloat, :GLfloat, :GLfloat, :GLfloat>, 16
@DefProto WINGDIAPI, glVertex4fv, stdcall, , <:ptr GLfloat>, 4
@DefProto WINGDIAPI, glVertex4i, stdcall, , <:GLint, :GLint, :GLint, :GLint>, 16
@DefProto WINGDIAPI, glVertex4iv, stdcall, , <:ptr GLint>, 4
@DefProto WINGDIAPI, glVertex4s, stdcall, , <:GLshort, :GLshort, :GLshort, :GLshort>, 16
@DefProto WINGDIAPI, glVertex4sv, stdcall, , <:ptr GLshort>, 4
@DefProto WINGDIAPI, glVertexPointer, stdcall, , <:GLint, :GLenum, :GLsizei, :ptr GLvoid>, 16
@DefProto WINGDIAPI, glViewport, stdcall, , <:GLint, :GLint, :GLsizei, :GLsizei>, 16
proto_PFNGLARRAYELEMENTEXTPROC typedef proto stdcall :GLint
PFNGLARRAYELEMENTEXTPROC typedef ptr proto_PFNGLARRAYELEMENTEXTPROC
proto_PFNGLDRAWARRAYSEXTPROC typedef proto stdcall :GLenum,:GLint,:GLsizei
PFNGLDRAWARRAYSEXTPROC typedef ptr proto_PFNGLDRAWARRAYSEXTPROC
proto_PFNGLVERTEXPOINTEREXTPROC typedef proto stdcall :GLint,:GLenum,:GLsizei,:GLsizei,:ptr GLvoid
PFNGLVERTEXPOINTEREXTPROC typedef ptr proto_PFNGLVERTEXPOINTEREXTPROC
proto_PFNGLNORMALPOINTEREXTPROC typedef proto stdcall :GLenum,:GLsizei,:GLsizei,:ptr GLvoid
PFNGLNORMALPOINTEREXTPROC typedef ptr proto_PFNGLNORMALPOINTEREXTPROC
proto_PFNGLCOLORPOINTEREXTPROC typedef proto stdcall :GLint,:GLenum,:GLsizei,:GLsizei,:ptr GLvoid
PFNGLCOLORPOINTEREXTPROC typedef ptr proto_PFNGLCOLORPOINTEREXTPROC
proto_PFNGLINDEXPOINTEREXTPROC typedef proto stdcall :GLenum,:GLsizei,:GLsizei,:ptr GLvoid
PFNGLINDEXPOINTEREXTPROC typedef ptr proto_PFNGLINDEXPOINTEREXTPROC
proto_PFNGLTEXCOORDPOINTEREXTPROC typedef proto stdcall :GLint,:GLenum,:GLsizei,:GLsizei,:ptr GLvoid
PFNGLTEXCOORDPOINTEREXTPROC typedef ptr proto_PFNGLTEXCOORDPOINTEREXTPROC
proto_PFNGLEDGEFLAGPOINTEREXTPROC typedef proto stdcall :GLsizei,:GLsizei,:ptr GLboolean
PFNGLEDGEFLAGPOINTEREXTPROC typedef ptr proto_PFNGLEDGEFLAGPOINTEREXTPROC
proto_PFNGLGETPOINTERVEXTPROC typedef proto stdcall :GLenum,:ptr ptr GLvoid
PFNGLGETPOINTERVEXTPROC typedef ptr proto_PFNGLGETPOINTERVEXTPROC
proto_PFNGLARRAYELEMENTARRAYEXTPROC typedef proto stdcall :GLenum,:GLsizei,:ptr GLvoid
PFNGLARRAYELEMENTARRAYEXTPROC typedef ptr proto_PFNGLARRAYELEMENTARRAYEXTPROC
proto_PFNGLDRAWRANGEELEMENTSWINPROC typedef proto stdcall :GLenum,:GLuint,:GLuint,:GLsizei,:GLenum,:ptr GLvoid
PFNGLDRAWRANGEELEMENTSWINPROC typedef ptr proto_PFNGLDRAWRANGEELEMENTSWINPROC
proto_PFNGLADDSWAPHINTRECTWINPROC typedef proto stdcall :GLint,:GLint,:GLsizei,:GLsizei
PFNGLADDSWAPHINTRECTWINPROC typedef ptr proto_PFNGLADDSWAPHINTRECTWINPROC
proto_PFNGLCOLORTABLEEXTPROC typedef proto stdcall :GLenum,:GLenum,:GLsizei,:GLenum,:GLenum,:ptr GLvoid
PFNGLCOLORTABLEEXTPROC typedef ptr proto_PFNGLCOLORTABLEEXTPROC
proto_PFNGLCOLORSUBTABLEEXTPROC typedef proto stdcall :GLenum,:GLsizei,:GLsizei,:GLenum,:GLenum,:ptr GLvoid
PFNGLCOLORSUBTABLEEXTPROC typedef ptr proto_PFNGLCOLORSUBTABLEEXTPROC
proto_PFNGLGETCOLORTABLEEXTPROC typedef proto stdcall :GLenum,:GLenum,:GLenum,:ptr GLvoid
PFNGLGETCOLORTABLEEXTPROC typedef ptr proto_PFNGLGETCOLORTABLEEXTPROC
proto_PFNGLGETCOLORTABLEPARAMETERIVEXTPROC typedef proto stdcall :GLenum,:GLenum,:ptr GLint
PFNGLGETCOLORTABLEPARAMETERIVEXTPROC typedef ptr proto_PFNGLGETCOLORTABLEPARAMETERIVEXTPROC
proto_PFNGLGETCOLORTABLEPARAMETERFVEXTPROC typedef proto stdcall :GLenum,:GLenum,:ptr GLfloat
PFNGLGETCOLORTABLEPARAMETERFVEXTPROC typedef ptr proto_PFNGLGETCOLORTABLEPARAMETERFVEXTPROC
ifdef __cplusplus
;}
endif 
endif 
endif 

;--- errors: 0
;--- end of file ---
