// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yGS2Client/Public/YGS2Req_ShopItems.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYGS2Req_ShopItems() {}
// Cross Module References
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2Req_ShopItems_NoRegister();
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2Req_ShopItems();
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2RequestBase();
	UPackage* Z_Construct_UPackage__Script_yGS2Client();
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FYGS2Record_ShopItems();
// End Cross Module References
	DEFINE_FUNCTION(UYGS2Req_ShopItems::execRecords)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FYGS2Record_ShopItems>*)Z_Param__Result=P_THIS->Records();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2Req_ShopItems::execSetFindMode)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sKind);
		P_GET_PROPERTY(FStrProperty,Z_Param__strItemID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFindMode(Z_Param__sKind,Z_Param__strItemID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2Req_ShopItems::execSetListMode)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sOffset);
		P_GET_PROPERTY(FIntProperty,Z_Param__sLimit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetListMode(Z_Param__sOffset,Z_Param__sLimit);
		P_NATIVE_END;
	}
	void UYGS2Req_ShopItems::StaticRegisterNativesUYGS2Req_ShopItems()
	{
		UClass* Class = UYGS2Req_ShopItems::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Records", &UYGS2Req_ShopItems::execRecords },
			{ "SetFindMode", &UYGS2Req_ShopItems::execSetFindMode },
			{ "SetListMode", &UYGS2Req_ShopItems::execSetListMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYGS2Req_ShopItems_Records_Statics
	{
		struct YGS2Req_ShopItems_eventRecords_Parms
		{
			TArray<FYGS2Record_ShopItems> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYGS2Req_ShopItems_Records_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FYGS2Record_ShopItems, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UYGS2Req_ShopItems_Records_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_ShopItems_eventRecords_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_ShopItems_Records_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_ShopItems_Records_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_ShopItems_Records_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_ShopItems_Records_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_ShopItems.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_ShopItems_Records_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_ShopItems, nullptr, "Records", nullptr, nullptr, sizeof(YGS2Req_ShopItems_eventRecords_Parms), Z_Construct_UFunction_UYGS2Req_ShopItems_Records_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_ShopItems_Records_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_ShopItems_Records_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_ShopItems_Records_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_ShopItems_Records()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_ShopItems_Records_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2Req_ShopItems_SetFindMode_Statics
	{
		struct YGS2Req_ShopItems_eventSetFindMode_Parms
		{
			int32 _sKind;
			FString _strItemID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sKind;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strItemID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strItemID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYGS2Req_ShopItems_SetFindMode_Statics::NewProp__sKind = { "_sKind", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_ShopItems_eventSetFindMode_Parms, _sKind), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_ShopItems_SetFindMode_Statics::NewProp__strItemID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2Req_ShopItems_SetFindMode_Statics::NewProp__strItemID = { "_strItemID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_ShopItems_eventSetFindMode_Parms, _strItemID), METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_ShopItems_SetFindMode_Statics::NewProp__strItemID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_ShopItems_SetFindMode_Statics::NewProp__strItemID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_ShopItems_SetFindMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_ShopItems_SetFindMode_Statics::NewProp__sKind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_ShopItems_SetFindMode_Statics::NewProp__strItemID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_ShopItems_SetFindMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_ShopItems.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_ShopItems_SetFindMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_ShopItems, nullptr, "SetFindMode", nullptr, nullptr, sizeof(YGS2Req_ShopItems_eventSetFindMode_Parms), Z_Construct_UFunction_UYGS2Req_ShopItems_SetFindMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_ShopItems_SetFindMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_ShopItems_SetFindMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_ShopItems_SetFindMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_ShopItems_SetFindMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_ShopItems_SetFindMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2Req_ShopItems_SetListMode_Statics
	{
		struct YGS2Req_ShopItems_eventSetListMode_Parms
		{
			int32 _sOffset;
			int32 _sLimit;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sOffset;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sLimit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYGS2Req_ShopItems_SetListMode_Statics::NewProp__sOffset = { "_sOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_ShopItems_eventSetListMode_Parms, _sOffset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYGS2Req_ShopItems_SetListMode_Statics::NewProp__sLimit = { "_sLimit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_ShopItems_eventSetListMode_Parms, _sLimit), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_ShopItems_SetListMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_ShopItems_SetListMode_Statics::NewProp__sOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_ShopItems_SetListMode_Statics::NewProp__sLimit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_ShopItems_SetListMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_ShopItems.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_ShopItems_SetListMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_ShopItems, nullptr, "SetListMode", nullptr, nullptr, sizeof(YGS2Req_ShopItems_eventSetListMode_Parms), Z_Construct_UFunction_UYGS2Req_ShopItems_SetListMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_ShopItems_SetListMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_ShopItems_SetListMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_ShopItems_SetListMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_ShopItems_SetListMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_ShopItems_SetListMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYGS2Req_ShopItems_NoRegister()
	{
		return UYGS2Req_ShopItems::StaticClass();
	}
	struct Z_Construct_UClass_UYGS2Req_ShopItems_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYGS2Req_ShopItems_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UYGS2RequestBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yGS2Client,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYGS2Req_ShopItems_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYGS2Req_ShopItems_Records, "Records" }, // 4098403086
		{ &Z_Construct_UFunction_UYGS2Req_ShopItems_SetFindMode, "SetFindMode" }, // 1734346550
		{ &Z_Construct_UFunction_UYGS2Req_ShopItems_SetListMode, "SetListMode" }, // 4131148297
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYGS2Req_ShopItems_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YGS2Req_ShopItems.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YGS2Req_ShopItems.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYGS2Req_ShopItems_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYGS2Req_ShopItems>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYGS2Req_ShopItems_Statics::ClassParams = {
		&UYGS2Req_ShopItems::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UYGS2Req_ShopItems_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYGS2Req_ShopItems_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYGS2Req_ShopItems()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYGS2Req_ShopItems_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYGS2Req_ShopItems, 1742018303);
	template<> YGS2CLIENT_API UClass* StaticClass<UYGS2Req_ShopItems>()
	{
		return UYGS2Req_ShopItems::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYGS2Req_ShopItems(Z_Construct_UClass_UYGS2Req_ShopItems, &UYGS2Req_ShopItems::StaticClass, TEXT("/Script/yGS2Client"), TEXT("UYGS2Req_ShopItems"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYGS2Req_ShopItems);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
