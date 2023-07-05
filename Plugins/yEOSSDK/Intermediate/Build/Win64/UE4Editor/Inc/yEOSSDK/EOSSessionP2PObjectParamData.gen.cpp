// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSSessionP2PObjectParamData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSSessionP2PObjectParamData() {}
// Cross Module References
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionP2PObjectParamData();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionObjectParamType();
// End Cross Module References
class UScriptStruct* FEOSSessionP2PObjectParamData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YEOSSDK_API uint32 Get_Z_Construct_UScriptStruct_FEOSSessionP2PObjectParamData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSSessionP2PObjectParamData, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EOSSessionP2PObjectParamData"), sizeof(FEOSSessionP2PObjectParamData), Get_Z_Construct_UScriptStruct_FEOSSessionP2PObjectParamData_Hash());
	}
	return Singleton;
}
template<> YEOSSDK_API UScriptStruct* StaticStruct<FEOSSessionP2PObjectParamData>()
{
	return FEOSSessionP2PObjectParamData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSSessionP2PObjectParamData(FEOSSessionP2PObjectParamData::StaticStruct, TEXT("/Script/yEOSSDK"), TEXT("EOSSessionP2PObjectParamData"), false, nullptr, nullptr);
static struct FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSSessionP2PObjectParamData
{
	FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSSessionP2PObjectParamData()
	{
		UScriptStruct::DeferCppStructOps<FEOSSessionP2PObjectParamData>(FName(TEXT("EOSSessionP2PObjectParamData")));
	}
} ScriptStruct_yEOSSDK_StaticRegisterNativesFEOSSessionP2PObjectParamData;
	struct Z_Construct_UScriptStruct_FEOSSessionP2PObjectParamData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductUserID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_UserParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Kind_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Kind;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionP2PObjectParamData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PObjectParamData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSSessionP2PObjectParamData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSSessionP2PObjectParamData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionP2PObjectParamData_Statics::NewProp_Transform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionP2PObjectParamData" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PObjectParamData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEOSSessionP2PObjectParamData_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionP2PObjectParamData, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionP2PObjectParamData_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionP2PObjectParamData_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionP2PObjectParamData_Statics::NewProp_ProductUserID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionP2PObjectParamData" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PObjectParamData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSSessionP2PObjectParamData_Statics::NewProp_ProductUserID = { "ProductUserID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionP2PObjectParamData, ProductUserID), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionP2PObjectParamData_Statics::NewProp_ProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionP2PObjectParamData_Statics::NewProp_ProductUserID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionP2PObjectParamData_Statics::NewProp_Index_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionP2PObjectParamData" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PObjectParamData.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEOSSessionP2PObjectParamData_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionP2PObjectParamData, Index), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionP2PObjectParamData_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionP2PObjectParamData_Statics::NewProp_Index_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEOSSessionP2PObjectParamData_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionP2PObjectParamData_Statics::NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionP2PObjectParamData" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PObjectParamData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEOSSessionP2PObjectParamData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionP2PObjectParamData, Type), Z_Construct_UEnum_yEOSSDK_EEOSSessionObjectParamType, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionP2PObjectParamData_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionP2PObjectParamData_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionP2PObjectParamData_Statics::NewProp_UserParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionP2PObjectParamData" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PObjectParamData.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEOSSessionP2PObjectParamData_Statics::NewProp_UserParam = { "UserParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionP2PObjectParamData, UserParam), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionP2PObjectParamData_Statics::NewProp_UserParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionP2PObjectParamData_Statics::NewProp_UserParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionP2PObjectParamData_Statics::NewProp_Kind_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionP2PObjectParamData" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PObjectParamData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSSessionP2PObjectParamData_Statics::NewProp_Kind = { "Kind", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionP2PObjectParamData, Kind), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionP2PObjectParamData_Statics::NewProp_Kind_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionP2PObjectParamData_Statics::NewProp_Kind_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEOSSessionP2PObjectParamData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionP2PObjectParamData_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionP2PObjectParamData_Statics::NewProp_ProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionP2PObjectParamData_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionP2PObjectParamData_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionP2PObjectParamData_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionP2PObjectParamData_Statics::NewProp_UserParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionP2PObjectParamData_Statics::NewProp_Kind,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSSessionP2PObjectParamData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
		nullptr,
		&NewStructOps,
		"EOSSessionP2PObjectParamData",
		sizeof(FEOSSessionP2PObjectParamData),
		alignof(FEOSSessionP2PObjectParamData),
		Z_Construct_UScriptStruct_FEOSSessionP2PObjectParamData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionP2PObjectParamData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionP2PObjectParamData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionP2PObjectParamData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionP2PObjectParamData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSSessionP2PObjectParamData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSSessionP2PObjectParamData"), sizeof(FEOSSessionP2PObjectParamData), Get_Z_Construct_UScriptStruct_FEOSSessionP2PObjectParamData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSSessionP2PObjectParamData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSSessionP2PObjectParamData_Hash() { return 3100872067U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
