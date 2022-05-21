;--- include file created by h2incx v0.99.16, copyright 2005 japheth
;--- source file: D:\Microsoft SDK\Include\GL\GLU.h, last modified: 4/11/2001 14:40

ifndef __glu_h__
ifndef __GLU_H__
__glu_h__	EQU	<>
__GLU_H__	EQU	<>
	include GL.INC
ifdef __cplusplus
;extern "C"
;{
endif 
ifdef UNICODE
gluErrorStringWIN macro errCode
	exitm <( gluErrorUnicodeStringEXT ( errCode ) ) >
	endm
else 
gluErrorStringWIN macro errCode
	exitm <( gluErrorString ( errCode ) ) >
	endm
endif 
gluErrorString proto stdcall :GLenum
gluErrorUnicodeStringEXT proto stdcall :GLenum
gluGetString proto stdcall :GLenum
gluOrtho2D proto stdcall :GLdouble, :GLdouble, :GLdouble, :GLdouble
gluPerspective proto stdcall :GLdouble, :GLdouble, :GLdouble, :GLdouble
gluPickMatrix proto stdcall :GLdouble, :GLdouble, :GLdouble, :GLdouble, :ptr GLint
gluLookAt proto stdcall :GLdouble, :GLdouble, :GLdouble, :GLdouble, :GLdouble, :GLdouble, :GLdouble, :GLdouble, :GLdouble
gluProject proto stdcall :GLdouble, :GLdouble, :GLdouble, :ptr GLdouble, :ptr GLdouble, :ptr GLint, :ptr GLdouble, :ptr GLdouble, :ptr GLdouble
gluUnProject proto stdcall :GLdouble, :GLdouble, :GLdouble, :ptr GLdouble, :ptr GLdouble, :ptr GLint, :ptr GLdouble, :ptr GLdouble, :ptr GLdouble
gluScaleImage proto stdcall :GLenum, :GLint, :GLint, :GLenum, :ptr , :GLint, :GLint, :GLenum, :ptr 
gluBuild1DMipmaps proto stdcall :GLenum, :GLint, :GLint, :GLenum, :GLenum, :ptr 
gluBuild2DMipmaps proto stdcall :GLenum, :GLint, :GLint, :GLint, :GLenum, :GLenum, :ptr 
ifdef __cplusplus
GLUnurbsObj typedef GLUnurbs

GLUquadricObj typedef GLUquadric

GLUtesselatorObj typedef GLUtesselator

GLUtriangulatorObj typedef GLUtesselator

else 
;GLUnurbs typedef GLUnurbs
GLUnurbs struct
GLUnurbs ends

;GLUquadric typedef GLUquadric
GLUquadric struct
GLUquadric ends

;GLUtesselator typedef GLUtesselator
GLUtesselator struct
GLUtesselator ends

GLUnurbsObj typedef GLUnurbs

GLUquadricObj typedef GLUquadric

GLUtesselatorObj typedef GLUtesselator

GLUtriangulatorObj typedef GLUtesselator

endif 
gluNewQuadric proto stdcall 
gluDeleteQuadric proto stdcall :ptr GLUquadric
gluQuadricNormals proto stdcall :ptr GLUquadric, :GLenum
gluQuadricTexture proto stdcall :ptr GLUquadric, :GLboolean
gluQuadricOrientation proto stdcall :ptr GLUquadric, :GLenum
gluQuadricDrawStyle proto stdcall :ptr GLUquadric, :GLenum
gluCylinder proto stdcall :ptr GLUquadric, :GLdouble, :GLdouble, :GLdouble, :GLint, :GLint
gluDisk proto stdcall :ptr GLUquadric, :GLdouble, :GLdouble, :GLint, :GLint
gluPartialDisk proto stdcall :ptr GLUquadric, :GLdouble, :GLdouble, :GLint, :GLint, :GLdouble, :GLdouble
gluSphere proto stdcall :ptr GLUquadric, :GLdouble, :GLint, :GLint
gluQuadricCallback proto stdcall :ptr GLUquadric, :GLenum, :ptr 
gluNewTess proto stdcall 
gluDeleteTess proto stdcall :ptr GLUtesselator
gluTessBeginPolygon proto stdcall :ptr GLUtesselator, :ptr 
gluTessBeginContour proto stdcall :ptr GLUtesselator
gluTessVertex proto stdcall :ptr GLUtesselator, :ptr GLdouble, :ptr 
gluTessEndContour proto stdcall :ptr GLUtesselator
gluTessEndPolygon proto stdcall :ptr GLUtesselator
gluTessProperty proto stdcall :ptr GLUtesselator, :GLenum, :GLdouble
gluTessNormal proto stdcall :ptr GLUtesselator, :GLdouble, :GLdouble, :GLdouble
gluTessCallback proto stdcall :ptr GLUtesselator, :GLenum, :ptr 
gluGetTessProperty proto stdcall :ptr GLUtesselator, :GLenum, :ptr GLdouble
gluNewNurbsRenderer proto stdcall 
gluDeleteNurbsRenderer proto stdcall :ptr GLUnurbs
gluBeginSurface proto stdcall :ptr GLUnurbs
gluBeginCurve proto stdcall :ptr GLUnurbs
gluEndCurve proto stdcall :ptr GLUnurbs
gluEndSurface proto stdcall :ptr GLUnurbs
gluBeginTrim proto stdcall :ptr GLUnurbs
gluEndTrim proto stdcall :ptr GLUnurbs
gluPwlCurve proto stdcall :ptr GLUnurbs, :GLint, :ptr GLfloat, :GLint, :GLenum
gluNurbsCurve proto stdcall :ptr GLUnurbs, :GLint, :ptr GLfloat, :GLint, :ptr GLfloat, :GLint, :GLenum
gluNurbsSurface proto stdcall :ptr GLUnurbs, :GLint, :ptr REAL4, :GLint, :ptr GLfloat, :GLint, :GLint, :ptr GLfloat, :GLint, :GLint, :GLenum
gluLoadSamplingMatrices proto stdcall :ptr GLUnurbs, :ptr GLfloat, :ptr GLfloat, :ptr GLint
gluNurbsProperty proto stdcall :ptr GLUnurbs, :GLenum, :GLfloat
gluGetNurbsProperty proto stdcall :ptr GLUnurbs, :GLenum, :ptr GLfloat
gluNurbsCallback proto stdcall :ptr GLUnurbs, :GLenum, :ptr 
proto_GLUquadricErrorProc typedef proto stdcall :GLenum
GLUquadricErrorProc typedef ptr proto_GLUquadricErrorProc
proto_GLUtessBeginProc typedef proto stdcall :GLenum
GLUtessBeginProc typedef ptr proto_GLUtessBeginProc
proto_GLUtessEdgeFlagProc typedef proto stdcall :GLboolean
GLUtessEdgeFlagProc typedef ptr proto_GLUtessEdgeFlagProc
proto_GLUtessVertexProc typedef proto stdcall :ptr 
GLUtessVertexProc typedef ptr proto_GLUtessVertexProc
proto_GLUtessEndProc typedef proto stdcall 
GLUtessEndProc typedef ptr proto_GLUtessEndProc
proto_GLUtessErrorProc typedef proto stdcall :GLenum
GLUtessErrorProc typedef ptr proto_GLUtessErrorProc
proto_GLUtessCombineProc typedef proto stdcall :ptr GLdouble,:ptr ptr ,:ptr GLfloat,:ptr ptr 
GLUtessCombineProc typedef ptr proto_GLUtessCombineProc
proto_GLUtessBeginDataProc typedef proto stdcall :GLenum,:ptr 
GLUtessBeginDataProc typedef ptr proto_GLUtessBeginDataProc
proto_GLUtessEdgeFlagDataProc typedef proto stdcall :GLboolean,:ptr 
GLUtessEdgeFlagDataProc typedef ptr proto_GLUtessEdgeFlagDataProc
proto_GLUtessVertexDataProc typedef proto stdcall :ptr ,:ptr 
GLUtessVertexDataProc typedef ptr proto_GLUtessVertexDataProc
proto_GLUtessEndDataProc typedef proto stdcall :ptr 
GLUtessEndDataProc typedef ptr proto_GLUtessEndDataProc
proto_GLUtessErrorDataProc typedef proto stdcall :GLenum,:ptr 
GLUtessErrorDataProc typedef ptr proto_GLUtessErrorDataProc
proto_GLUtessCombineDataProc typedef proto stdcall :ptr GLdouble,:ptr ptr ,:ptr GLfloat,:ptr ptr ,:ptr 
GLUtessCombineDataProc typedef ptr proto_GLUtessCombineDataProc
proto_GLUnurbsErrorProc typedef proto stdcall :GLenum
GLUnurbsErrorProc typedef ptr proto_GLUnurbsErrorProc
GLU_VERSION_1_1	EQU	1
GLU_VERSION_1_2	EQU	1
GLU_INVALID_ENUM	EQU	100900
GLU_INVALID_VALUE	EQU	100901
GLU_OUT_OF_MEMORY	EQU	100902
GLU_INCOMPATIBLE_GL_VERSION	EQU	100903
GLU_VERSION	EQU	100800
GLU_EXTENSIONS	EQU	100801
GLU_TRUE	EQU	<GL_TRUE>
GLU_FALSE	EQU	<GL_FALSE>
GLU_SMOOTH	EQU	100000
GLU_FLAT	EQU	100001
GLU_NONE	EQU	100002
GLU_POINT	EQU	100010
GLU_LINE	EQU	100011
GLU_FILL	EQU	100012
GLU_SILHOUETTE	EQU	100013
GLU_OUTSIDE	EQU	100020
GLU_INSIDE	EQU	100021
GLU_TESS_MAX_COORD	EQU	1.0e150
GLU_TESS_WINDING_RULE	EQU	100140
GLU_TESS_BOUNDARY_ONLY	EQU	100141
GLU_TESS_TOLERANCE	EQU	100142
GLU_TESS_WINDING_ODD	EQU	100130
GLU_TESS_WINDING_NONZERO	EQU	100131
GLU_TESS_WINDING_POSITIVE	EQU	100132
GLU_TESS_WINDING_NEGATIVE	EQU	100133
GLU_TESS_WINDING_ABS_GEQ_TWO	EQU	100134
GLU_TESS_BEGIN	EQU	100100
GLU_TESS_VERTEX	EQU	100101
GLU_TESS_END	EQU	100102
GLU_TESS_ERROR	EQU	100103
GLU_TESS_EDGE_FLAG	EQU	100104
GLU_TESS_COMBINE	EQU	100105
GLU_TESS_BEGIN_DATA	EQU	100106
GLU_TESS_VERTEX_DATA	EQU	100107
GLU_TESS_END_DATA	EQU	100108
GLU_TESS_ERROR_DATA	EQU	100109
GLU_TESS_EDGE_FLAG_DATA	EQU	100110
GLU_TESS_COMBINE_DATA	EQU	100111
GLU_TESS_ERROR1	EQU	100151
GLU_TESS_ERROR2	EQU	100152
GLU_TESS_ERROR3	EQU	100153
GLU_TESS_ERROR4	EQU	100154
GLU_TESS_ERROR5	EQU	100155
GLU_TESS_ERROR6	EQU	100156
GLU_TESS_ERROR7	EQU	100157
GLU_TESS_ERROR8	EQU	100158
GLU_TESS_MISSING_BEGIN_POLYGON	EQU	<GLU_TESS_ERROR1>
GLU_TESS_MISSING_BEGIN_CONTOUR	EQU	<GLU_TESS_ERROR2>
GLU_TESS_MISSING_END_POLYGON	EQU	<GLU_TESS_ERROR3>
GLU_TESS_MISSING_END_CONTOUR	EQU	<GLU_TESS_ERROR4>
GLU_TESS_COORD_TOO_LARGE	EQU	<GLU_TESS_ERROR5>
GLU_TESS_NEED_COMBINE_CALLBACK	EQU	<GLU_TESS_ERROR6>
GLU_AUTO_LOAD_MATRIX	EQU	100200
GLU_CULLING	EQU	100201
GLU_SAMPLING_TOLERANCE	EQU	100203
GLU_DISPLAY_MODE	EQU	100204
GLU_PARAMETRIC_TOLERANCE	EQU	100202
GLU_SAMPLING_METHOD	EQU	100205
GLU_U_STEP	EQU	100206
GLU_V_STEP	EQU	100207
GLU_PATH_LENGTH	EQU	100215
GLU_PARAMETRIC_ERROR	EQU	100216
GLU_DOMAIN_DISTANCE	EQU	100217
GLU_MAP1_TRIM_2	EQU	100210
GLU_MAP1_TRIM_3	EQU	100211
GLU_OUTLINE_POLYGON	EQU	100240
GLU_OUTLINE_PATCH	EQU	100241
GLU_NURBS_ERROR1	EQU	100251
GLU_NURBS_ERROR2	EQU	100252
GLU_NURBS_ERROR3	EQU	100253
GLU_NURBS_ERROR4	EQU	100254
GLU_NURBS_ERROR5	EQU	100255
GLU_NURBS_ERROR6	EQU	100256
GLU_NURBS_ERROR7	EQU	100257
GLU_NURBS_ERROR8	EQU	100258
GLU_NURBS_ERROR9	EQU	100259
GLU_NURBS_ERROR10	EQU	100260
GLU_NURBS_ERROR11	EQU	100261
GLU_NURBS_ERROR12	EQU	100262
GLU_NURBS_ERROR13	EQU	100263
GLU_NURBS_ERROR14	EQU	100264
GLU_NURBS_ERROR15	EQU	100265
GLU_NURBS_ERROR16	EQU	100266
GLU_NURBS_ERROR17	EQU	100267
GLU_NURBS_ERROR18	EQU	100268
GLU_NURBS_ERROR19	EQU	100269
GLU_NURBS_ERROR20	EQU	100270
GLU_NURBS_ERROR21	EQU	100271
GLU_NURBS_ERROR22	EQU	100272
GLU_NURBS_ERROR23	EQU	100273
GLU_NURBS_ERROR24	EQU	100274
GLU_NURBS_ERROR25	EQU	100275
GLU_NURBS_ERROR26	EQU	100276
GLU_NURBS_ERROR27	EQU	100277
GLU_NURBS_ERROR28	EQU	100278
GLU_NURBS_ERROR29	EQU	100279
GLU_NURBS_ERROR30	EQU	100280
GLU_NURBS_ERROR31	EQU	100281
GLU_NURBS_ERROR32	EQU	100282
GLU_NURBS_ERROR33	EQU	100283
GLU_NURBS_ERROR34	EQU	100284
GLU_NURBS_ERROR35	EQU	100285
GLU_NURBS_ERROR36	EQU	100286
GLU_NURBS_ERROR37	EQU	100287
gluBeginPolygon proto stdcall :ptr GLUtesselator
gluNextContour proto stdcall :ptr GLUtesselator, :GLenum
gluEndPolygon proto stdcall :ptr GLUtesselator
GLU_CW	EQU	100120
GLU_CCW	EQU	100121
GLU_INTERIOR	EQU	100122
GLU_EXTERIOR	EQU	100123
GLU_UNKNOWN	EQU	100124
GLU_BEGIN	EQU	<GLU_TESS_BEGIN>
GLU_VERTEX	EQU	<GLU_TESS_VERTEX>
GLU_END	EQU	<GLU_TESS_END>
GLU_ERROR	EQU	<GLU_TESS_ERROR>
GLU_EDGE_FLAG	EQU	<GLU_TESS_EDGE_FLAG>
ifdef __cplusplus
;}
endif 
endif 
endif 

;--- errors: 0
;--- end of file ---
