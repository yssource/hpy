
/*
   DO NOT EDIT THIS FILE!

   This file is automatically generated by hpy.tools.autogen.ctx.autogen_ctx_def_h
   See also hpy.tools.autogen and hpy/tools/public_api.h

   Run this to regenerate:
       make autogen

*/

struct _HPyContext_s g_universal_ctx = {
    .name = "HPy Universal ABI (CPython backend)",
    ._private = NULL,
    .ctx_version = 1,
    /* h_None & co. are initialized by init_universal_ctx() */
    .ctx_Module_Create = &ctx_Module_Create,
    .ctx_Dup = &ctx_Dup,
    .ctx_Close = &ctx_Close,
    .ctx_Long_FromLong = &ctx_Long_FromLong,
    .ctx_Long_FromUnsignedLong = &ctx_Long_FromUnsignedLong,
    .ctx_Long_FromLongLong = &ctx_Long_FromLongLong,
    .ctx_Long_FromUnsignedLongLong = &ctx_Long_FromUnsignedLongLong,
    .ctx_Long_FromSize_t = &ctx_Long_FromSize_t,
    .ctx_Long_FromSsize_t = &ctx_Long_FromSsize_t,
    .ctx_Long_AsLong = &ctx_Long_AsLong,
    .ctx_Long_AsUnsignedLong = &ctx_Long_AsUnsignedLong,
    .ctx_Long_AsUnsignedLongMask = &ctx_Long_AsUnsignedLongMask,
    .ctx_Long_AsLongLong = &ctx_Long_AsLongLong,
    .ctx_Long_AsUnsignedLongLong = &ctx_Long_AsUnsignedLongLong,
    .ctx_Long_AsUnsignedLongLongMask = &ctx_Long_AsUnsignedLongLongMask,
    .ctx_Long_AsSize_t = &ctx_Long_AsSize_t,
    .ctx_Long_AsSsize_t = &ctx_Long_AsSsize_t,
    .ctx_Float_FromDouble = &ctx_Float_FromDouble,
    .ctx_Float_AsDouble = &ctx_Float_AsDouble,
    .ctx_Bool_FromLong = &ctx_Bool_FromLong,
    .ctx_Length = &ctx_Length,
    .ctx_Number_Check = &ctx_Number_Check,
    .ctx_Add = &ctx_Add,
    .ctx_Subtract = &ctx_Subtract,
    .ctx_Multiply = &ctx_Multiply,
    .ctx_MatrixMultiply = &ctx_MatrixMultiply,
    .ctx_FloorDivide = &ctx_FloorDivide,
    .ctx_TrueDivide = &ctx_TrueDivide,
    .ctx_Remainder = &ctx_Remainder,
    .ctx_Divmod = &ctx_Divmod,
    .ctx_Power = &ctx_Power,
    .ctx_Negative = &ctx_Negative,
    .ctx_Positive = &ctx_Positive,
    .ctx_Absolute = &ctx_Absolute,
    .ctx_Invert = &ctx_Invert,
    .ctx_Lshift = &ctx_Lshift,
    .ctx_Rshift = &ctx_Rshift,
    .ctx_And = &ctx_And,
    .ctx_Xor = &ctx_Xor,
    .ctx_Or = &ctx_Or,
    .ctx_Index = &ctx_Index,
    .ctx_Long = &ctx_Long,
    .ctx_Float = &ctx_Float,
    .ctx_InPlaceAdd = &ctx_InPlaceAdd,
    .ctx_InPlaceSubtract = &ctx_InPlaceSubtract,
    .ctx_InPlaceMultiply = &ctx_InPlaceMultiply,
    .ctx_InPlaceMatrixMultiply = &ctx_InPlaceMatrixMultiply,
    .ctx_InPlaceFloorDivide = &ctx_InPlaceFloorDivide,
    .ctx_InPlaceTrueDivide = &ctx_InPlaceTrueDivide,
    .ctx_InPlaceRemainder = &ctx_InPlaceRemainder,
    .ctx_InPlacePower = &ctx_InPlacePower,
    .ctx_InPlaceLshift = &ctx_InPlaceLshift,
    .ctx_InPlaceRshift = &ctx_InPlaceRshift,
    .ctx_InPlaceAnd = &ctx_InPlaceAnd,
    .ctx_InPlaceXor = &ctx_InPlaceXor,
    .ctx_InPlaceOr = &ctx_InPlaceOr,
    .ctx_Callable_Check = &ctx_Callable_Check,
    .ctx_CallTupleDict = &ctx_CallTupleDict,
    .ctx_FatalError = &ctx_FatalError,
    .ctx_Err_SetString = &ctx_Err_SetString,
    .ctx_Err_SetObject = &ctx_Err_SetObject,
    .ctx_Err_SetFromErrnoWithFilename = &ctx_Err_SetFromErrnoWithFilename,
    .ctx_Err_SetFromErrnoWithFilenameObjects = &ctx_Err_SetFromErrnoWithFilenameObjects,
    .ctx_Err_Occurred = &ctx_Err_Occurred,
    .ctx_Err_ExceptionMatches = &ctx_Err_ExceptionMatches,
    .ctx_Err_NoMemory = &ctx_Err_NoMemory,
    .ctx_Err_Clear = &ctx_Err_Clear,
    .ctx_Err_NewException = &ctx_Err_NewException,
    .ctx_Err_NewExceptionWithDoc = &ctx_Err_NewExceptionWithDoc,
    .ctx_Err_WarnEx = &ctx_Err_WarnEx,
    .ctx_IsTrue = &ctx_IsTrue,
    .ctx_Type_FromSpec = &ctx_Type_FromSpec,
    .ctx_Type_GenericNew = &ctx_Type_GenericNew,
    .ctx_GetAttr = &ctx_GetAttr,
    .ctx_GetAttr_s = &ctx_GetAttr_s,
    .ctx_HasAttr = &ctx_HasAttr,
    .ctx_HasAttr_s = &ctx_HasAttr_s,
    .ctx_SetAttr = &ctx_SetAttr,
    .ctx_SetAttr_s = &ctx_SetAttr_s,
    .ctx_GetItem = &ctx_GetItem,
    .ctx_GetItem_i = &ctx_GetItem_i,
    .ctx_GetItem_s = &ctx_GetItem_s,
    .ctx_Contains = &ctx_Contains,
    .ctx_SetItem = &ctx_SetItem,
    .ctx_SetItem_i = &ctx_SetItem_i,
    .ctx_SetItem_s = &ctx_SetItem_s,
    .ctx_Type = &ctx_Type,
    .ctx_TypeCheck = &ctx_TypeCheck,
    .ctx_Is = &ctx_Is,
    .ctx_AsStruct = &ctx_AsStruct,
    .ctx_AsStructLegacy = &ctx_AsStructLegacy,
    .ctx_New = &ctx_New,
    .ctx_Repr = &ctx_Repr,
    .ctx_Str = &ctx_Str,
    .ctx_ASCII = &ctx_ASCII,
    .ctx_Bytes = &ctx_Bytes,
    .ctx_RichCompare = &ctx_RichCompare,
    .ctx_RichCompareBool = &ctx_RichCompareBool,
    .ctx_Hash = &ctx_Hash,
    .ctx_Bytes_Check = &ctx_Bytes_Check,
    .ctx_Bytes_Size = &ctx_Bytes_Size,
    .ctx_Bytes_GET_SIZE = &ctx_Bytes_GET_SIZE,
    .ctx_Bytes_AsString = &ctx_Bytes_AsString,
    .ctx_Bytes_AS_STRING = &ctx_Bytes_AS_STRING,
    .ctx_Bytes_FromString = &ctx_Bytes_FromString,
    .ctx_Bytes_FromStringAndSize = &ctx_Bytes_FromStringAndSize,
    .ctx_Unicode_FromString = &ctx_Unicode_FromString,
    .ctx_Unicode_Check = &ctx_Unicode_Check,
    .ctx_Unicode_AsASCIIString = &ctx_Unicode_AsASCIIString,
    .ctx_Unicode_AsUTF8String = &ctx_Unicode_AsUTF8String,
    .ctx_Unicode_AsUTF8AndSize = &ctx_Unicode_AsUTF8AndSize,
    .ctx_Unicode_FromWideChar = &ctx_Unicode_FromWideChar,
    .ctx_Unicode_DecodeFSDefault = &ctx_Unicode_DecodeFSDefault,
    .ctx_Unicode_DecodeFSDefaultAndSize = &ctx_Unicode_DecodeFSDefaultAndSize,
    .ctx_Unicode_EncodeFSDefault = &ctx_Unicode_EncodeFSDefault,
    .ctx_Unicode_ReadChar = &ctx_Unicode_ReadChar,
    .ctx_Unicode_DecodeLatin1 = &ctx_Unicode_DecodeLatin1,
    .ctx_List_Check = &ctx_List_Check,
    .ctx_List_New = &ctx_List_New,
    .ctx_List_Append = &ctx_List_Append,
    .ctx_Dict_Check = &ctx_Dict_Check,
    .ctx_Dict_New = &ctx_Dict_New,
    .ctx_Tuple_Check = &ctx_Tuple_Check,
    .ctx_Tuple_FromArray = &ctx_Tuple_FromArray,
    .ctx_Import_ImportModule = &ctx_Import_ImportModule,
    .ctx_FromPyObject = &ctx_FromPyObject,
    .ctx_AsPyObject = &ctx_AsPyObject,
    .ctx_CallRealFunctionFromTrampoline = &ctx_CallRealFunctionFromTrampoline,
    .ctx_ListBuilder_New = &ctx_ListBuilder_New,
    .ctx_ListBuilder_Set = &ctx_ListBuilder_Set,
    .ctx_ListBuilder_Build = &ctx_ListBuilder_Build,
    .ctx_ListBuilder_Cancel = &ctx_ListBuilder_Cancel,
    .ctx_TupleBuilder_New = &ctx_TupleBuilder_New,
    .ctx_TupleBuilder_Set = &ctx_TupleBuilder_Set,
    .ctx_TupleBuilder_Build = &ctx_TupleBuilder_Build,
    .ctx_TupleBuilder_Cancel = &ctx_TupleBuilder_Cancel,
    .ctx_Tracker_New = &ctx_Tracker_New,
    .ctx_Tracker_Add = &ctx_Tracker_Add,
    .ctx_Tracker_ForgetAll = &ctx_Tracker_ForgetAll,
    .ctx_Tracker_Close = &ctx_Tracker_Close,
    .ctx_Field_Store = &ctx_Field_Store,
    .ctx_Field_Load = &ctx_Field_Load,
    .ctx_Dump = &ctx_Dump,
};
