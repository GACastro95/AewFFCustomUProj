// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yGS2Client/Public/YGS2Req_SetPlayerData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYGS2Req_SetPlayerData() {}
// Cross Module References
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2Req_SetPlayerData_NoRegister();
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2Req_SetPlayerData();
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2RequestBase();
	UPackage* Z_Construct_UPackage__Script_yGS2Client();
// End Cross Module References
	DEFINE_FUNCTION(UYGS2Req_SetPlayerData::execGetAEWGold)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAEWGold();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2Req_SetPlayerData::execGetAEWGoldTolal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAEWGoldTolal();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2Req_SetPlayerData::execSetAEWGold)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sAEWGold);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAEWGold(Z_Param__sAEWGold);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2Req_SetPlayerData::execSetAEWGoldTolal)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sAEWGoldTotal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAEWGoldTolal(Z_Param__sAEWGoldTotal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2Req_SetPlayerData::execSetDebugGamerTag)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strGameTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDebugGamerTag(Z_Param__strGameTag);
		P_NATIVE_END;
	}
	void UYGS2Req_SetPlayerData::StaticRegisterNativesUYGS2Req_SetPlayerData()
	{
		UClass* Class = UYGS2Req_SetPlayerData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAEWGold", &UYGS2Req_SetPlayerData::execGetAEWGold },
			{ "GetAEWGoldTolal", &UYGS2Req_SetPlayerData::execGetAEWGoldTolal },
			{ "SetAEWGold", &UYGS2Req_SetPlayerData::execSetAEWGold },
			{ "SetAEWGoldTolal", &UYGS2Req_SetPlayerData::execSetAEWGoldTolal },
			{ "SetDebugGamerTag", &UYGS2Req_SetPlayerData::execSetDebugGamerTag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYGS2Req_SetPlayerData_GetAEWGold_Statics
	{
		struct YGS2Req_SetPlayerData_eventGetAEWGold_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYGS2Req_SetPlayerData_GetAEWGold_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_SetPlayerData_eventGetAEWGold_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_SetPlayerData_GetAEWGold_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_SetPlayerData_GetAEWGold_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_SetPlayerData_GetAEWGold_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_SetPlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_SetPlayerData_GetAEWGold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_SetPlayerData, nullptr, "GetAEWGold", nullptr, nullptr, sizeof(YGS2Req_SetPlayerData_eventGetAEWGold_Parms), Z_Construct_UFunction_UYGS2Req_SetPlayerData_GetAEWGold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_SetPlayerData_GetAEWGold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_SetPlayerData_GetAEWGold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_SetPlayerData_GetAEWGold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_SetPlayerData_GetAEWGold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_SetPlayerData_GetAEWGold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2Req_SetPlayerData_GetAEWGoldTolal_Statics
	{
		struct YGS2Req_SetPlayerData_eventGetAEWGoldTolal_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYGS2Req_SetPlayerData_GetAEWGoldTolal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_SetPlayerData_eventGetAEWGoldTolal_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_SetPlayerData_GetAEWGoldTolal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_SetPlayerData_GetAEWGoldTolal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_SetPlayerData_GetAEWGoldTolal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_SetPlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_SetPlayerData_GetAEWGoldTolal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_SetPlayerData, nullptr, "GetAEWGoldTolal", nullptr, nullptr, sizeof(YGS2Req_SetPlayerData_eventGetAEWGoldTolal_Parms), Z_Construct_UFunction_UYGS2Req_SetPlayerData_GetAEWGoldTolal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_SetPlayerData_GetAEWGoldTolal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_SetPlayerData_GetAEWGoldTolal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_SetPlayerData_GetAEWGoldTolal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_SetPlayerData_GetAEWGoldTolal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_SetPlayerData_GetAEWGoldTolal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2Req_SetPlayerData_SetAEWGold_Statics
	{
		struct YGS2Req_SetPlayerData_eventSetAEWGold_Parms
		{
			int32 _sAEWGold;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sAEWGold;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYGS2Req_SetPlayerData_SetAEWGold_Statics::NewProp__sAEWGold = { "_sAEWGold", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_SetPlayerData_eventSetAEWGold_Parms, _sAEWGold), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_SetPlayerData_SetAEWGold_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_SetPlayerData_SetAEWGold_Statics::NewProp__sAEWGold,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_SetPlayerData_SetAEWGold_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_SetPlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_SetPlayerData_SetAEWGold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_SetPlayerData, nullptr, "SetAEWGold", nullptr, nullptr, sizeof(YGS2Req_SetPlayerData_eventSetAEWGold_Parms), Z_Construct_UFunction_UYGS2Req_SetPlayerData_SetAEWGold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_SetPlayerData_SetAEWGold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_SetPlayerData_SetAEWGold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_SetPlayerData_SetAEWGold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_SetPlayerData_SetAEWGold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_SetPlayerData_SetAEWGold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2Req_SetPlayerData_SetAEWGoldTolal_Statics
	{
		struct YGS2Req_SetPlayerData_eventSetAEWGoldTolal_Parms
		{
			int32 _sAEWGoldTotal;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sAEWGoldTotal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYGS2Req_SetPlayerData_SetAEWGoldTolal_Statics::NewProp__sAEWGoldTotal = { "_sAEWGoldTotal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_SetPlayerData_eventSetAEWGoldTolal_Parms, _sAEWGoldTotal), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_SetPlayerData_SetAEWGoldTolal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_SetPlayerData_SetAEWGoldTolal_Statics::NewProp__sAEWGoldTotal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_SetPlayerData_SetAEWGoldTolal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_SetPlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_SetPlayerData_SetAEWGoldTolal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_SetPlayerData, nullptr, "SetAEWGoldTolal", nullptr, nullptr, sizeof(YGS2Req_SetPlayerData_eventSetAEWGoldTolal_Parms), Z_Construct_UFunction_UYGS2Req_SetPlayerData_SetAEWGoldTolal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_SetPlayerData_SetAEWGoldTolal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_SetPlayerData_SetAEWGoldTolal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_SetPlayerData_SetAEWGoldTolal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_SetPlayerData_SetAEWGoldTolal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_SetPlayerData_SetAEWGoldTolal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2Req_SetPlayerData_SetDebugGamerTag_Statics
	{
		struct YGS2Req_SetPlayerData_eventSetDebugGamerTag_Parms
		{
			FString _strGameTag;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strGameTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strGameTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_SetPlayerData_SetDebugGamerTag_Statics::NewProp__strGameTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2Req_SetPlayerData_SetDebugGamerTag_Statics::NewProp__strGameTag = { "_strGameTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_SetPlayerData_eventSetDebugGamerTag_Parms, _strGameTag), METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_SetPlayerData_SetDebugGamerTag_Statics::NewProp__strGameTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_SetPlayerData_SetDebugGamerTag_Statics::NewProp__strGameTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_SetPlayerData_SetDebugGamerTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_SetPlayerData_SetDebugGamerTag_Statics::NewProp__strGameTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_SetPlayerData_SetDebugGamerTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_SetPlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_SetPlayerData_SetDebugGamerTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_SetPlayerData, nullptr, "SetDebugGamerTag", nullptr, nullptr, sizeof(YGS2Req_SetPlayerData_eventSetDebugGamerTag_Parms), Z_Construct_UFunction_UYGS2Req_SetPlayerData_SetDebugGamerTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_SetPlayerData_SetDebugGamerTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_SetPlayerData_SetDebugGamerTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_SetPlayerData_SetDebugGamerTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_SetPlayerData_SetDebugGamerTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_SetPlayerData_SetDebugGamerTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYGS2Req_SetPlayerData_NoRegister()
	{
		return UYGS2Req_SetPlayerData::StaticClass();
	}
	struct Z_Construct_UClass_UYGS2Req_SetPlayerData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYGS2Req_SetPlayerData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UYGS2RequestBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yGS2Client,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYGS2Req_SetPlayerData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYGS2Req_SetPlayerData_GetAEWGold, "GetAEWGold" }, // 1796193211
		{ &Z_Construct_UFunction_UYGS2Req_SetPlayerData_GetAEWGoldTolal, "GetAEWGoldTolal" }, // 1530871499
		{ &Z_Construct_UFunction_UYGS2Req_SetPlayerData_SetAEWGold, "SetAEWGold" }, // 1066288887
		{ &Z_Construct_UFunction_UYGS2Req_SetPlayerData_SetAEWGoldTolal, "SetAEWGoldTolal" }, // 2948688273
		{ &Z_Construct_UFunction_UYGS2Req_SetPlayerData_SetDebugGamerTag, "SetDebugGamerTag" }, // 3937434271
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYGS2Req_SetPlayerData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YGS2Req_SetPlayerData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YGS2Req_SetPlayerData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYGS2Req_SetPlayerData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYGS2Req_SetPlayerData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYGS2Req_SetPlayerData_Statics::ClassParams = {
		&UYGS2Req_SetPlayerData::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UYGS2Req_SetPlayerData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYGS2Req_SetPlayerData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYGS2Req_SetPlayerData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYGS2Req_SetPlayerData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYGS2Req_SetPlayerData, 3660075928);
	template<> YGS2CLIENT_API UClass* StaticClass<UYGS2Req_SetPlayerData>()
	{
		return UYGS2Req_SetPlayerData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYGS2Req_SetPlayerData(Z_Construct_UClass_UYGS2Req_SetPlayerData, &UYGS2Req_SetPlayerData::StaticClass, TEXT("/Script/yGS2Client"), TEXT("UYGS2Req_SetPlayerData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYGS2Req_SetPlayerData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
