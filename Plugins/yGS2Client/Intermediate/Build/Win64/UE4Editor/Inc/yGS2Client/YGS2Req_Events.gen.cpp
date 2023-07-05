// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yGS2Client/Public/YGS2Req_Events.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYGS2Req_Events() {}
// Cross Module References
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2Req_Events_NoRegister();
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2Req_Events();
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2RequestBase();
	UPackage* Z_Construct_UPackage__Script_yGS2Client();
// End Cross Module References
	DEFINE_FUNCTION(UYGS2Req_Events::execGetResultID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetResultID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2Req_Events::execSetBinaryData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strBinary);
		P_GET_PROPERTY(FStrProperty,Z_Param__strExtension);
		P_GET_PROPERTY(FStrProperty,Z_Param__strMimeType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBinaryData(Z_Param__strBinary,Z_Param__strExtension,Z_Param__strMimeType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2Req_Events::execSetEventData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strEventName);
		P_GET_PROPERTY(FStrProperty,Z_Param__strDataType);
		P_GET_PROPERTY(FStrProperty,Z_Param__strTextData);
		P_GET_UBOOL(Z_Param__bAddToDB);
		P_GET_UBOOL(Z_Param__bAddToRAW);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEventData(Z_Param__strEventName,Z_Param__strDataType,Z_Param__strTextData,Z_Param__bAddToDB,Z_Param__bAddToRAW);
		P_NATIVE_END;
	}
	void UYGS2Req_Events::StaticRegisterNativesUYGS2Req_Events()
	{
		UClass* Class = UYGS2Req_Events::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetResultID", &UYGS2Req_Events::execGetResultID },
			{ "SetBinaryData", &UYGS2Req_Events::execSetBinaryData },
			{ "SetEventData", &UYGS2Req_Events::execSetEventData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYGS2Req_Events_GetResultID_Statics
	{
		struct YGS2Req_Events_eventGetResultID_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2Req_Events_GetResultID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_Events_eventGetResultID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_Events_GetResultID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_Events_GetResultID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_Events_GetResultID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_Events.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_Events_GetResultID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_Events, nullptr, "GetResultID", nullptr, nullptr, sizeof(YGS2Req_Events_eventGetResultID_Parms), Z_Construct_UFunction_UYGS2Req_Events_GetResultID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_Events_GetResultID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_Events_GetResultID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_Events_GetResultID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_Events_GetResultID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_Events_GetResultID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2Req_Events_SetBinaryData_Statics
	{
		struct YGS2Req_Events_eventSetBinaryData_Parms
		{
			FString _strBinary;
			FString _strExtension;
			FString _strMimeType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strBinary_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strBinary;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strExtension_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strExtension;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strMimeType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strMimeType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_Events_SetBinaryData_Statics::NewProp__strBinary_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2Req_Events_SetBinaryData_Statics::NewProp__strBinary = { "_strBinary", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_Events_eventSetBinaryData_Parms, _strBinary), METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_Events_SetBinaryData_Statics::NewProp__strBinary_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_Events_SetBinaryData_Statics::NewProp__strBinary_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_Events_SetBinaryData_Statics::NewProp__strExtension_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2Req_Events_SetBinaryData_Statics::NewProp__strExtension = { "_strExtension", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_Events_eventSetBinaryData_Parms, _strExtension), METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_Events_SetBinaryData_Statics::NewProp__strExtension_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_Events_SetBinaryData_Statics::NewProp__strExtension_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_Events_SetBinaryData_Statics::NewProp__strMimeType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2Req_Events_SetBinaryData_Statics::NewProp__strMimeType = { "_strMimeType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_Events_eventSetBinaryData_Parms, _strMimeType), METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_Events_SetBinaryData_Statics::NewProp__strMimeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_Events_SetBinaryData_Statics::NewProp__strMimeType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_Events_SetBinaryData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_Events_SetBinaryData_Statics::NewProp__strBinary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_Events_SetBinaryData_Statics::NewProp__strExtension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_Events_SetBinaryData_Statics::NewProp__strMimeType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_Events_SetBinaryData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_Events.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_Events_SetBinaryData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_Events, nullptr, "SetBinaryData", nullptr, nullptr, sizeof(YGS2Req_Events_eventSetBinaryData_Parms), Z_Construct_UFunction_UYGS2Req_Events_SetBinaryData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_Events_SetBinaryData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_Events_SetBinaryData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_Events_SetBinaryData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_Events_SetBinaryData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_Events_SetBinaryData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2Req_Events_SetEventData_Statics
	{
		struct YGS2Req_Events_eventSetEventData_Parms
		{
			FString _strEventName;
			FString _strDataType;
			FString _strTextData;
			bool _bAddToDB;
			bool _bAddToRAW;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strEventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strEventName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strDataType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strDataType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strTextData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strTextData;
		static void NewProp__bAddToDB_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bAddToDB;
		static void NewProp__bAddToRAW_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bAddToRAW;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_Events_SetEventData_Statics::NewProp__strEventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2Req_Events_SetEventData_Statics::NewProp__strEventName = { "_strEventName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_Events_eventSetEventData_Parms, _strEventName), METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_Events_SetEventData_Statics::NewProp__strEventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_Events_SetEventData_Statics::NewProp__strEventName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_Events_SetEventData_Statics::NewProp__strDataType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2Req_Events_SetEventData_Statics::NewProp__strDataType = { "_strDataType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_Events_eventSetEventData_Parms, _strDataType), METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_Events_SetEventData_Statics::NewProp__strDataType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_Events_SetEventData_Statics::NewProp__strDataType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_Events_SetEventData_Statics::NewProp__strTextData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2Req_Events_SetEventData_Statics::NewProp__strTextData = { "_strTextData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_Events_eventSetEventData_Parms, _strTextData), METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_Events_SetEventData_Statics::NewProp__strTextData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_Events_SetEventData_Statics::NewProp__strTextData_MetaData)) };
	void Z_Construct_UFunction_UYGS2Req_Events_SetEventData_Statics::NewProp__bAddToDB_SetBit(void* Obj)
	{
		((YGS2Req_Events_eventSetEventData_Parms*)Obj)->_bAddToDB = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYGS2Req_Events_SetEventData_Statics::NewProp__bAddToDB = { "_bAddToDB", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YGS2Req_Events_eventSetEventData_Parms), &Z_Construct_UFunction_UYGS2Req_Events_SetEventData_Statics::NewProp__bAddToDB_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UYGS2Req_Events_SetEventData_Statics::NewProp__bAddToRAW_SetBit(void* Obj)
	{
		((YGS2Req_Events_eventSetEventData_Parms*)Obj)->_bAddToRAW = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYGS2Req_Events_SetEventData_Statics::NewProp__bAddToRAW = { "_bAddToRAW", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YGS2Req_Events_eventSetEventData_Parms), &Z_Construct_UFunction_UYGS2Req_Events_SetEventData_Statics::NewProp__bAddToRAW_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_Events_SetEventData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_Events_SetEventData_Statics::NewProp__strEventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_Events_SetEventData_Statics::NewProp__strDataType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_Events_SetEventData_Statics::NewProp__strTextData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_Events_SetEventData_Statics::NewProp__bAddToDB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_Events_SetEventData_Statics::NewProp__bAddToRAW,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_Events_SetEventData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_Events.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_Events_SetEventData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_Events, nullptr, "SetEventData", nullptr, nullptr, sizeof(YGS2Req_Events_eventSetEventData_Parms), Z_Construct_UFunction_UYGS2Req_Events_SetEventData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_Events_SetEventData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_Events_SetEventData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_Events_SetEventData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_Events_SetEventData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_Events_SetEventData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYGS2Req_Events_NoRegister()
	{
		return UYGS2Req_Events::StaticClass();
	}
	struct Z_Construct_UClass_UYGS2Req_Events_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYGS2Req_Events_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UYGS2RequestBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yGS2Client,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYGS2Req_Events_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYGS2Req_Events_GetResultID, "GetResultID" }, // 580174869
		{ &Z_Construct_UFunction_UYGS2Req_Events_SetBinaryData, "SetBinaryData" }, // 2939116433
		{ &Z_Construct_UFunction_UYGS2Req_Events_SetEventData, "SetEventData" }, // 1035255074
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYGS2Req_Events_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YGS2Req_Events.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YGS2Req_Events.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYGS2Req_Events_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYGS2Req_Events>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYGS2Req_Events_Statics::ClassParams = {
		&UYGS2Req_Events::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UYGS2Req_Events_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYGS2Req_Events_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYGS2Req_Events()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYGS2Req_Events_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYGS2Req_Events, 2134362547);
	template<> YGS2CLIENT_API UClass* StaticClass<UYGS2Req_Events>()
	{
		return UYGS2Req_Events::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYGS2Req_Events(Z_Construct_UClass_UYGS2Req_Events, &UYGS2Req_Events::StaticClass, TEXT("/Script/yGS2Client"), TEXT("UYGS2Req_Events"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYGS2Req_Events);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
